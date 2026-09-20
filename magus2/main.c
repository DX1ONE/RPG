#include <stdio.h>
#include <time.h>
#include <unistd.h>  //Para usar a função sleep e dinamizar o projeto
#include <stdlib.h>  //Para tratamento de exceções de strings em opções de int
#include <string.h>  //Para lidar com strings
#include <ctype.h>   //Para lidar com strings

#include "magus.h"

int main()
{
#ifdef __EMSCRIPTEN__
    // No navegador, cada leitura de stdin precisa virar uma chamada de
    // sistema por vez (para poder pausar/retomar a execução com Asyncify
    // enquanto espera o jogador digitar); com o stdin bufferizado, a
    // libc tenta preencher um buffer grande de uma vez e quebra isso.
    setvbuf(stdin, NULL, _IONBF, 0);

    // Sem isso, a stdout fica com buffer cheio (padrão da libc quando não
    // é um terminal de verdade): dezenas de printf's — inclusive os de
    // antes e depois de uma pausa dramática (sleep) — só chegariam ao
    // navegador de uma vez, num único bloco, quando o buffer enchesse ou
    // o jogo terminasse. Sem buffer nenhum, cada printf vira uma escrita
    // (fd_write) na hora — ver web/index.html para a outra metade disso:
    // a camada de TTY do navegador ainda precisa de ajuda pra saber
    // quando soltar pro jogador o que não termina em quebra de linha.
    setvbuf(stdout, NULL, _IONBF, 0);
#endif

    srand(time(NULL));

    int opcao = -1;      //Alternativas no Menu do Jogo

    int personagem = -1; // Alternativas entre os personagens protagonistas

    int nivel = -1;      // Alternativas entres os níveis de jogabilidade

    int jogar = 1;

    int k = 0;           // Jogador da vez (índice na tabela)

    int cadastrados = 0; // Quantos jogadores já têm nome na tabela

    struct player_t jogadores[JOGADORES_MAX];
    int a;
    for(a = 0; a<JOGADORES_MAX; a++)
    {
        jogadores[a].vitorias = 0;
        jogadores[a].derrotas = 0;
        jogadores[a].pontuacao = 0;
        jogadores[a].nome[0] = '\0';
    }
    while(jogar == 1 && k < JOGADORES_MAX )
    {
        int jogar = 1;

        limpar_tela();// Nome do Jogador
        printf("     ========================================================================================================================================\n");
        mostrar_logo_magus();
        printf("     ========================================================================================================================================\n");
        printf("                             SEJA BEM VINDO BRAVO GUERREIRO, AO MAGUS, O RPG NARRATIVO MAIS TEMIDO DE TODOS                                  \n");
        printf("                                                                                                                                             \n");
        printf("                                       ||DIGITE ABAIXO O SEU NOME PARA INICIAR A SUA JORNADA||                                               \n");
        printf("     >>  ");
        ler_nome(jogadores[k].nome, sizeof jogadores[k].nome);
        cadastrados = k + 1; // nomes novos sempre entram na próxima vaga
        jogar = 2;

        while(jogar == 2)
        {
            /*MENU DO JOGO*/
            limpar_tela();
            printf("     ========================================================================================================================================\n");
            mostrar_logo_magus();
            printf("     ========================================================================================================================================\n");
            printf("\n");
            printf("     Olá, %s! Seja muito bem vindo(a) ao M A G U S, você acha que está preparado(a) para este desafio? \n     Então comece um  novo jogo ou saia de fininho HA HA HA!\n", jogadores[k].nome);
            printf("\n");
            printf("     1.【      Ｎｏｖｏ　Ｊｏｇｏ    】\n");
            printf("\n");
            printf("     2.【   Ｎｏｖｏ Ｊｏｇａｄｏｒ  】 \n");
            printf("\n");
            // Só faz sentido trocar de jogador quando há mais de um na
            // tabela — com dois revezando, é aqui que se alterna entre
            // eles depois de cada partida.
            if (cadastrados > 1)
            {
                printf("     3.【 Ｅｓｃｏｌｈｅｒ Ｊｏｇａｄｏｒ 】\n");
                printf("\n");
                printf("     4.【           Ｓａｉr          】\n");
            }
            else
            {
                printf("     3.【           Ｓａｉr          】\n");
            }
            printf("\n");
            printf("     ========================================================================================================================================\n");
            printf("     > ");
            opcao = ler_opcao(); //Capta a opção do Jogador
            printf("\n");

            // Internamente Sair é sempre 4; quando a opção de trocar de
            // jogador não está na tela, o 3 digitado significa Sair — e o
            // 4 não existe.
            if (cadastrados <= 1)
            {
                if (opcao == 3)      opcao = 4;
                else if (opcao == 4) opcao = 0;
            }

            switch(opcao)
            {
                case 1://Inicia o Jogo
                {
                    // A história de fundo é só para quem está começando:
                    // quem já terminou uma partida (já tem vitória ou
                    // derrota na tabela) leu tudo isso na primeira vez e
                    // vai direto para a escolha de personagem.
                    if (jogadores[k].vitorias + jogadores[k].derrotas == 0)
                    {
                        mostrar_introducao();
                    }

                    while(1)
                    {
                        limpar_tela();
                        printf("     ========================================================================================================================================\n");
                        mostrar_logo_magus();
                        printf("     ========================================================================================================================================\n");
                        printf("\n");
                        printf("     Escolha seu personagem: \n\n");//Escolha de Personagem Protagonista
                        printf("     ============================================================  𝓟 𝓮 𝓻 𝓼 𝓸 𝓷 𝓪 𝓰 𝓮 𝓶  ==========================================================\n\n");
                        printf("     ❶ - Zauber  【 Sábio | Paciente | Vagaroso 】\n");
                        printf("     ❷ - Quelle  【 Rápida | Esperta | Impaciente 】\n\n");
                        printf("     >>");
                        personagem = ler_opcao();
                        printf("\n");

                        if (personagem != 1 && personagem != 2)
                        {
                            printf("Escolha uma opção válida!!!\n");
                            continue;
                        }
                        break;
                    }

                    while(1)
                    {
                        limpar_tela();
                        printf("     ========================================================================================================================================\n");
                        mostrar_logo_magus();
                        printf("     ========================================================================================================================================\n");
                        printf("\n");
                        printf("     Escolha a dificuldade do jogo: \n\n");//Escolha de Nível de Jogo
                        printf("     ==============================================================  𝓝 𝓲 𝓿 𝓮 𝓲 𝓼 ============================================================\n\n");
                        printf("     ❶ - Básico\n     ❷ - Médio\n     ❸ - Avançado\n\n");
                        printf("     >>");
                        nivel = ler_opcao();
                        printf("\n");
                        switch(nivel)
                        {
                            case 1:
                            {
                                if (personagem == 1)
                                    jogar_nivel_basico(jogadores, k);
                                else
                                    jogar_nivel_basico_quelle(jogadores, k);
                                break;
                            }

                            case 2:
                            {
                                if (personagem == 1)
                                    jogar_nivel_medio(jogadores, k);
                                else
                                    jogar_nivel_medio_quelle(jogadores, k);
                                break;
                            }

                            case 3:
                            {
                                if (personagem == 1)
                                    jogar_nivel_avancado(jogadores, k);
                                else
                                    jogar_nivel_avancado_quelle(jogadores, k);
                                break;
                            }
                            default:
                            {
                                printf("Escolha uma opção válida!!!\n");
                                continue;
                            }
                        }
                        break;
                    }

                    break;
                }
                case 2://Novo Jogador
                {
                    if (cadastrados >= JOGADORES_MAX)
                    {
                        printf("     >A tabela só tem lugar para %i jogadores, e já está cheia!\n\n", JOGADORES_MAX);
                        sleep(3);
                        break;
                    }

                    // Entra na próxima vaga livre, e não "uma depois do
                    // jogador da vez": senão, quem tivesse voltado para um
                    // jogador anterior apagaria o nome de quem veio depois.
                    k = cadastrados;
                    jogar = 1; // sai do menu para o cadastro do nome
                    break;
                }

                case 3://Escolher Jogador (só existe com mais de um cadastrado)
                {
                    int escolhido = -1;

                    while (1)
                    {
                        limpar_tela();
                        printf("     ========================================================================================================================================\n");
                        mostrar_logo_magus();
                        printf("     ========================================================================================================================================\n");
                        printf("\n");
                        printf("     Quem joga agora?\n\n");
                        printf("     ==========================================================  𝓙 𝓸 𝓰 𝓪 𝓭 𝓸 𝓻 𝓮 𝓼  =========================================================\n\n");

                        for (int i = 0; i < cadastrados; i++)
                        {
                            printf("     %i - %-22s [ %i vitória(s) | %i derrota(s) | %i ponto(s) ]%s\n\n",
                                   i + 1,
                                   jogadores[i].nome,
                                   jogadores[i].vitorias,
                                   jogadores[i].derrotas,
                                   jogadores[i].pontuacao,
                                   (i == k) ? "   << jogando agora" : "");
                        }

                        printf("     ========================================================================================================================================\n");
                        printf("     > ");
                        escolhido = ler_opcao();
                        printf("\n");

                        if (escolhido >= 1 && escolhido <= cadastrados)
                        {
                            k = escolhido - 1;
                            break;
                        }

                        printf("     >Opção Inválida! Tente Novamente!\n");
                        sleep(2);
                    }

                    break;
                }

                case 4://Sair
                {
                    limpar_tela();
                    printf("     >Eu sabia que ia escapar, a vitória cabe somente aos fortes! Até logo, pobre desertor!\n\n");
                    sleep(1);
                    limpar_tela();
                    printf("██████  ██    ██            ██████  ██  ██████   ██████   ██████      ███████ ██████  ███████ ██ ████████  █████  ███████ \n");
                    printf("██   ██  ██  ██      ██     ██   ██ ██ ██    ██ ██       ██    ██     ██      ██   ██ ██      ██    ██    ██   ██ ██      \n");
                    printf("██████    ████              ██   ██ ██ ██    ██ ██   ███ ██    ██     █████   ██████  █████   ██    ██    ███████ ███████ \n");
                    printf("██   ██    ██        ██     ██   ██ ██ ██    ██ ██    ██ ██    ██     ██      ██   ██ ██      ██    ██    ██   ██      ██ \n");
                    printf("██████     ██               ██████  ██  ██████   ██████   ██████      ██      ██   ██ ███████ ██    ██    ██   ██ ███████ \n");
                    sleep(5);
                    limpar_tela();
                    exit(0);
                }

                default:
                {
                    printf("     >     >Opção Inválida! Tente Novamente!\n");
                    sleep(1);
                    continue;
                }
            }
        }
    }
    printf("██████  ██    ██            ██████  ██  ██████   ██████   ██████      ███████ ██████  ███████ ██ ████████  █████  ███████ \n");
    printf("██   ██  ██  ██      ██     ██   ██ ██ ██    ██ ██       ██    ██     ██      ██   ██ ██      ██    ██    ██   ██ ██      \n");
    printf("██████    ████              ██   ██ ██ ██    ██ ██   ███ ██    ██     █████   ██████  █████   ██    ██    ███████ ███████ \n");
    printf("██   ██    ██        ██     ██   ██ ██ ██    ██ ██    ██ ██    ██     ██      ██   ██ ██      ██    ██    ██   ██      ██ \n");
    printf("██████     ██               ██████  ██  ██████   ██████   ██████      ██      ██   ██ ███████ ██    ██    ██   ██ ███████ \n");
    sleep(5);
    limpar_tela();

    return 0;
}
