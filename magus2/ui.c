#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
            scanf("%i", &escolha);
            getchar();
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
    sleep(6);
    printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
    printf("     ========================================================================================================================================\n");
    sleep(1);
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
