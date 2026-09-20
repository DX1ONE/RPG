#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#include "magus.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>

// No navegador as falas aparecem aos poucos (efeito de digitação), o que
// leva tempo real — e o jogo, do lado C, não espera por isso: ele só
// manda o texto e segue. Sem sincronizar, o jogo chegava à próxima
// limpeza de tela enquanto boa parte do texto ainda nem tinha aparecido,
// e a tela era apagada levando junto o que o jogador ainda não tinha
// lido (era assim que, por exemplo, a mensagem de morte na lama sumia e
// o jogo parecia "voltar sozinho pro menu" sem explicação).
//
// Module.magusDrain() devolve uma promessa que só termina quando tudo o
// que já foi mandado terminou de aparecer na tela. Esperar por ela antes
// de limpar a tela (e antes de cada pausa dramática) mantém o jogo no
// ritmo do que o jogador está realmente lendo.
EM_ASYNC_JS(void, js_limpar_tela, (void), {
    if (typeof Module.magusDrain === "function") {
        await Module.magusDrain();
    }
    if (typeof Module.magusClear === "function") {
        Module.magusClear();
    }
});

// Substitui sleep() no build web (ver magus.h): espera o texto terminar
// de aparecer e só então faz a pausa em si, encurtada — a própria
// digitação já dá o tempo de leitura que as pausas originais davam.
EM_ASYNC_JS(void, js_magus_pause, (unsigned segundos), {
    if (typeof Module.magusDrain === "function") {
        await Module.magusDrain();
    }
    await new Promise(function (resolve) {
        setTimeout(resolve, segundos * 1000 / 6);
    });
});

void magus_web_pause(unsigned segundos)
{
    js_magus_pause(segundos);
}

// Pausa em milissegundos, para os tempos do fim de partida (que não
// seguem as pausas do roteiro original). Também espera o texto aparecer.
EM_ASYNC_JS(void, js_pausa_ms, (unsigned ms), {
    if (typeof Module.magusDrain === "function") {
        await Module.magusDrain();
    }
    await new Promise(function (resolve) { setTimeout(resolve, ms); });
});

// Espera o jogador apertar qualquer tecla (ou tocar na tela, no celular).
EM_ASYNC_JS(void, js_esperar_tecla, (void), {
    if (typeof Module.magusDrain === "function") {
        await Module.magusDrain();
    }
    if (typeof Module.magusEsperarTecla === "function") {
        await Module.magusEsperarTecla();
    }
});
#endif

// Tempo para o jogador ler a tela de morte/vitória antes de o placar
// entrar no lugar dela.
static void pausa_leitura(void)
{
#ifdef __EMSCRIPTEN__
    js_pausa_ms(2500);
#else
    sleep(5);
#endif
}

// O fim de partida só avança quando o jogador mandar.
static void esperar_tecla(void)
{
#ifdef __EMSCRIPTEN__
    js_esperar_tecla();
#else
    getchar();
#endif
}

// ---------------------------------------------------------------------
// Leitura da entrada do jogador
//
// O jogo inteiro perguntava com scanf("%i", &x) seguido de getchar().
// Isso tinha dois problemas. O menor: digitar letras onde se esperava um
// número deixava a variável com o valor ANTERIOR, e o scanf seguinte
// relia os mesmos caracteres, um por vez. O maior: quando a entrada
// acabava (fim de arquivo — Ctrl+D num terminal, ou um script que
// terminou de mandar respostas), o scanf falhava na hora, sem consumir
// nada, e os menus que fazem "continue" quando a opção é inválida
// ficavam repetindo a pergunta para sempre, escrevendo "Opção Inválida"
// até encher o disco.
//
// Agora toda pergunta passa por aqui: lê-se a linha inteira de uma vez,
// e o fim da entrada encerra o jogo em vez de virar um laço infinito.
// ---------------------------------------------------------------------

// Não há mais como perguntar nada ao jogador: despede-se e encerra.
static void entrada_encerrada(void)
{
    printf("\n     >A entrada terminou. Até a próxima, aventureiro!\n\n");
    exit(0);
}

// Lê uma linha inteira, sem o '\n' do fim. Se a linha for maior que o
// destino, o resto dela é descartado para não sobrar lixo esperando a
// próxima pergunta. Não retorna se a entrada tiver acabado.
static void ler_linha(char *destino, size_t tamanho)
{
    if (fgets(destino, (int)tamanho, stdin) == NULL)
    {
        entrada_encerrada();
    }

    size_t fim = strcspn(destino, "\n");
    if (destino[fim] == '\n')
    {
        destino[fim] = '\0';
    }
    else
    {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }
    }
}

// Devolve o número digitado, ou OPCAO_INVALIDA se veio qualquer outra
// coisa — assim cada menu cai no seu próprio "Opção Inválida!".
int ler_opcao(void)
{
    char linha[64];
    char *fim = NULL;
    long valor;

    ler_linha(linha, sizeof linha);

    valor = strtol(linha, &fim, 10);
    if (fim == linha) return OPCAO_INVALIDA;          // não era número
    while (*fim == ' ' || *fim == '\t') fim++;
    if (*fim != '\0') return OPCAO_INVALIDA;          // tinha sobra ("1x")
    if (valor < INT_MIN || valor > INT_MAX) return OPCAO_INVALIDA;

    return (int)valor;
}

// O nome cabe em 21 bytes, e em UTF-8 uma letra acentuada ocupa dois —
// então um nome comprido pode ser cortado no meio de uma letra. Joga
// fora esse pedaço solto, que apareceria como um símbolo quebrado na
// saudação e no placar.
static void aparar_utf8(char *texto)
{
    size_t n = strlen(texto);
    size_t i = n;
    size_t esperado;
    unsigned char lider;

    // Volta até o início da última letra, pulando bytes de continuação.
    while (i > 0 && ((unsigned char)texto[i - 1] & 0xC0) == 0x80) i--;
    if (i == 0) return;

    lider = (unsigned char)texto[i - 1];
    if (lider < 0x80) return;                      // termina em ASCII: ok
    else if ((lider & 0xE0) == 0xC0) esperado = 2;
    else if ((lider & 0xF0) == 0xE0) esperado = 3;
    else if ((lider & 0xF8) == 0xF0) esperado = 4;
    else { texto[i - 1] = '\0'; return; }          // byte solto, inválido

    if (n - (i - 1) < esperado) texto[i - 1] = '\0';
}

// Nome do jogador: linha inteira, sem espaços sobrando nas pontas.
void ler_nome(char *destino, size_t tamanho)
{
    size_t inicio = 0;
    size_t fim;

    ler_linha(destino, tamanho);

    while (destino[inicio] == ' ' || destino[inicio] == '\t') inicio++;
    if (inicio > 0) memmove(destino, destino + inicio, strlen(destino + inicio) + 1);

    fim = strlen(destino);
    while (fim > 0 && (destino[fim - 1] == ' ' || destino[fim - 1] == '\t')) fim--;
    destino[fim] = '\0';

    aparar_utf8(destino);

    // Quem só aperta ENTER não fica sem nome no placar.
    if (destino[0] == '\0')
    {
        snprintf(destino, tamanho, "%s", "Jogador");
    }
}

// Reduz a resposta digitada a letras minúsculas sem acento e sem
// espaços, para que "O Nada", "o nada!", "NADA" e "nãda" cheguem todas
// aqui como "onada"/"nada".
static void normalizar(const char *entrada, char *saida, size_t tamanho)
{
    size_t j = 0;

    for (size_t i = 0; entrada[i] != '\0' && j + 1 < tamanho; i++)
    {
        unsigned char c = (unsigned char)entrada[i];
        unsigned char base = 0;

        if (c == 0xC3 && entrada[i + 1] != '\0')
        {
            // Letra acentuada em UTF-8 (á, â, ã, é, ç...) ocupa dois
            // bytes; o segundo diz qual é a letra de base.
            unsigned char seg = (unsigned char)entrada[++i];
            if (seg >= 0xA0) seg = (unsigned char)(seg - 0x20); // minúscula -> maiúscula
            if      (seg >= 0x80 && seg <= 0x85) base = 'a';
            else if (seg == 0x87)                base = 'c';
            else if (seg >= 0x88 && seg <= 0x8B) base = 'e';
            else if (seg >= 0x8C && seg <= 0x8F) base = 'i';
            else if (seg == 0x91)                base = 'n';
            else if (seg >= 0x92 && seg <= 0x96) base = 'o';
            else if (seg >= 0x99 && seg <= 0x9C) base = 'u';
        }
        else if (isalpha(c))
        {
            base = (unsigned char)tolower(c);
        }

        if (base != 0) saida[j++] = (char)base;
    }

    saida[j] = '\0';
}

// A charada do Mantedor passou a ser respondida por escrito, em vez de
// escolher entre duas opções (que entregavam a resposta e faziam dela
// um cara ou coroa). Devolve 1 se acertou e 2 se errou, que é o que os
// switch() da história já esperavam. Aceita as muitas formas de dizer a
// mesma coisa: "nada", "o nada", "nenhuma coisa", "absolutamente nada".
int ler_resposta_charada(void)
{
    char linha[120];
    char limpa[120];

    while (1)
    {
        ler_linha(linha, sizeof linha);

        // Só uma linha em branco faz o Mantedor esperar de novo. Uma
        // resposta que existe mas não tem letra nenhuma ("1", "???") é
        // uma resposta errada, e não uma resposta que não veio — senão
        // quem digitasse um número ficaria preso na mesma pergunta.
        if (linha[strspn(linha, " \t")] == '\0')
        {
            printf("     >Mantedor~'Estou esperando, feiticeiro...'\n");
            printf("     >Sua resposta: ");
            continue;
        }

        normalizar(linha, limpa, sizeof limpa);

        if (strstr(limpa, "nada") != NULL ||
            strstr(limpa, "nenhum") != NULL ||
            strstr(limpa, "nothing") != NULL ||
            strstr(limpa, "vazio") != NULL)
        {
            return 1;
        }

        return 2;
    }
}

void limpar_tela(void)
{
#ifdef __EMSCRIPTEN__
    js_limpar_tela();
#else
    system("clear");
#endif
}

void mostrar_logo_magus(void)
{
    printf("                                          ▄▄▄▄███▄▄▄▄      ▄████████    ▄██████▄  ███    █▄     ▄████████                                    \n");
    printf("                                        ▄██▀▀▀███▀▀▀██▄   ███    ███   ███    ███ ███    ███   ███    ███                                    \n");
    printf("                                        ███   ███   ███   ███    ███   ███    █▀  ███    ███   ███    █▀                                     \n");
    printf("                                        ███   ███   ███   ███    ███  ▄███        ███    ███   ███                                           \n");
    printf("                                        ███   ███   ███ ▀███████████ ▀▀███ ████▄  ███    ███ ▀███████████                                    \n");
    printf("                                        ███   ███   ███   ███    ███   ███    ███ ███    ███          ███                                    \n");
    printf("                                        ███   ███   ███   ███    ███   ███    ███ ███    ███    ▄█    ███                                    \n");
    printf("                                         ▀█   ███   █▀    ███    █▀    ████████▀  ████████▀   ▄████████▀                                     \n");
}

// Alguns caminhos chegavam ao cajado cedo demais (4 ou 5 escolhas). Esta
// é a reta final que eles atravessam antes do desfecho, para que nenhuma
// vitória saia com menos de 6 escolhas.
//
// A dificuldade muda o que está em jogo aqui: no Básico as duas saídas
// seguem em frente (só mudam o caminho), no Médio e no Avançado a escolha
// errada encerra a corrida. Devolve 1 se o jogador chegou ao cajado.
int reta_final(struct player_t jogadores[JOGADORES_MAX], int k, int escolhas, int nivel)
{
    static const char *pergunta[] = {
        "     >O caminho se fecha num paredão de pedra com duas passagens.\n\n"
        "     >Ir pela fenda estreita ou pela trilha alta? (Fenda = 1 ; Trilha = 2)",

        "     >Do outro lado, a névoa engole tudo e dois ruídos disputam sua atenção.\n\n"
        "     >Seguir a água que corre ou o vento que assobia? (Água = 1 ; Vento = 2)",
    };
    static const char *acerto[] = {
        "     >A fenda é apertada, mas curta — e desemboca já do outro lado do paredão.",
        "     >A água desce para o mesmo lugar que você procura. É só acompanhar.",
    };
    static const char *alternativa[] = {
        "     >A trilha alta é mais longa, mas te deixa exatamente onde você queria chegar.",
        "     >O vento assobia entre as pedras e, sem querer, aponta o caminho certo.",
    };
    static const char *fracasso[] = {
        "     >A trilha alta cede sob seus pés. A queda é longa, e o cajado fica para quem chegar depois.",
        "     >O vento leva você para o lado errado da névoa. Quando a vista volta, já é tarde demais.",
    };

    int total = (int)(sizeof(pergunta) / sizeof(pergunta[0]));
    if (escolhas > total) escolhas = total;

    for (int passo = 0; passo < escolhas; passo++)
    {
        int escolha = -1;

        while (1)
        {
            printf("%s", pergunta[passo]);
            escolha = ler_opcao();
            printf("\n\n     ========================================================================================================================================\n");

            if (escolha == 1)
            {
                jogadores[k].pontuacao += 10;
                printf("%s\n\n", acerto[passo]);
                break;
            }

            if (escolha == 2)
            {
                if (nivel == NIVEL_BASICO)
                {
                    jogadores[k].pontuacao += 10;
                    printf("%s\n\n", alternativa[passo]);
                    break;
                }

                printf("%s\n\n", fracasso[passo]);
                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");
                return 0;
            }

            printf("     >Opção Inválida! Tente Novamente!\n");
        }
    }

    return 1;
}

// A história de fundo, contada uma vez por jogador (ver main.c): quem já
// jogou uma partida vai direto para a escolha de personagem.
void mostrar_introducao(void)
{
    limpar_tela();
    printf("     ========================================================================================================================================\n");
    mostrar_logo_magus();
    printf("     ========================================================================================================================================\n");
    printf("\n");
    printf("     Olha só! Parece que temos um jogador corajoso na área!\n");
    printf("     Muito bem,então... Vamos começar!\n");
    printf("     ========================================================================================================================================\n");
    sleep(1);
    printf("     >Era uma vez, um filho de feiticeiros que morava em uma pequena vila.\n\n");
    sleep(4);
    printf("     >Devido a uma perseguição, os pais tiveram que abandoná-lo em um cesto embaixo de uma árvore na floresta perto da vila\n\n");
    sleep(4);
    printf("     >Zauber conseguiu sobreviver por conta de algumas pessoas que moravam isolados na floresta e o encontraram.\n\n");
    sleep(4);
    printf("     >Após vários anos, ele já era um hábil feiticeiro e, acabou encontrando uma elfa passando na floresta!\n\n");
    sleep(4);
    printf("     >Seu nome era Quelle e ela era bem jovem. Eles formaram um bela amizade que durou por anos, até que...\n\n");
    sleep(4);
    printf("     >Eles descobriram a existência de um cajado muito poderoso que estava escondido perto de onde eles estavam!\n\n");
    sleep(4);
    printf("     >Depois disso, eles acabaram brigando e entraram em uma corrida pelo Cajado MAGUS\n\n");
    sleep(4);
    printf("     >Sua missão é escolher um dos dois e ganhar esta corrida pelo cajado depois de enfrentar todas as dificuldades no caminho!\n\n");
    sleep(4);
    printf("     >Boa Sorte,Jogador...\n\n");
    printf("     ========================================================================================================================================\n\n\n");
    printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
    printf("     ========================================================================================================================================\n");

    // A história inteira fica na tela até aqui, e a próxima coisa que o
    // jogo faz é limpá-la para a escolha de personagem. Antes isso
    // acontecia sozinho, depois de uma pausa fixa de 6 segundos — quem
    // lia com calma (ou chegava no meio de um parágrafo) perdia o fim da
    // história sem ter como voltar. Agora a passagem é do jogador: a
    // história só sai da tela quando ele mandar.
#ifdef __EMSCRIPTEN__
    printf("\n                                        >Pressione qualquer tecla para começar a sua jornada...\n");
#else
    printf("\n                                        >Pressione ENTER para começar a sua jornada...\n");
#endif
    esperar_tecla();
}

// Fecha a partida em três momentos, chamada ao final de cada desfecho da
// história: (1) segura a tela de morte/vitória que acabou de ser contada,
// para o jogador ler; (2) troca para o placar, sozinho na tela; (3) só
// volta ao início quando o jogador mandar. Antes isso era tudo de uma vez
// — o placar entrava colado embaixo do desfecho e o jogo voltava sozinho
// ao menu depois de um tempo fixo.
void mostrar_placar(struct player_t jogadores[JOGADORES_MAX])
{
    pausa_leitura();
    limpar_tela();

    // Ordena uma CÓPIA: ordenar o vetor original trocava os jogadores de
    // posição, e quem estava jogando é identificado pelo índice (k) lá no
    // main — depois de um placar, esse índice passava a apontar para
    // outra pessoa, e as vitórias/derrotas/pontos seguintes iam parar na
    // ficha errada (dava pra ver com "Novo Jogador", com 2 ou mais).
    struct player_t ordenados[JOGADORES_MAX];
    for (int i = 0; i < JOGADORES_MAX; i++)
    {
        ordenados[i] = jogadores[i];
    }

    for (int i = 0; i < JOGADORES_MAX - 1; i++)
    {
        for (int j = i + 1; j < JOGADORES_MAX; j++)
        {
            if (ordenados[i].vitorias < ordenados[j].vitorias)
            {
                struct player_t troca = ordenados[i];
                ordenados[i] = ordenados[j];
                ordenados[j] = troca;
            }
        }
    }

    printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
    printf("                                                                  𝐒 𝐂 𝐎 𝐑 𝐄 𝐁 𝐎 𝐀 𝐑 𝐃                                                             \n\n\n");
    printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
    printf("     %-50s %-50s %60s %60s","-= 𝐉 𝐎 𝐆 𝐀 𝐃 𝐎 𝐑 =-","-= 𝐏 𝐎 𝐍 𝐓 𝐔 𝐀 Ç Ã 𝐎 =-","-= 𝐕 𝐈 𝐓 Ó 𝐑 𝐈 𝐀 𝐒 =-", "-= 𝐃 𝐄 𝐑 𝐑 𝐎 𝐓 𝐀 𝐒 =-");

    for (int i = 0; i < JOGADORES_MAX; i++)
    {
        printf("\n\t%-30s\t%-40.2d\t%-40.2d\t%-40.2d\n", ordenados[i].nome, ordenados[i].pontuacao, ordenados[i].vitorias, ordenados[i].derrotas);
    }

    printf("\n\n     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n");
#ifdef __EMSCRIPTEN__
    printf("                                        >Pressione qualquer tecla para voltar ao início...\n");
#else
    printf("                                        >Pressione ENTER para voltar ao início...\n");
#endif
    esperar_tecla();
}
