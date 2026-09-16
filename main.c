#include <stdio.h>
#include <time.h>
#include <unistd.h>  //Para usar a função sleep e dinamizar o projeto
#include <stdlib.h>  //Para tratamento de exceções de strings em opções de int
#include <string.h>  //Para lidar com strings
#include <ctype.h>   //Para lidar com strings

#include "magus.h"

int main()
{
    srand(time(NULL));

    int opcao = -1;      //Alternativas no Menu do Jogo

    int nivel = -1;      // Alternativas entres os níveis de jogabilidade

    int jogar = 1;

    int k = 0;

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
        scanf("%20[^\n]s", jogadores[k].nome);
        getchar();
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
            printf("     3.【           Ｓａｉr          】\n");
            printf("\n");
            printf("     ========================================================================================================================================\n");
            printf("     > ");
            scanf("%i", &opcao); //Capta a opção do Jogador
            getchar();
            printf("\n");

            switch(opcao)
            {
                case 1://Inicia o Jogo
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
                    printf("     >Sua missão é, como o feiticeiro Zauber, ganhar esta corrida pelo cajado depois de enfrentar todas as dificuldades no caminho!\n\n");
                    sleep(4);
                    printf("     >Boa Sorte,Jogador...\n\n");
                    printf("     ========================================================================================================================================\n\n\n");
                    sleep(6);
                    printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
                    printf("     ========================================================================================================================================\n");
                    sleep(1);

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
                        scanf("%i", &nivel);
                        getchar();
                        printf("\n");
                        switch(nivel)
                        {
                            case 1:
                            {
                                jogar_nivel_basico(jogadores, k);
                                break;
                            }

                            case 2:
                            {
                                jogar_nivel_medio(jogadores, k);
                                break;
                            }

                            case 3:
                            {
                                jogar_nivel_avancado(jogadores, k);
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
                case 2:
                {
                    jogar = 1;
                    k += 1;
                    break;
                }

                case 3:
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
