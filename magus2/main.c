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
                    printf("     >Sua missão é escolher um dos dois e ganhar esta corrida pelo cajado depois de enfrentar todas as dificuldades no caminho!\n\n");
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
                        printf("     Escolha seu personagem: \n\n");//Escolha de Personagem Protagonista
                        printf("     ============================================================  𝓟 𝓮 𝓻 𝓼 𝓸 𝓷 𝓪 𝓰 𝓮 𝓶  ==========================================================\n\n");
                        printf("     ❶ - Zauber  【 Sábio | Paciente | Vagaroso 】\n");
                        printf("     ❷ - Quelle  【 Rápida | Esperta | Impaciente 】\n\n");
                        printf("     >>");
                        scanf("%i", &personagem);
                        getchar();
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
                        scanf("%i", &nivel);
                        getchar();
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
