#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "magus.h"

void jogar_nivel_avancado(struct player_t jogadores[JOGADORES_MAX], int k)
{
    int escolha_1 = -1, escolha_2 = -1, escolha_3 = -1, escolha_4 = -1;
    int escolha_5 = -1, escolha_6 = -1, escolha_7 = -1;
    int escolha_dado, escolha_dado_2;

                                        printf("     ========================================================================================================================================\n");
                                        printf("     ============================================================ 𝓐 𝓿 𝓪 𝓷 ç 𝓪 𝓭 𝓸 ===========================================================\n");
                                        printf("     ========================================================================================================================================\n\n\n");
                                        printf("                                                                   (                                                                 \n");
                                        printf("                                                       .            )        )                                                       \n");
                                        printf("                                                                (  (|              .                                                 \n");
                                        printf("                                                              )   )   ( ( (                                                          \n");
                                        printf("                                                      *  (   ((  /     )) ))  (  )    )                                              \n");
                                        printf("                                                    (         ) (          |  ))( )  (|                                              \n");
                                        printf("                                                    >)     ))/   |          )/   ((  )                                               \n");
                                        printf("                                                    (     (      .        -.     V )/   )(    (                                      \n");
                                        printf("                                                         /     .                .        ))   ))                                     \n");
                                        printf("                                                      )(      (  | |   )            .    (  /                                        \n");
                                        printf("                                                      (    ,'))       /           ( `.    )                                          \n");
                                        printf("                                                     ( >  ,'/__      ))            __`.  /                                           \n");
                                        printf("                                                    (     | /  ___   (  /     ___     | ( (                                          \n");
                                        printf("                                                      .)  |/  /    __      __/   |    |  ))                                          \n");
                                        printf("                                                        . |>  |      | __ |      /   <|  /                                           \n");
                                        printf("                                                         )/    ____ / :..:  ____/       <                                            \n");
                                        printf("                                                  )     (|__  .      / ;:            __| )  (                                        \n");
                                        printf("                                                 ((    ) )  ~--_     --  --      _--~    /  ))                                       \n");
                                        printf("                                                       (    |  ||               ||  |   (  /                                         \n");
                                        printf("                                                         .  |  ||_             _||  |  /                                             \n");
                                        printf("                                                          > :  |  ~V+-I_I_I-+V~  |  : (.                                             \n");
                                        printf("                                                        (   :  T    _     _   /T  : ./                                               \n");
                                        printf("                                                             :    T^T T-+-T T^T    ;<                                                \n");
                                        printf("                                                              . `--=.._____..=--'. ./                                                \n"); 
                                        printf("\n\n\n     ========================================================================================================================================\n");
                                        printf("     ========================================================================================================================================\n");
                                        sleep(5);
    			                        limpar_tela();
                                        printf("     Entrando no Mundo como Zauber...\n");
                                        usleep(500);
                                        printf("                                                         --- 𝐀 𝐭 𝐫 𝐢 𝐛 𝐮 𝐭 𝐨 𝐬 ---\n     𝐒 𝐚 𝐛 𝐞 𝐝 𝐨 𝐫 𝐢 𝐚\n\n     𝐏 𝐚 𝐜 𝐢 𝐞 𝐧 𝐜 𝐢 𝐚\n\n     𝐕 𝐚 𝐠 𝐚 𝐫 𝐨 𝐬 𝐢 𝐝 𝐚 𝐝 𝐞\n\n");
                                        printf("     ========================================================================================================================================\n");
                                        sleep(5);
                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Você acorda em sua torre...\n\n");

                                        while(1)
                                        {
                                            printf("     >Sair logo da torre? (S = 1 ; N = 2)");
                                            scanf("%i", &escolha_1);
                                            getchar();
                                            printf("\n\n");
                                            printf("     ========================================================================================================================================\n");

                                            switch(escolha_1)
                                            { 
                                                case 1: //Saindo da Torre(1)
                                                {
                                                    limpar_tela();
                                                    jogadores[k].pontuacao += 10;

                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Saindo da torre...\n\n");
                                                    printf("     >Ao sair da torre, você se depara com uma bifurcação!\n\n");
                                                    printf("     >Você vê um lado de Floresta e um lado de Deserto...\n\n");

                                                    while(1)
                                                    {
                                                        printf("     >Qual caminho irá escolher? (Floresta = 1 ; Deserto = 2)");
                                                        scanf("%i",&escolha_2);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");


                                                        switch(escolha_2)
                                                        {
                                                            case 1://Indo para a Floresta(1)
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     \n     >Você ajeita as botas e segue para a Floresta...\n\n");
                                                                printf("     >Ao entrar na floresta, se depara com um duende!\n\n");
                                                                printf("     >Duende~'Olááá,caro mago! Buscando matéria prima novamente?'\n\n");
                                                                printf("     >Zauber~'Não desta vez...Aliás,você sabe onde fica o santuário Magiccelium?'\n\n");
                                                                printf("     >Duende~'Ora, que surpresa! Bem...Se não me engano fica por aquele lado ali.'\n\n");
                                                                sleep(2);

                                                                while(1)
                                                                {
                                                                    printf("     Você confiará sua trilha no Duende? (S = 1; N = 2)");
                                                                    scanf("%i", &escolha_3);
                                                                    getchar();
                                                                    printf("\n\n     ========================================================================================================================================\n");


                                                                    switch(escolha_3)
                                                                    {
                                                                        case 1://Indo no caminho do Duende(1)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("\t ========================================================================================================================================\n");
                                                                            printf("     \n     >Decide por confiar no Duende e segue na direção apontada...\n\n");
                                                                            printf("     >Você anda calmamente pela floresta...\n\n");
                                                                            printf("     >De repente ouve um zumbido muito forte!\n\n");
                                                                            printf("     >Um ninho de vespas venenosas acaba de ser atacado e elas estão furiosas!!!\n\n");

                                                                            while(1)
                                                                            {
                                                                                printf("     >Você quer atravessar a nuvem de vespas? (S = 1 ; N = 2)");
                                                                                scanf("%i", &escolha_4);
                                                                                getchar();  
                                                                                printf("\n\t ========================================================================================================================================\n");

                                                                                switch(escolha_4)
                                                                                {
                                                                                    case 1://Atravessar as vespas
                                                                                    {  
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        limpar_tela();
                                                                                        printf("\t ========================================================================================================================================\n");
                                                                                        printf("     \n     >Você corre confiante para atravessar\n\n");
                                                                                        sleep(0);
                                                                                        printf("     >......Ufa! Apesar de algumas ferroadas te deixarem tonto, você sobrevive e atravessa\n\n");
                                                                                        printf("     >Você segue seu caminho...\n\n");
                                                                                        printf("     >Certa hora, você se vê diante de um paredão rochoso que não é possível passar por cima.\n\n");
                                                                                        printf("     >Olhando melhor...Você vê uma fresta bem apertada que parece dar no outro lado.\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Você quer atravessar pela fresta? ( S = 1; N = 2)");
                                                                                            scanf("%i", &escolha_5);
                                                                                            getchar();
                                                                                            printf("\n\t ========================================================================================================================================\n");

                                                                                            switch (escolha_5)
                                                                                            {
                                                                                                case 1://Passando Pela Fresta(1)
                                                                                                { 
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    limpar_tela();
                                                                                                    printf("\t ========================================================================================================================================\n");
                                                                                                    printf("     \n     >Você respira fundo...Se expreme para passar e,...\n\n");
                                                                                                    printf("     >Deu certo!! Você passou.\n\n");
                                                                                                    printf("     >Em seguida, você olha para a frente e se depara com um enorme santuário!!!\n\n");
                                                                                                    printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                    printf("                                                        /      /      \n");
                                                                                                    printf("                                                       ||______||     \n");
                                                                                                    printf("                                                       || ^  ^ ||     \n");
                                                                                                    printf("                                                        | |  | |/     \n");
                                                                                                    printf("                                                        |______|      \n"); 
                                                                                                    printf("                      __                                |  __  |      \n");  
                                                                                                    printf("                     /          ________________________|_/   _|__    \n");
                                                                                                    printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                    printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                    printf("                  /________  /=========================/________ =|   \n");
                                                                                                    printf("               *  |        |/==========================|        |=|   \n");
                                                                                                    printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                    printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                    printf("            *******        |          /_____           |      * | |   \n");
                                                                                                    printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                    printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                    printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                    printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                    printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                    printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                    printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                    printf("     >Você se depara com um mantedor do santuário:\n\n");
                                                                                                    printf("     >Mantedor~'Olá! Como posso ajudá-lo?'\n\n");
                                                                                                    printf("     >Zauber~'Olá,homem santo! Estou atrás do Cajado MAGUS!!'\n\n");
                                                                                                    printf("     >Mantedor~'Ah sim... O famoso Cajado...'\n\n");
                                                                                                    printf("     >O Mantedor respira calmamente, olha nos teus olhos e diz: \n\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Mantedor~'É mais poderoso que os deuses, mais maligno que os demônios. É algo que os pobres tem e os ricos precisam.\n     Se você comê-lo, você morre. O que é isto? \n     (O Tempo = 2 ; O Nada = 1)>'");//CHARADA
                                                                                                        scanf("%i", &escolha_6); 
                                                                                                        getchar();
                                                                                                        printf("\n\t ========================================================================================================================================\n");

                                                                                                        switch(escolha_6)
                                                                                                        {
                                                                                                            case 1://Acertou a charada
                                                                                                            {
                                                                                                                jogadores[k].pontuacao += 10;

                                                                                                                limpar_tela();
                                                                                                                printf("\t ========================================================================================================================================\n");
                                                                                                                printf("     >O Mantedor da uma risada... Mantedor~'Muito Sábio! Pois bem... Me acompanhe'\n\n");
                                                                                                                printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                                                printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!");
                                                                                                                printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                jogadores[k].vitorias += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            case 2://Errou a charada
                                                                                                            {
                                                                                                                printf("     >Mantedor~'Você precisa mais do que isso para ser digno do MAGUS!'\n\n");
                                                                                                                printf("     >O Mantedor joga uma fumaça em seu rosto que faz com que você adormeça profundamente!\n\n");
                                                                                                                printf("     >Ao acordar, o santuário está vazio... Assim como a cova do antigo  Feiticeiro Ancião Magiccelium...\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                        break;
                                                                                                    }
                                                                                                    break;
                                                                                                }

                                                                                                case 2: // Não Passou a Fresta
                                                                                                {
                                                                                                    printf("     >Você decide por não atravessar...\n\n");
                                                                                                    printf("     >Você ouve um rugido muito auto{RUUUUUUU ROAAAAARRRRRRRRR!!!!\n\n");
                                                                                                    printf("     >De repente um enorme urso em chamas passa correndo e pula encima de você!!!\n\n");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break; 
                                                                                    }

                                                                                    case 2://Não atravessa as vespas
                                                                                    { 
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        printf("     \n     >Você decide por esperar...\n\n");
                                                                                        printf("     >Elas estavam realmente furiosas... Demorou algumas horas para poder passar.\n\n");
                                                                                        printf("     >Você segue seu caminho...\n\n");
                                                                                        printf("     >Certa hora, você se vê diante de um paredão rochoso que não é possível passar por cima.\n\n");
                                                                                        printf("     >Olhando melhor...Você vê uma fresta bem apertada que parece dar no outro lado.\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Você quer atravessar pela fresta? ( S = 1; N = 2)\n");
                                                                                            scanf("%i", &escolha_5);
                                                                                            getchar();

                                                                                            switch(escolha_5)
                                                                                            {
                                                                                                case 1://Atravessando a fresta
                                                                                                {
                                                                                                    printf("     \n     >Você deixa a corda no chão...Se expreme para passar...\n\n");
                                                                                                    printf("     >Ufa! Deu certo e você passou.\n\n");
                                                                                                    printf("     >Em seguida, você olha para a frente e se depara com um enorme santuário!!!\n\n");
                                                                                                    printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                    printf("                                                        /      /      \n");
                                                                                                    printf("                                                       ||______||     \n");
                                                                                                    printf("                                                       || ^  ^ ||     \n");
                                                                                                    printf("                                                        | |  | |/     \n");
                                                                                                    printf("                                                        |______|      \n"); 
                                                                                                    printf("                      __                                |  __  |      \n");  
                                                                                                    printf("                     /          ________________________|_/   _|__    \n");
                                                                                                    printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                    printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                    printf("                  /________  /=========================/________ =|   \n");
                                                                                                    printf("               *  |        |/==========================|        |=|   \n");
                                                                                                    printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                    printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                    printf("            *******        |          /_____           |      * | |   \n");
                                                                                                    printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                    printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                    printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                    printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                    printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                    printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                    printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                    printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                    printf("     >Só possui marcas do cajado... Quelle passou antes de você!\n\n");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                              \n");//FIM

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                }

                                                                                                case 2://Não Atravessa a Fresta
                                                                                                {
                                                                                                    printf("     >Você decide por não atravessar...\n\n");
                                                                                                    printf("     >Você ouve um rugido muito auto{RUUUUUUU ROAAAAARRRRRRRRR!!!!\n\n");
                                                                                                    printf("     >De repente um enorme urso em chamas passa correndo e pula encima de você!!!\n\n");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }

                                                                                    default:
                                                                                    {
                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                        continue;
                                                                                    }
                                                                                }
                                                                                break;
                                                                            }
                                                                            break;
                                                                        }

                                                                        case 2://Indo contra o camindo do Duende(2)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            printf("     >Você espera o duende seguir e vai pelo caminho oposto ao indicado!\n\n");
                                                                            printf("     >Após um tempo você vê que o ar vai ficando mais úmido e...\n\n");
                                                                            printf("     >Você sente a lama em seus pés!... Uma poça de lama interrompe o caminho.\n\n");

                                                                            while(1)
                                                                            {
                                                                                printf("     >Dejesa atravessá-la? (S=1/N=2)");
                                                                                scanf("%i", &escolha_4);
                                                                                getchar();

                                                                                switch(escolha_4)
                                                                                {
                                                                                    case 1:
                                                                                    {
                                                                                        printf("     >Você começa a entrar naquela lama gosmenta...\n\n");
                                                                                        printf("     >A cada passo você vai se sentindo puxado, mas continua.\n\n");
                                                                                        printf("     >Quando você entra por completo, algo prende seu pé. . .\n\n");
                                                                                        printf("     >Que maneira feia de terminar uma vida...\n\n");        
                                                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");                              

                                                                                        jogadores[k].derrotas += 1;
                                                                                            mostrar_placar(jogadores);
                                                                                            sleep(10);
                                                                                            limpar_tela();
                                                                                        sleep(1);
                                                                                        break;
                                                                                    }

                                                                                    case 2:
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        printf("     >Você decide por não atravessar.\n\n");
                                                                                        printf("     >Olhando um pouco melhor, tem um cipó preso a uma arvore do outro lado da lama!\n\n");
                                                                                        printf("     >Você sobe em um árvore... segura forte no cipó... e salta!\n\n");
                                                                                        sleep(2);



                                                                                        printf("\t ========================================================================================================================================\n\n");
                                                                                        printf("\t\t\t\t\t\t\t       .-------.    ______    \n");
                                                                                        printf("\t\t\t\t\t\t\t      /   o   /|   /          \n");
                                                                                        printf("\t\t\t\t\t\t\t     /_______/o|  /o    o     \n");
                                                                                        printf("\t\t\t\t\t\t\t     | o     | | /   o _____  \n");
                                                                                        printf("\t\t\t\t\t\t\t     |   o   |o/  o   /o    / \n");
                                                                                        printf("\t\t\t\t\t\t\t     |     o |/     o/  o  /  \n");
                                                                                        printf("\t\t\t\t\t\t\t     '-------'      /____o/   \n");
                                                                                        printf("\n\t ========================================================================================================================================\n");                

                                                                                        escolha_dado = rand() % 20 + 1;

                                                                                        if(escolha_dado >= 15)
                                                                                        {
                                                                                            jogadores[k].pontuacao += 10;

                                                                                            printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado) ; 
                                                                                            printf("     >Você consegue se jogar do cipó a tempo e cai do outro lado a salvo!\n\n");
                                                                                            printf("     >Continua a caminhada...\n\n");
                                                                                            printf("     >Ao passar de um arbusto, você ouve um rugido muito alto!\n\n");
                                                                                            printf("     >Um URSO enorme aparece cobrindo toda a sua visão!!!\n\n");
                                                                                            printf("     >O Urso tenta te atacar e você desvia!\n\n");
                                                                                            printf("     >Você junta suas energias nas mãos e solta uma magia sobre ele!\n\n");

                                                                                            while(1)
                                                                                            {
                                                                                                printf("     > *Toque da Loucura(1)* ou *Mortalha Flamejante(2)* >>");
                                                                                                scanf("%i", &escolha_5);
                                                                                                getchar();

                                                                                                switch (escolha_5)
                                                                                                {
                                                                                                    case 1:
                                                                                                    {
                                                                                                    printf("     >O Urso põe as patas na cabeça enquanto berra!!!\n\n");
                                                                                                    printf("     >Ele, confuso, parte para cima mais furioso do que nunca!!!\n\n");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");                              

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                    }

                                                                                                    case 2:
                                                                                                    {
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    printf("     >Sobre o Urso surgem chamas que o queimam sem dó!!!\n\n");
                                                                                                    printf("     >Urso~'ROOOAAAAAARRRRRRRRRRR', e foge correndo para dentro da floresta!\n\n");
                                                                                                    printf("     >Zauber'Ufa! Essa foi por pouco!'\n\n");
                                                                                                    printf("     >Após mais algum tempo você enfim chega ao santuário...");
                                                                                                    printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                    printf("                                                        /      /      \n");
                                                                                                    printf("                                                       ||______||     \n");
                                                                                                    printf("                                                       || ^  ^ ||     \n");
                                                                                                    printf("                                                        | |  | |/     \n");
                                                                                                    printf("                                                        |______|      \n"); 
                                                                                                    printf("                      __                                |  __  |      \n");  
                                                                                                    printf("                     /          ________________________|_/   _|__    \n");
                                                                                                    printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                    printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                    printf("                  /________  /=========================/________ =|   \n");
                                                                                                    printf("               *  |        |/==========================|        |=|   \n");
                                                                                                    printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                    printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                    printf("            *******        |          /_____           |      * | |   \n");
                                                                                                    printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                    printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                    printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                    printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                    printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                    printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                    printf("     >Logo que a Alegria te possui, O Urso agora não mais flamejante volta sem piedade atingindo-o!!!\n\n");

                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");                              

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                    }

                                                                                                    default:
                                                                                                    {
                                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                                        continue;
                                                                                                    }
                                                                                                }
                                                                                                break;
                                                                                            }
                                                                                        }else if (escolha_dado < 15)
                                                                                        {
                                                                                            printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado) ; 
                                                                                            printf("     >O cipó estava coberto de um óleo escorregadio de árvore... Suas velhas e fracas mãos não foram suficientes...\n\n");
                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");                              

                                                                                            jogadores[k].derrotas += 1;
                                                                                             mostrar_placar(jogadores);
                                                                                            sleep(10);
                                                                                            limpar_tela();
                                                                                            sleep(1);
                                                                                        }

                                                                                    break;
                                                                                    }

                                                                                    default:
                                                                                    {
                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                        continue;
                                                                                    }
                                                                                }
                                                                            }
                                                                            break;
                                                                        }

                                                                        default:
                                                                        {
                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                            continue;
                                                                        }
                                                                        }
                                                                    break;
                                                                }
                                                                break;
                                                            }  
                                                            case 2://Indo para a Deserto(2)
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                printf("     >Você decide por seguir pelo deserto...\n\n");
                                                                printf("     >Você chega a um lugar e vê uma placa apontando para a direita!\n\n");
                                                                printf("     >Ao olhar para a esquerda você vê um camelo domesticado e com sela\n\n");

                                                                while(1)
                                                                {    
                                                                    printf("     >Você quer ir para a esquerda(camelo) ou para a direita(placa)?\n     >(Esquerda(1)/Direita(2)) >> ");
                                                                    scanf("%i",&escolha_3);
                                                                    getchar();

                                                                    switch(escolha_3)
                                                                    {
                                                                        case 1:// Camelo (Esquerda)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;
                                                                            printf("     >O camelo começa a andar bem lentamente.  .   .\n\n");

                                                                            while(1)
                                                                            {    
                                                                                printf("     >Você quer apressá-lo e correr ou não?(S(1)/N(2)>>");
                                                                                scanf("%i",&escolha_4);
                                                                                getchar();

                                                                                switch(escolha_4)
                                                                                {
                                                                                    case 1://correr
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        printf("     >Você dá umas batidas com a guia do camelo e ele começa a andar rapidamente.\n\n");
                                                                                        printf("     >Após um tempo você sente o chão tremendo e...\n\n");
                                                                                        printf("     >Na sua frente surge um enorme GOLEM DE AREIA!!!\n\n");
                                                                                        printf("     >Você percebe sua irritação com seus movimentos...\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Você quer correr pra cima dele ou quer ficar parado? (correr(1)/parado(2)) ");
                                                                                            scanf("%i", &escolha_5);
                                                                                            getchar();

                                                                                            switch(escolha_5)
                                                                                            {
                                                                                                case 1: // Correr 
                                                                                                {
                                                                                                    printf("     >O camelo corre corre pra cima!! O Golem abre a boca e engole vocês!!!\n\n");
                                                                                                    printf("     >Golem~'AAAAAAUUMMHHHHHHHHH'\n\n");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");                              

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                }

                                                                                                case 2: // Parado
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;
                                                                                                    printf("     >Você fica parado e o monstro resolve te encarar...\n\n");
                                                                                                    printf("     >Você lembra que tem compromisso e tem que conseguir seguir o caminho!\n\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Quer descer do camelo e seguir a pé ou ficar encima e esperar o montro se acalmar?\n(Descer(1)/Ficar(2))");
                                                                                                        scanf("%i", &escolha_6);
                                                                                                        getchar();

                                                                                                        switch(escolha_6)
                                                                                                        {
                                                                                                            case 1: // descer
                                                                                                            {
                                                                                                                printf("     >Você começa a descer do camelo...\n\n");
                                                                                                                printf("     >Ao encostar o pé no chão a areia recobre eles e começa a subir por suas pernas!!\n\n");
                                                                                                                printf("     >Zauber~'NâoOooOOOoo!!!'\n\n");
                                                                                                                printf("     >O Golem te enterrou sob 7 palmos abaixo da areia...");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");        

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            case 2:// Ficar
                                                                                                            {
                                                                                                                jogadores[k].pontuacao += 10;

                                                                                                                printf("     >Você decide por esperar o monstro se acalmar...\n\n");
                                                                                                                printf("     >O monstro após alguns minutos se acalma e volta ao formato de areia sem vida!\n\n");
                                                                                                                printf("     >Você dá um pouco de água ao seu camelo pra se ele acalmar...\n\n");
                                                                                                                printf("     >Após mais um tempo andando você chega aos fundos do santuário que está virado para uma floresta!");
                                                                                                                printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                printf("                                                        /      /      \n");
                                                                                                                printf("                                                       ||______||     \n");
                                                                                                                printf("                                                       || ^  ^ ||     \n");
                                                                                                                printf("                                                        | |  | |/     \n");
                                                                                                                printf("                                                        |______|      \n"); 
                                                                                                                printf("                      __                                |  __  |      \n");  
                                                                                                                printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                printf("                  /________  /=========================/________ =|   \n");
                                                                                                                printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                printf("              *** |        |---------------------------|        |--   \n");
                                                                                                                printf("             *****|        |                           |        | |   \n");
                                                                                                                printf("            *******        |                           |      * | |   \n");
                                                                                                                printf("           *********^^     |                           |     ***| |   \n");
                                                                                                                printf("          ***********      |                           | ===***** |   \n");
                                                                                                                printf("         *************     |                           |/ |*******|   \n");
                                                                                                                printf("        ***************   ***********        **********| *********    \n");
                                                                                                                printf("        ***************___***********         **********|***********  \n");
                                                                                                                printf("         *************     *********___________******** | *********   \n\n");
                                                                                                                printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                                printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                jogadores[k].vitorias += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        break;
                                                                                    } 

                                                                                    case 2://não correr
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        printf("     >Você prefere ir lentamente e após algumas horas...\n\n");
                                                                                        printf("     >Você encontra um OÁSIS!!!\n\n");
                                                                                        printf("     >O seu camelo ao ver o pequeno lago fica alvoroçado!!!\n");

                                                                                        while(1)
                                                                                        {    
                                                                                            printf("     >Você quer deixá-lo beber água ou continuar andando?(água(1)/seguir(2))\n\n");
                                                                                            scanf("%i", &escolha_6);
                                                                                            getchar();

                                                                                            switch(escolha_6)
                                                                                            {
                                                                                                case 1://Parar para descansar
                                                                                                {
                                                                                                    printf("     >Você desce do camelo e deixa ele ir em encontro a água...\n\n");
                                                                                                    printf("     >O camelo bebe a água lentamente...\n\n");
                                                                                                    printf("     >Ele começa a tremer muito!!!\n\n");
                                                                                                    printf("     >O coitado morre e você com o cantil na boca que tinha acabado de encher no pequeno lago, se desespera!!!\n\n");
                                                                                                    printf("     >Você sente seu corpo se derrentendo por dentro!!!\n\n");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");                                                                                                  
                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                }

                                                                                                case 2://Seguir em frente
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;
                                                                                                    printf("     >Você segue em frente e seu camelo após um pouco de resistência aceita.       \n\n");
                                                                                                    printf("     >Você chega em um templo e para para seu camelo descansar um pouco...         \n\n");
                                                                                                    printf("     >No templo estão escritos símbolos com setas para a direita e para a esquerda.\n\n");
                                                                                                    printf(" ◄                                                                                 \n");
                                                                                                    printf("                       _  _    __.   _,_  __  _    ___        _                    \n");
                                                                                                    printf("                      (_/ ) _|)  __   '  (__  _|)    )  --o  (_)                   \n\n");
                                                                                                    printf("                                   OU                                              \n\n");
                                                                                                    printf("                  ___                _                       _                     \n");
                                                                                                    printf("                 |                         |                                       \n");
                                                                                                    printf("                 |      -    |- -    +    -+-   -    |-      +    -                \n");
                                                                                                    printf("                 |    |/    | | |   |     |   |/    |       |   | |                \n");
                                                                                                    printf("                  ---   --                  -   --                -                \n");          
                                                                                                    printf("                 |                                                                 \n ►");

                                                                                                    while(1)
                                                                                                    {        
                                                                                                        printf("Esquerda(1) ou Direita(2)?");
                                                                                                        scanf("%i", &escolha_7);
                                                                                                        getchar();

                                                                                                        switch(escolha_7)
                                                                                                        {
                                                                                                            case 1://Esquerda
                                                                                                            {
                                                                                                                jogadores[k].pontuacao += 10;

                                                                                                                printf("     >Você sem demorar muito escolhe o caminho que aponta para a esquerda...\n\n");
                                                                                                                printf("     >Você anda por um tempo e...\n\n");
                                                                                                                printf("     >Chega aos fundos do santuário!!!\n\n");
                                                                                                                printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                printf("                                                        /      /      \n");
                                                                                                                printf("                                                       ||______||     \n");
                                                                                                                printf("                                                       || ^  ^ ||     \n");
                                                                                                                printf("                                                        | |  | |/     \n");
                                                                                                                printf("                                                        |______|      \n"); 
                                                                                                                printf("                      __                                |  __  |      \n");  
                                                                                                                printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                printf("                  /________  /=========================/________ =|   \n");
                                                                                                                printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                printf("              *** |        |---------------------------|        |--   \n");
                                                                                                                printf("             *****|        |                           |        | |   \n");
                                                                                                                printf("            *******        |                           |      * | |   \n");
                                                                                                                printf("           *********^^     |                           |     ***| |   \n");
                                                                                                                printf("          ***********      |                           | ===***** |   \n");
                                                                                                                printf("         *************     |                           |/ |*******|   \n");
                                                                                                                printf("        ***************   ***********        **********| *********    \n");
                                                                                                                printf("        ***************___***********         **********|***********  \n");
                                                                                                                printf("         *************     *********___________******** | *********   \n\n");
                                                                                                                printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                                printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                jogadores[k].vitorias += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            case 2://Direita
                                                                                                            {
                                                                                                                printf("     >Sem muita demora você segue para a direita com seu camelo...                                    \n\n");
                                                                                                                printf("     >Você anda por horas e horas...                                                                  \n\n");
                                                                                                                printf("     >Ao anoitecer voce chega a um cemitério cheio de canibais famintos!!!                            \n\n");
                                                                                                                printf("                                                                       .---.                          \n");
                                                                                                                printf("                                                                  '-.  |   |  .-'                      \n");
                                                                                                                printf("                                                                    ___|   |___                        \n");
                                                                                                                printf("                                                               -=  [           ]  =-                   \n");
                                                                                                                printf("                                                                   `---.   .---'                       \n");
                                                                                                                printf("                                                                __||__ |   | __||__                    \n");
                                                                                                                printf("                                                                '-..-' |   | '-..-'                    \n");
                                                                                                                printf("                                                                  ||   |   |   ||                      \n");
                                                                                                                printf("                                                                  ||_.-|   |-,_||                      \n");
                                                                                                                printf("                                                               .- `    `  '`   ` .                     \n");
                                                                                                                printf("                                                              '                    '                   \n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========             \n");       

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;                                                                                     
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }              
                                                                                                        }
                                                                                                        break;
                                                                                                    }
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }

                                                                                    default:
                                                                                    {
                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                        continue;
                                                                                    }
                                                                                }
                                                                                break;
                                                                            }
                                                                            break;
                                                                        }

                                                                        case 2:// Caminho (Direita)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            printf("     >Você decide por seguir pelo caminho a pé mesmo...\n\n");
                                                                            printf("     >Após um tempo andando, você sente a areia ficando muito fofa...\n\n");
                                                                            printf("     >Você olha pra baixo e percebe que está em uma Areia Movediça!!!\n\n");
                                                                            sleep(2);

                                                                            escolha_dado_2 = rand() % 20 ;

                                                                            if(escolha_dado_2 >= 15 && escolha_dado_2 <= 20)
                                                                            {
                                                                                printf("     >Você consegue se segurar em uma pedra a tempo e contorna a areia movediça!            \n\n");
                                                                                printf("     >Você anda por um longo caminho...                                                     \n\n");
                                                                                printf("     >Você sem acreditar, chega nos fundos do santuário!!!                                  \n\n");
                                                                                printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!                                        \n\n");
                                                                                printf("                                                        /      /                            \n");
                                                                                printf("                                                       ||______||                           \n");
                                                                                printf("                                                       || ^  ^ ||                           \n");
                                                                                printf("                                                        | |  | |/                           \n");
                                                                                printf("                                                        |______|                            \n"); 
                                                                                printf("                      __                                |  __  |                            \n");  
                                                                                printf("                     /          ________________________|_/   _|__                          \n");
                                                                                printf("                    / ^^       /=========================/ ^^  ===|                         \n");
                                                                                printf("                   /  []      /=========================/  []   ==|                         \n");
                                                                                printf("                  /________  /=========================/________ =|                         \n");
                                                                                printf("               *  |        |/==========================|        |=|                         \n");
                                                                                printf("              *** |        |---------------------------|        |--                         \n");
                                                                                printf("             *****|        |                           |        | |                         \n");
                                                                                printf("            *******        |                           |      * | |                         \n");
                                                                                printf("           *********^^     |                           |     ***| |                         \n");
                                                                                printf("          ***********      |                           | ===***** |                         \n");
                                                                                printf("         *************     |                           |/ |*******|                         \n");
                                                                                printf("        ***************   ***********        **********| *********                          \n");
                                                                                printf("        ***************___***********         **********|***********                        \n");
                                                                                printf("         *************     *********___________******** | *********                         \n\n");
                                                                                printf("     >O Mantedor do santuário olha sem crer para o chão atrás de você...                    \n\n");
                                                                                printf("     >Você percebe que deixou um rastro enorme de areia com suas botas imundas!!!           \n\n");
                                                                                printf("     >mantedor~'Você vai limpar isso agora!'E te mostra uma vassoura e um rodo com pano...  \n");

                                                                                while(1)
                                                                                {
                                                                                    printf("     >Vassoura(1)/Rodo(2) >>                                                                \n");
                                                                                    scanf("%i",&escolha_4);
                                                                                    getchar();

                                                                                    switch(escolha_4)
                                                                                    {
                                                                                        case 1://Vassoura
                                                                                        {
                                                                                            printf("     >Você escolhe a vassouura e começa a varrer...                                          \n\n");
                                                                                            printf("     >Ao varrer, você vê que suja cada vez mais o santuário!!                                \n\n");
                                                                                            printf("     >O Mantedor se enfurece e joga uma fumaça em você que te adormece...                    \n\n");
                                                                                            printf("     >Ao acordar, você está fora do santuário e de noite...                                  \n\n");
                                                                                            printf("     >Você vai escondido ao túmulo do antigo Feiticeiro Ancião Magiccelium e...              \n\n");
                                                                                            printf("     >Só possui marcas do cajado... Quelle passou enquanto você dormia!                      \n\n");
                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========   \n");//FIM

                                                                                            jogadores[k].derrotas += 1;
                                                                                            mostrar_placar(jogadores);
                                                                                            sleep(10);
                                                                                            limpar_tela();
                                                                                            sleep(1);
                                                                                            limpar_tela();
                                                                                            break;
                                                                                        }

                                                                                        case 2://Rodo
                                                                                        {
                                                                                            jogadores[k].pontuacao += 10;

                                                                                            printf("     >Você escolhe o Rodo com pano e começa a limpar...        \n\n");
                                                                                            printf("     >Em poucos minutos você consegue limpar toda a sujeira!!! \n\n");
                                                                                            printf("     >O Mantedor olha satisfeito para você e sua limpeza...    \n\n");
                                                                                            printf("     >Mantedor~'Muito bem, agora me diga: O que te trás aqui?' \n");
                                                                                            printf("     >Zauber~'Eu desejo pegar o lendário cajado MAGUS! Por favor!\n\n");
                                                                                            printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                            printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!");
                                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                            jogadores[k].vitorias += 1;
                                                                                             mostrar_placar(jogadores);
                                                                                            sleep(10);
                                                                                            limpar_tela();
                                                                                            break;
                                                                                        }

                                                                                        default:
                                                                                        {
                                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                                            continue;
                                                                                        }
                                                                                    }
                                                                                    break;
                                                                                }
                                                                            }else if(escolha_dado_2 < 15 )
                                                                            {
                                                                            printf("    >Você se desespera!!!\n\n");
                                                                            printf("    >Quando percebe, você já está debaixo da areia e não tem como se salvar...\n\n");
                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========   \n");//FIM


                                                                            jogadores[k].derrotas += 1;
                                                                            mostrar_placar(jogadores);
                                                                            sleep(10);
                                                                            limpar_tela();
                                                                            }
                                                                            break;
                                                                        }   

                                                                        default:
                                                                        {
                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                            continue;
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                break;
                                                            }

                                                            default:
                                                            {
                                                                printf("     >Opção Inválida! Tente Novamente!\n");
                                                                continue;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                    break;
                                                }

                                                case 2://Fica na torre
                                                {
                                                    printf("     \n     >Você resolveu ficar e... Achou um pedaço pesado de corda!\n\n");

                                                    while(1)
                                                    {    
                                                        printf("     >Deseja levá-lo em sua aventura? (S = 1; N = 2)");
                                                        scanf("%i",&escolha_2);
                                                        getchar();
                                                        printf("     ========================================================================================================================================\n");

                                                        switch(escolha_2)
                                                        {
                                                            case 1://Pegando a Corda
                                                            { 
                                                                jogadores[k].pontuacao += 10;

                                                                printf("     \n     >Levando corda ao ombro...\n\n");
                                                                sleep(1);
                                                                printf("     >Ao sair da torre, você se depara com uma bifurcação!\n\n");
                                                                sleep(3);
                                                                printf("     >Você vê um lado de Floresta e um lado de Deserto...\n\n");
                                                                sleep(3);
                                                                printf("     ========================================================================================================================================\n");


                                                                while(1)
                                                                {
                                                                    printf("     >Qual caminho irá escolher? (Floresta = 1 ; Deserto = 2)");
                                                                    scanf("%i",&escolha_2);
                                                                    getchar();

                                                                    switch(escolha_2)
                                                                    {
                                                                        case 1://Indo para a Floresta(1)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("     \n     >Você ajeita as botas e segue para a Floresta...\n\n");
                                                                            printf("     >Ao entrar na floresta, se depara com um duende!\n\n");
                                                                            printf("     >Duende~'Olááá,caro mago! Buscando matéria prima novamente?'\n\n");
                                                                            printf("     >Zauber~'Não desta vez...Aliás,você sabe onde fica o santuário Magiccelium?'\n\n");
                                                                            printf("     >Duende~'Ora, que surpresa! Bem...Se não me engano fica por aquele lado ali.'\n\n");
                                                                            sleep(2);

                                                                            while(1)
                                                                            {
                                                                                printf("     Você confiará sua trilha no Duende? (S = 1; N = 2)");
                                                                                scanf("%i", &escolha_3);
                                                                                getchar();

                                                                                switch(escolha_3)
                                                                                {
                                                                                    case 1://Indo no caminho do Duende(1)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        limpar_tela();
                                                                                        printf("     \n     >Decide por confiar no Duende e segue na direção apontada...\n\n");
                                                                                        printf("     >Você anda calmamente pela floresta...\n\n");
                                                                                        printf("     >De repente ouve um zumbido muito forte!\n\n");
                                                                                        printf("     >Um ninho de vespas venenosas acaba de ser atacado e elas estão furiosas!!!\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Você quer atravessar a nuvem de vespas? (S = 1 ; N = 2)");
                                                                                            scanf("%i", &escolha_4);
                                                                                            getchar();
                                                                                            printf("\t ========================================================================================================================================\n");

                                                                                            switch(escolha_4)
                                                                                            {
                                                                                                case 1://Atravessar as vespas
                                                                                                {  
                                                                                                    printf("     >Você tenta atravessar as vespas...\n\n");
                                                                                                    printf("     >Corre muito e...\n\n");
                                                                                                    printf("     >A corda estava muito pesada! Você leva muitas ferroadas e cai no chão...");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========   \n");//FIM

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                     mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;  
                                                                                                }

                                                                                                case 2://Não atravessa as vespas
                                                                                                { 
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    printf("     \n     >Você decide esperar as vespas se acalmarem...\n\n");
                                                                                                    sleep(0);
                                                                                                    printf("     >......De repente você escuta um rugido muito alto e aparece um urso em chamas correndo pelas vespas!!!\n\n");
                                                                                                    printf("     >Num piscar de olhos as vespas somem junto ao Urso e, você pode seguir seu caminho...\n\n");
                                                                                                    printf("     >Certa hora, você se vê diante de um paredão rochoso que não é possível passar por cima.\n\n");
                                                                                                    printf("     >Olhando melhor...Você vê uma fresta bem apertada que parece dar no outro lado.\n\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Você quer atravessar pela fresta? ( S = 1; N = 2)");
                                                                                                        scanf("%i", &escolha_5);
                                                                                                        getchar();

                                                                                                        switch (escolha_5)
                                                                                                        {
                                                                                                            case 1://Passando Pela Fresta(1)
                                                                                                            { 
                                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                                    printf("     \n     >Você respira fundo...Se expreme para passar e,...\n\n");
                                                                                                                    printf("     >Deu certo!! Você passou.\n\n");
                                                                                                                    printf("     >Em seguida, você olha para a frente e se depara com um enorme santuário!!!\n\n");
                                                                                                                    printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                    printf("                                                        /      /      \n");
                                                                                                                    printf("                                                       ||______||     \n");
                                                                                                                    printf("                                                       || ^  ^ ||     \n");
                                                                                                                    printf("                                                        | |  | |/     \n");
                                                                                                                    printf("                                                        |______|      \n"); 
                                                                                                                    printf("                      __                                |  __  |      \n");  
                                                                                                                    printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                    printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                    printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                    printf("                  /________  /=========================/________ =|   \n");
                                                                                                                    printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                    printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                                    printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                                    printf("            *******        |          /_____           |      * | |   \n");
                                                                                                                    printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                                    printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                                    printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                                    printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                                    printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                                    printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                                    printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                    printf("     >Você se depara com um mantedor do santuário:\n\n");
                                                                                                                    printf("     >Mantedor~'Olá! Como posso ajudá-lo?'\n\n");
                                                                                                                    printf("     >Zauber~'Olá,homem santo! Estou atrás do Cajado MAGUS!!'\n\n");
                                                                                                                    printf("     >Mantedor~'Ah sim... O famoso Cajado...'\n\n");
                                                                                                                    printf("     >O Mantedor respira calmamente, olha nos teus olhos e diz: \n\n");

                                                                                                                    while(1)
                                                                                                                    {
                                                                                                                        printf("     >Mantedor~'É mais poderoso que os deuses, mais maligno que os demônios. É algo que os pobres tem e os ricos precisam.\n     Se você comê-lo, você morre. O que é isto? \n     (O Tempo = 2 ; O Nada = 1)>'");//CHARADA
                                                                                                                        scanf("%i", &escolha_6); 
                                                                                                                        getchar();

                                                                                                                        switch(escolha_6)
                                                                                                                        {
                                                                                                                            case 1://Acertou a charada
                                                                                                                            { 
                                                                                                                                jogadores[k].pontuacao += 10;
                                                                                                                                printf("     >O Mantedor da uma risada... Mantedor~'Muito Sábio! Pois bem... Me acompanhe'\n\n");
                                                                                                                                printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                                                                printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!");
                                                                                                                                printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                                printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                                jogadores[k].vitorias += 1;
                                                                                                                                 mostrar_placar(jogadores);
                                                                                                                                sleep(10);
                                                                                                                                limpar_tela();
                                                                                                                                sleep(1);
                                                                                                                                break;
                                                                                                                            }

                                                                                                                            case 2://Errou a charada
                                                                                                                            {
                                                                                                                                printf("     >Mantedor~'Você precisa mais do que isso para ser digno do MAGUS!'\n\n");
                                                                                                                                printf("     >O Mantedor joga uma fumaça em seu rosto que faz com que você adormeça profundamente!\n\n");
                                                                                                                                printf("     >Ao acordar, o santuário está vazio... Assim como a cova do antigo  Feiticeiro Ancião Magiccelium...\n\n");
                                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                                 mostrar_placar(jogadores);
                                                                                                                                sleep(10);
                                                                                                                                limpar_tela();
                                                                                                                                sleep(1);
                                                                                                                                break;
                                                                                                                            }
                                                                                                                            default:
                                                                                                                            {
                                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                                continue;                                   
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                    break;
                                                                                                            } 
                                                                                                            case 2: // Não Passou a Fresta
                                                                                                            {
                                                                                                                printf("     >Você decide por não atravessar...\n\n");
                                                                                                                printf("     >Você ouve um rugido muito auto{RUUUUUUU ROAAAAARRRRRRRRR!!!!\n\n");
                                                                                                                printf("     >De repente um enorme urso em chamas passa correndo e pula encima de você!!!\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                 mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                        break;

                                                                                                    }
                                                                                                    break;
                                                                                                }
                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }

                                                                                    case 2://Indo contra o camindo do Duende(2)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        printf("     >Você espera o duende seguir e vai pelo caminho oposto ao indicado!\n\n");
                                                                                        printf("     >Após um tempo você vê que o ar vai ficando mais úmido e...\n\n");
                                                                                        printf("     >Você sente a lama em seus pés!... Uma poça de lama interrompe o caminho.\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Dejesa atravessá-la? (S=1/N=2)");
                                                                                            scanf("%i", &escolha_4);
                                                                                            getchar();

                                                                                            switch(escolha_4)
                                                                                            {
                                                                                                case 1: //Atravessar
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    printf("     >Você decide por atravessar...\n\n");
                                                                                                    printf("     >Você joga sua corda para um galho firme do outro lado da poça...\n\n");
                                                                                                    printf("     >Você sobe em um árvore... segura forte na corda... e salta!\n\n");
                                                                                                    sleep(2);


                                                                                                    printf("\t ========================================================================================================================================\n\n");
                                                                                                    printf("\t\t\t\t\t\t\t       .-------.    ______    \n");
                                                                                                    printf("\t\t\t\t\t\t\t      /   o   /|   /          \n");
                                                                                                    printf("\t\t\t\t\t\t\t     /_______/o|  /o    o     \n");
                                                                                                    printf("\t\t\t\t\t\t\t     | o     | | /   o _____  \n");
                                                                                                    printf("\t\t\t\t\t\t\t     |   o   |o/  o   /o    / \n");
                                                                                                    printf("\t\t\t\t\t\t\t     |     o |/     o/  o  /  \n");
                                                                                                    printf("\t\t\t\t\t\t\t     '-------'      /____o/   \n");
                                                                                                    printf("\n\t ========================================================================================================================================\n");

                                                                                                    escolha_dado = rand() % 20 + 1;

                                                                                                    if(escolha_dado >= 15)
                                                                                                    {
                                                                                                        jogadores[k].pontuacao += 10;

                                                                                                        printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado) ; 
                                                                                                        printf("     >Você consegue se jogar da corda a tempo e cai do outro lado a salvo!\n\n");
                                                                                                        printf("     >Continua a caminhada...\n\n");
                                                                                                        printf("     >Ao passar de um arbusto, você ouve um rugido muito alto!\n\n");
                                                                                                        printf("     >Um URSO enorme aparece cobrindo toda a sua visão!!!\n\n");
                                                                                                        printf("     >O Urso tenta te atacar e você desvia!\n\n");
                                                                                                        printf("     >Você junta suas energias nas mãos e solta uma magia sobre ele!\n\n");

                                                                                                        while(1)
                                                                                                        {
                                                                                                            printf("     > *Toque da Loucura(1)* ou *Mortalha Flamejante(2)* >>");
                                                                                                            scanf("%i", &escolha_5);
                                                                                                            getchar();

                                                                                                            switch (escolha_5)
                                                                                                            {
                                                                                                                case 1:
                                                                                                                {
                                                                                                                    printf("     >O Urso põe as patas na cabeça enquanto berra!!!\n\n");
                                                                                                                    printf("     >Ele, confuso, parte para cima mais furioso do que nunca!!!\n\n");
                                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");     

                                                                                                                    jogadores[k].derrotas += 1;
                                                                                                                     mostrar_placar(jogadores);
                                                                                                                    sleep(10);
                                                                                                                    limpar_tela();
                                                                                                                    sleep (1);            
                                                                                                                    break;
                                                                                                                }

                                                                                                                case 2:
                                                                                                                {
                                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                                    printf("     >Sobre o Urso surgem chamas que o queimam sem dó!!!\n\n");
                                                                                                                    printf("     >Urso~'ROOOAAAAAARRRRRRRRRRR', e foge correndo para dentro da floresta!\n\n");
                                                                                                                    printf("     >Zauber'Ufa! Essa foi por pouco!'\n\n");
                                                                                                                    printf("     >Após mais algum tempo você enfim chega ao santuário...");
                                                                                                                    printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                    printf("                                                        /      /      \n");
                                                                                                                    printf("                                                       ||______||     \n");
                                                                                                                    printf("                                                       || ^  ^ ||     \n");
                                                                                                                    printf("                                                        | |  | |/     \n");
                                                                                                                    printf("                                                        |______|      \n"); 
                                                                                                                    printf("                      __                                |  __  |      \n");  
                                                                                                                    printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                    printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                    printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                    printf("                  /________  /=========================/________ =|   \n");
                                                                                                                    printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                    printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                                    printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                                    printf("            *******        |          /_____           |      * | |   \n");
                                                                                                                    printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                                    printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                                    printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                                    printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                                    printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                                    printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                                    printf("     >O Mantedor do santuário escuta que você está atrás do MAGUS e, depois de pensar um pouco...\n\n");
                                                                                                                    printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                                                    printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!\n\n");
                                                                                                                    printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                    printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                    jogadores[k].vitorias += 1;
                                                                                                                     mostrar_placar(jogadores);
                                                                                                                    sleep(10);
                                                                                                                    limpar_tela();
                                                                                                                    sleep(1);
                                                                                                                    break;
                                                                                                                }

                                                                                                                default:
                                                                                                                {
                                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                    continue;
                                                                                                                }
                                                                                                            }
                                                                                                            break;
                                                                                                        }
                                                                                                    }else if (escolha_dado < 15)
                                                                                                    {
                                                                                                        printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado) ; 
                                                                                                        printf("     >A corda estava coberto do seu suor escorregadio... Suas velhas e fracas mãos não foram suficientes...\n\n");
                                                                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");        

                                                                                                        jogadores[k].derrotas += 1;
                                                                                                         mostrar_placar(jogadores);
                                                                                                        sleep(10);
                                                                                                        limpar_tela();
                                                                                                        sleep(1);
                                                                                                    }
                                                                                                    break;                                         
                                                                                                }

                                                                                                case 2://Não atravessar
                                                                                                {
                                                                                                    printf("     >Você decide por não atravessar a poça de lama...\n\n");
                                                                                                    printf("     >Procurando por um novo caminho, você é surpreendido!!\n\n");
                                                                                                    printf("     >Uma família de Linces aparentemente magra e faminta o ataca ferozmente!!!\n\n");
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                    jogadores[k].derrotas += 1;
                                                                                                    mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }
                                                                                    default:
                                                                                    {
                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                        continue;
                                                                                    }
                                                                                }
                                                                                break;
                                                                        }
                                                                        break;


                                                                        case 2://Indo para a Deserto(2)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            printf("     >Você decide por seguir pelo deserto...\n\n");
                                                                            printf("     >Você chega a um lugar e vê uma placa apontando para a direita!\n\n");
                                                                            printf("     >Ao olhar para a esquerda você vê um camelo domesticado e com sela\n\n");

                                                                            while(1)
                                                                            {    
                                                                                printf("     >Você quer ir para a esquerda(camelo) ou para a direita(placa)?\n (Esquerda(1)/Direita(2)) >> ");
                                                                                scanf("%i",&escolha_3);
                                                                                getchar();

                                                                                switch(escolha_3)
                                                                                {
                                                                                    case 1:// Camelo (Esquerda)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;
                                                                                        printf("     >O camelo começa a andar bem lentamente.  .   .\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Você quer apressá-lo e correr ou não?(S(1)/N(2)>>");
                                                                                            scanf("%i",&escolha_4);
                                                                                            getchar();

                                                                                            switch(escolha_4)
                                                                                            {
                                                                                                case 1://correr
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    printf("     >Você dá umas batidas com a guia do camelo e ele começa a andar rapidamente.\n\n");
                                                                                                    printf("     >Após um tempo você sente o chão tremendo e...\n\n");
                                                                                                    printf("     >Na sua frente surge um enorme GOLEM DE AREIA!!!\n\n");
                                                                                                    printf("     >Você percebe sua irritação com seus movimentos...\n\n");

                                                                                                    while(1)
                                                                                                    {    
                                                                                                        printf("     >Você quer correr pra cima dele ou quer ficar parado? (correr(1)/parado(2)) ");
                                                                                                        scanf("%i", &escolha_5);
                                                                                                        getchar();

                                                                                                        switch(escolha_5)
                                                                                                        {
                                                                                                            case 1: // Correr 
                                                                                                            {
                                                                                                                jogadores[k].pontuacao += 10;
                                                                                                                printf("     >Você resolve correr para cima do Golem...\n\n");
                                                                                                                printf("     >Cutuca o camelo com seus calcanhares e o enfureçe com a guia...\n\n");
                                                                                                                printf("     >O Golem abre a boca e se enfurece mais ainda!!!");

                                                                                                                while(1)
                                                                                                                {
                                                                                                                    printf("     >Quer jogar a corda na boca do Golem ou quer tentar pisoteá-lo com o camelo em alta velocidade?\n(Jogar(1)/Pisotear(2))");
                                                                                                                    scanf("%i", &escolha_6);
                                                                                                                    getchar();

                                                                                                                    switch(escolha_6)
                                                                                                                    {
                                                                                                                        case 1: // Jogar a corda
                                                                                                                        {
                                                                                                                            printf("     >Você tira a corda dos ombros enquanto se aproxima da aberração...\n\n");
                                                                                                                            printf("     >Ao lançar a corda, o golem começa a engolir como uma refeição...!!\n\n");
                                                                                                                            printf("     >De repente, ele aparentemente se engasga!!\n\n");
                                                                                                                            printf("     >Zauber~'ISSOOOooOOOOooooOOO!!!'\n\n");
                                                                                                                            printf("     >Com o golem desfeito em areia, você pode seguir seu caminho...");
                                                                                                                            printf("     >Você dá um pouco de água ao seu camelo pra se ele acalmar...\n\n");
                                                                                                                            printf("     >Após mais um tempo andando você chega aos fundos do santuário que está virado para uma floresta!");
                                                                                                                            printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                            printf("                                                        /      /      \n");
                                                                                                                            printf("                                                       ||______||     \n");
                                                                                                                            printf("                                                       || ^  ^ ||     \n");
                                                                                                                            printf("                                                        | |  | |/     \n");
                                                                                                                            printf("                                                        |______|      \n"); 
                                                                                                                            printf("                      __                                |  __  |      \n");  
                                                                                                                            printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                            printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                            printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                            printf("                  /________  /=========================/________ =|   \n");
                                                                                                                            printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                            printf("              *** |        |---------------------------|        |--   \n");
                                                                                                                            printf("             *****|        |                           |        | |   \n");
                                                                                                                            printf("            *******        |                           |      * | |   \n");
                                                                                                                            printf("           *********^^     |                           |     ***| |   \n");
                                                                                                                            printf("          ***********      |                           | ===***** |   \n");
                                                                                                                            printf("         *************     |                           |/ |*******|   \n");
                                                                                                                            printf("        ***************   ***********        **********| *********    \n");
                                                                                                                            printf("        ***************___***********         **********|***********  \n");
                                                                                                                            printf("         *************     *********___________******** | *********   \n\n");
                                                                                                                            printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                            printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                            jogadores[k].vitorias += 1;
                                                                                                                             mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        case 2:// Pisotear
                                                                                                                        {
                                                                                                                            jogadores[k].pontuacao += 10;

                                                                                                                            printf("     >Você decide por tentar pisoteá-lo...\n\n");
                                                                                                                            printf("     >O camelo não demonstra medo!\n\n");
                                                                                                                            printf("     >Vocês entram na boca do Golem com certeza de que ele se partirá em grãos!\n\n");
                                                                                                                            printf("     >Infelizmente o golem achou a refeição muito apetitosa para deixar ir com tanta facilidade...\n\n");
                                                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");    

                                                                                                                            jogadores[k].derrotas += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        default:
                                                                                                                        {
                                                                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                            continue;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    break;

                                                                                                                }
                                                                                                                break;
                                                                                                            }    
                                                                                                            case 2: // Parado
                                                                                                            {
                                                                                                                printf("     >Você fica parado, mas após alguns minutos o camelo perde a paciência e se deita...\n\n");
                                                                                                                printf("     >Com o movimento do camelo, o Golem se enfurece e parte para cima!!!\n\n");
                                                                                                                printf("     >Golem~'AAAAAAUUMMHHHHHHHHH'\n\n");
                                                                                                                printf("     >Sem piedade, Zauber e seu camelo viram almoço de Golem\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");      

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                        break;
                                                                                                    } 
                                                                                                    break;
                                                                                                }            
                                                                                                case 2://não correr
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    limpar_tela();
                                                                                                    printf("\t ========================================================================================================================================\n");
                                                                                                    printf("     >Você prefere ir lentamente e após algumas horas...\n\n");
                                                                                                    printf("     >Você encontra um OÁSIS!!!\n\n");
                                                                                                    printf("     >O seu camelo ao ver o pequeno lago fica alvoroçado!!!\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Você quer deixá-lo beber água ou continuar andando?(água(1)/seguir(2))\n\n");
                                                                                                        scanf("%i", &escolha_6);
                                                                                                        getchar();
                                                                                                        printf("\n\t ========================================================================================================================================\n");

                                                                                                        switch(escolha_6)
                                                                                                        {
                                                                                                            case 1://Parar para descansar
                                                                                                            {
                                                                                                                limpar_tela();
                                                                                                                printf("\t ========================================================================================================================================\n");
                                                                                                                printf("     >Você desce do camelo e deixa ele ir em encontro a água...\n\n");
                                                                                                                printf("     >O camelo bebe a água lentamente...\n\n");
                                                                                                                printf("     >Ele começa a tremer muito!!!\n\n");
                                                                                                                printf("     >O coitado morre e você com o cantil na boca que tinha acabado de encher no pequeno lago, se desespera!!!\n\n");
                                                                                                                printf("     >Você sente seu corpo se derrentendo por dentro!!!\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");   

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            case 2://Seguir em frente
                                                                                                            {
                                                                                                                jogadores[k].pontuacao += 10;
                                                                                                                limpar_tela();
                                                                                                                printf("\t ========================================================================================================================================\n");
                                                                                                                printf("     >Você segue em frente e seu camelo após um pouco de resistência aceita.       \n\n");
                                                                                                                printf("     >Você chega em um templo e para para seu camelo descansar um pouco...         \n\n");
                                                                                                                printf("     >No templo estão escritos símbolos com setas para a direita e para a esquerda.\n\n");
                                                                                                                printf(" ◄                                                                                 \n");
                                                                                                                printf("                       _  _    __.   _,_  __  _    ___        _                    \n");
                                                                                                                printf("                      (_/ ) _|)  __   '  (__  _|)    )  --o  (_)                   \n\n");
                                                                                                                printf("                                   OU                                              \n\n");
                                                                                                                printf("                  ___                _                       _                     \n");
                                                                                                                printf("                 |                         |                                       \n");
                                                                                                                printf("                 |      -    |- -    +    -+-   -    |-      +    -                \n");
                                                                                                                printf("                 |    |/    | | |   |     |   |/    |       |   | |                \n");
                                                                                                                printf("                  ---   --                  -   --                -                \n");          
                                                                                                                printf("                 |                                                                 \n ►");

                                                                                                                while(1)
                                                                                                                {
                                                                                                                    printf("1- Esquerda(◄) ou 2- Direita(►)?");
                                                                                                                    scanf("%i", &escolha_7);
                                                                                                                    getchar();
                                                                                                                    printf("\n\t ========================================================================================================================================\n");

                                                                                                                    switch(escolha_7)
                                                                                                                    {
                                                                                                                        case 1://Esquerda
                                                                                                                        {
                                                                                                                            jogadores[k].pontuacao += 10;

                                                                                                                            limpar_tela();
                                                                                                                            printf("\t ========================================================================================================================================\n");
                                                                                                                            printf("     >Você sem demorar muito escolhe o caminho que aponta para a esquerda...\n\n");
                                                                                                                            printf("     >Você anda por um tempo e...\n\n");
                                                                                                                            printf("     >Chega aos fundos do santuário!!!\n\n");
                                                                                                                            printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                            sleep(3);
                                                                                                                            printf("                                                        /      /      \n");
                                                                                                                            printf("                                                       ||______||     \n");
                                                                                                                            printf("                                                       || ^  ^ ||     \n");
                                                                                                                            printf("                                                        | |  | |/     \n");
                                                                                                                            printf("                                                        |______|      \n"); 
                                                                                                                            printf("                      __                                |  __  |      \n");  
                                                                                                                            printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                            printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                            printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                            printf("                  /________  /=========================/________ =|   \n");
                                                                                                                            printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                            printf("              *** |        |---------------------------|        |--   \n");
                                                                                                                            printf("             *****|        |                           |        | |   \n");
                                                                                                                            printf("            *******        |                           |      * | |   \n");
                                                                                                                            printf("           *********^^     |                           |     ***| |   \n");
                                                                                                                            printf("          ***********      |                           | ===***** |   \n");
                                                                                                                            printf("         *************     |                           |/ |*******|   \n");
                                                                                                                            printf("        ***************   ***********        **********| *********    \n");
                                                                                                                            printf("        ***************___***********         **********|***********  \n");
                                                                                                                            printf("         *************     *********___________******** | *********   \n\n");
                                                                                                                            printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                            printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                            jogadores[k].vitorias += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        case 2://Direita
                                                                                                                        {
                                                                                                                            limpar_tela();
                                                                                                                            printf("\t ========================================================================================================================================\n");
                                                                                                                            printf("     >Sem muita demora você segue para a direita com seu camelo...                                    \n\n");
                                                                                                                            printf("     >Você anda por horas e horas...                                                                  \n\n");
                                                                                                                            printf("     >Ao anoitecer voce chega a um cemitério cheio de canibais famintos!!!                            \n\n");
                                                                                                                            printf("                                                                       .---.                          \n");
                                                                                                                            printf("                                                                  '-.  |   |  .-'                      \n");
                                                                                                                            printf("                                                                    ___|   |___                        \n");
                                                                                                                            printf("                                                               -=  [           ]  =-                   \n");
                                                                                                                            printf("                                                                   `---.   .---'                       \n");
                                                                                                                            printf("                                                                __||__ |   | __||__                    \n");
                                                                                                                            printf("                                                                '-..-' |   | '-..-'                    \n");
                                                                                                                            printf("                                                                  ||   |   |   ||                      \n");
                                                                                                                            printf("                                                                  ||_.-|   |-,_||                      \n");
                                                                                                                            printf("                                                               .- `    `  '`   ` .                     \n");
                                                                                                                            printf("                                                              '                    '                   \n");
                                                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========             \n");       
                                                                                                                            sleep(2);

                                                                                                                            jogadores[k].derrotas += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        default:
                                                                                                                        {
                                                                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                            continue;
                                                                                                                        }              
                                                                                                                    }
                                                                                                                    break;

                                                                                                                }
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                        break;

                                                                                                    }
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }

                                                                                    case 2:// Caminho (Direita)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        limpar_tela();
                                                                                        printf("\t ========================================================================================================================================\n");
                                                                                        printf("     >Você decide por seguir pelo caminho a pé mesmo...\n\n");
                                                                                        printf("     >Após um tempo andando, você sente a areia ficando muito fofa...\n\n");
                                                                                        printf("     >Você olha pra baixo e percebe que está em uma Areia Movediça!!!\n\n");
                                                                                        sleep(2);

                                                                                        escolha_dado_2 = rand() % 20 + 1;

                                                                                        if(escolha_dado_2 >= 15)
                                                                                        {
                                                                                            limpar_tela();
                                                                                            printf("\t ========================================================================================================================================\n");    
                                                                                            printf("     >Você consegue se segurar em uma pedra a tempo e contorna a areia movediça!            \n\n");
                                                                                            printf("     >Você anda por um longo caminho...                                                     \n\n");
                                                                                            printf("     >Você sem acreditar, chega nos fundos do santuário!!!                                  \n\n");
                                                                                            printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!                                        \n\n");
                                                                                            sleep(3);
                                                                                            printf("                                                        /      /                            \n");
                                                                                            printf("                                                       ||______||                           \n");
                                                                                            printf("                                                       || ^  ^ ||                           \n");
                                                                                            printf("                                                        | |  | |/                           \n");
                                                                                            printf("                                                        |______|                            \n"); 
                                                                                            printf("                      __                                |  __  |                            \n");  
                                                                                            printf("                     /          ________________________|_/   _|__                          \n");
                                                                                            printf("                    / ^^       /=========================/ ^^  ===|                         \n");
                                                                                            printf("                   /  []      /=========================/  []   ==|                         \n");
                                                                                            printf("                  /________  /=========================/________ =|                         \n");
                                                                                            printf("               *  |        |/==========================|        |=|                         \n");
                                                                                            printf("              *** |        |---------------------------|        |--                         \n");
                                                                                            printf("             *****|        |                           |        | |                         \n");
                                                                                            printf("            *******        |                           |      * | |                         \n");
                                                                                            printf("           *********^^     |                           |     ***| |                         \n");
                                                                                            printf("          ***********      |                           | ===***** |                         \n");
                                                                                            printf("         *************     |                           |/ |*******|                         \n");
                                                                                            printf("        ***************   ***********        **********| *********                          \n");
                                                                                            printf("        ***************___***********         **********|***********                        \n");
                                                                                            printf("         *************     *********___________******** | *********                         \n\n");
                                                                                            printf("     >O Mantedor do santuário olha sem crer para o chão atrás de você...                    \n\n");
                                                                                            printf("     >Você percebe que deixou um rastro enorme de areia com suas botas imundas!!!           \n\n");
                                                                                            printf("     >mantedor~'Você vai limpar isso agora!'E te mostra uma vassoura e um rodo com pano...  \n");

                                                                                            while(1)
                                                                                            {
                                                                                                printf("     >Vassoura(1)/Rodo(2) >>                                                                \n");
                                                                                                scanf("%i",&escolha_4);
                                                                                                getchar();
                                                                                                printf("\n\t ========================================================================================================================================\n");

                                                                                                switch(escolha_4)
                                                                                                {
                                                                                                    case 1://Vassoura
                                                                                                    {
                                                                                                        limpar_tela();
                                                                                                        printf("\t ========================================================================================================================================\n");
                                                                                                        printf("     >Você escolhe a vassouura e começa a varrer...                                          \n\n");
                                                                                                        printf("     >Ao varrer, você vê que suja cada vez mais o santuário!!                                \n\n");
                                                                                                        printf("     >O Mantedor se enfurece e joga uma fumaça em você que te adormece...                    \n\n");
                                                                                                        printf("     >Ao acordar, você está fora do santuário e de noite...                                  \n\n");
                                                                                                        printf("     >Você vai escondido ao túmulo do antigo Feiticeiro Ancião Magiccelium e...              \n\n");
                                                                                                        printf("     >Só possui marcas do cajado... Quelle passou enquanto você dormia!                      \n\n");
                                                                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========   \n");//FIM

                                                                                                        jogadores[k].derrotas += 1;
                                                                                                        mostrar_placar(jogadores);
                                                                                                        sleep(10);
                                                                                                        limpar_tela();
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                    }

                                                                                                    case 2://Rodo
                                                                                                    {
                                                                                                        jogadores[k].pontuacao += 10;

                                                                                                        limpar_tela();
                                                                                                        printf("\t ========================================================================================================================================\n");
                                                                                                        printf("     >Você escolhe o Rodo com pano e começa a limpar...        \n\n");
                                                                                                        printf("     >Em poucos minutos você consegue limpar toda a sujeira!!! \n\n");
                                                                                                        printf("     >O Mantedor olha satisfeito para você e sua limpeza...    \n\n");
                                                                                                        printf("     >Mantedor~'Muito bem, agora me diga: O que te trás aqui?' \n");
                                                                                                        printf("     >Zauber~'Eu desejo pegar o lendário cajado MAGUS! Por favor!\n\n");
                                                                                                        printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                                        printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!");
                                                                                                        printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                        printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                        jogadores[k].vitorias += 1;
                                                                                                        mostrar_placar(jogadores);
                                                                                                        sleep(10);
                                                                                                        limpar_tela();
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                    }

                                                                                                    default:
                                                                                                    {
                                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                                        continue;
                                                                                                    }
                                                                                                }
                                                                                                break;
                                                                                            }
                                                                                        }else if(escolha_dado_2 < 15)
                                                                                        {

                                                                                            limpar_tela();
                                                                                            printf("\t ========================================================================================================================================\n");
                                                                                            printf("    >Você se desespera!!!\n\n");
                                                                                            printf("    >Quando percebe, você já está debaixo da areia e não tem como se salvar...\n\n");
                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========   \n");//FIM

                                                                                            jogadores[k].derrotas += 1;
                                                                                             mostrar_placar(jogadores);
                                                                                            sleep(10);
                                                                                            limpar_tela();
                                                                                            sleep(1);
                                                                                        }

                                                                                        break;
                                                                                    }   

                                                                                    default:
                                                                                    {
                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                        continue;
                                                                                    }
                                                                                }
                                                                                break;
                                                                            }
                                                                            break;
                                                                        }

                                                                        default:
                                                                        {
                                                                            printf("     >Opção Inválida! Tente Novamente!\n");
                                                                            continue;
                                                                        }
                                                                    }
                                                                    break;
                                                                }
                                                                break;

                                                              }
                                                                break;
                                                            }



                                                            case 2://Larga a Corda 
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("\t ========================================================================================================================================\n");
                                                                printf("     >Saindo da torre...\n\n");
                                                                printf("     >Ao sair da torre, você se depara com uma bifurcação!\n\n");
                                                                printf("     >Você vê um lado de Floresta e um lado de Deserto...\n\n");

                                                                while(1)
                                                                {
                                                                    printf("     >Qual caminho irá escolher? (Floresta = 1 ; Deserto = 2)");
                                                                    scanf("%i",&escolha_2);
                                                                    getchar();
                                                                    printf("\n\t ========================================================================================================================================\n");

                                                                    switch(escolha_2)
                                                                    {
                                                                        case 1://Indo para a Floresta(1)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("\t ========================================================================================================================================\n");
                                                                            printf("     \n     >Você ajeita as botas e segue para a Floresta...\n\n");
                                                                            printf("     >Ao entrar na floresta, se depara com um duende!\n\n");
                                                                            printf("     >Duende~'Olááá,caro mago! Buscando matéria prima novamente?'\n\n");
                                                                            printf("     >Zauber~'Não desta vez...Aliás,você sabe onde fica o santuário Magiccelium?'\n\n");
                                                                            printf("     >Duende~'Ora, que surpresa! Bem...Se não me engano fica por aquele lado ali.'\n\n");
                                                                            sleep(2);

                                                                            while(1)
                                                                            {
                                                                                printf("     Você confiará sua trilha no Duende? (S = 1; N = 2)");
                                                                                scanf("%i", &escolha_3);
                                                                                getchar();
                                                                                printf("\n\t ========================================================================================================================================\n");

                                                                                switch(escolha_3)
                                                                                {
                                                                                    case 1://Indo no caminho do Duende(1)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        limpar_tela();
                                                                                        printf("\t ========================================================================================================================================\n");
                                                                                        printf("     \n     >Decide por confiar no Duende e segue na direção apontada...\n\n");
                                                                                        printf("     >Você anda calmamente pela floresta...\n\n");
                                                                                        printf("     >De repente ouve um zumbido muito forte!\n\n");
                                                                                        printf("     >Um ninho de vespas venenosas acaba de ser atacado e elas estão furiosas!!!\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Você quer atravessar a nuvem de vespas? (S = 1 ; N = 2)");
                                                                                            scanf("%i", &escolha_4);
                                                                                            getchar();
                                                                                            printf("\n\t ========================================================================================================================================\n");

                                                                                            switch(escolha_4)
                                                                                            {
                                                                                                case 1://Atravessar as vespas
                                                                                                {  
                                                                                                    limpar_tela();
                                                                                                    printf("\t ========================================================================================================================================\n");
                                                                                                    printf("     \n     >Você corre confiante para atravessar\n\n");
                                                                                                    sleep(0);
                                                                                                    printf("     >......Ufa! Apesar de algumas ferroadas te deixarem tonto, você sobrevive e atravessa\n\n");
                                                                                                    printf("     >Você segue seu caminho...\n\n");
                                                                                                    printf("     >Certa hora, você se vê diante de um paredão rochoso que não é possível passar por cima.\n\n");
                                                                                                    printf("     >Olhando melhor...Você vê uma fresta bem apertada que parece dar no outro lado.\n\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Você quer atravessar pela fresta? ( S = 1; N = 2)");
                                                                                                        scanf("%i", &escolha_5);
                                                                                                        getchar();
                                                                                                        printf("\n\t ========================================================================================================================================\n");

                                                                                                        switch (escolha_5)
                                                                                                        {
                                                                                                            case 1://Passando Pela Fresta(1)
                                                                                                            { 
                                                                                                                jogadores[k].pontuacao += 10;

                                                                                                                limpar_tela();
                                                                                                                printf("\t ========================================================================================================================================\n");
                                                                                                                printf("     \n     >Você respira fundo...Se expreme para passar e,...\n\n");
                                                                                                                printf("     >Deu certo!! Você passou.\n\n");
                                                                                                                printf("     >Em seguida, você olha para a frente e se depara com um enorme santuário!!!\n\n");
                                                                                                                printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                sleep(3);
                                                                                                                printf("                                                        /      /      \n");
                                                                                                                printf("                                                       ||______||     \n");
                                                                                                                printf("                                                       || ^  ^ ||     \n");
                                                                                                                printf("                                                        | |  | |/     \n");
                                                                                                                printf("                                                        |______|      \n"); 
                                                                                                                printf("                      __                                |  __  |      \n");  
                                                                                                                printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                printf("                  /________  /=========================/________ =|   \n");
                                                                                                                printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                                printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                                printf("            *******        |          /_____           |      * | |   \n");
                                                                                                                printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                                printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                                printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                                printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                                printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                                printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                                printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                printf("     >Você se depara com um mantedor do santuário:\n\n");
                                                                                                                printf("     >Mantedor~'Olá! Como posso ajudá-lo?'\n\n");
                                                                                                                printf("     >Zauber~'Olá,homem santo! Estou atrás do Cajado MAGUS!!'\n\n");
                                                                                                                printf("     >Mantedor~'Ah sim... O famoso Cajado...'\n\n");
                                                                                                                printf("     >O Mantedor respira calmamente, olha nos teus olhos e diz: \n\n");

                                                                                                                while(1)
                                                                                                                {
                                                                                                                    printf("     >Mantedor~'É mais poderoso que os deuses, mais maligno que os demônios. É algo que os pobres tem e os ricos precisam.\n     Se você comê-lo, você morre. O que é isto? \n     (O Tempo = 2 ; O Nada = 1)>'");//CHARADA
                                                                                                                    scanf("%i", &escolha_6); // CONSERTAR COLOCAR COMPARAÇÃO de String
                                                                                                                    getchar();
                                                                                                                    printf("\n\t ========================================================================================================================================\n");

                                                                                                                    switch(escolha_6)
                                                                                                                    {
                                                                                                                        case 1://Acertou a charada
                                                                                                                        {
                                                                                                                            jogadores[k].pontuacao += 10;

                                                                                                                            limpar_tela();
                                                                                                                            printf("\t ========================================================================================================================================\n");
                                                                                                                            printf("     >O Mantedor da uma risada... Mantedor~'Muito Sábio! Pois bem... Me acompanhe'\n\n");
                                                                                                                            printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                                                            printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!");
                                                                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                            jogadores[k].vitorias += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        case 2://Errou a charada
                                                                                                                        {
                                                                                                                            limpar_tela();
                                                                                                                            printf("\t ========================================================================================================================================\n");
                                                                                                                            printf("     >Mantedor~'Você precisa mais do que isso para ser digno do MAGUS!'\n\n");
                                                                                                                            printf("     >O Mantedor joga uma fumaça em seu rosto que faz com que você adormeça profundamente!\n\n");
                                                                                                                            printf("     >Ao acordar, o santuário está vazio... Assim como a cova do antigo  Feiticeiro Ancião Magiccelium...\n\n");
                                                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                                            jogadores[k].derrotas += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        default:
                                                                                                                        {
                                                                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                            continue;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    break;
                                                                                                                }
                                                                                                                break;
                                                                                                            }      
                                                                                                            case 2: // Não Passou a Fresta
                                                                                                            {
                                                                                                                limpar_tela();
                                                                                                                printf("\t ========================================================================================================================================\n");
                                                                                                                printf("     >Você decide por não atravessar...\n\n");
                                                                                                                printf("     >Você ouve um rugido muito auto{RUUUUUUU ROAAAAARRRRRRRRR!!!!\n\n");
                                                                                                                printf("     >De repente um enorme urso em chamas passa correndo e pula encima de você!!!\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                        break;
                                                                                                    }
                                                                                                    break;
                                                                                                }


                                                                                                case 2://Não atravessa as vespas
                                                                                                { 
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    limpar_tela();
                                                                                                    printf("\t ========================================================================================================================================\n");
                                                                                                    printf("     \n     >Você decide por esperar...\n\n");
                                                                                                    printf("     >Elas estavam realmente furiosas... Demorou algumas horas para poder passar.\n\n");
                                                                                                    printf("     >Você segue seu caminho...\n\n");
                                                                                                    printf("     >Certa hora, você se vê diante de um paredão rochoso que não é possível passar por cima.\n\n");
                                                                                                    printf("     >Olhando melhor...Você vê uma fresta bem apertada que parece dar no outro lado.\n\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Você quer atravessar pela fresta? ( S = 1; N = 2)\n");
                                                                                                        scanf("%i", &escolha_5);
                                                                                                        getchar();
                                                                                                        printf("\n\t ========================================================================================================================================\n");
                                                                                                                                                                                                        switch(escolha_5)
                                                                                                        {
                                                                                                            case 1://Atravessando a fresta
                                                                                                            {
                                                                                                                limpar_tela();
                                                                                                                printf("\t ========================================================================================================================================\n");
                                                                                                                printf("     \n     >Você deixa a corda no chão...Se expreme para passar...\n\n");
                                                                                                                printf("     >Ufa! Deu certo e você passou.\n\n");
                                                                                                                printf("     >Em seguida, você olha para a frente e se depara com um enorme santuário!!!\n\n");
                                                                                                                printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                sleep(3);
                                                                                                                printf("                                                        /      /      \n");
                                                                                                                printf("                                                       ||______||     \n");
                                                                                                                printf("                                                       || ^  ^ ||     \n");
                                                                                                                printf("                                                        | |  | |/     \n");
                                                                                                                printf("                                                        |______|      \n"); 
                                                                                                                printf("                      __                                |  __  |      \n");  
                                                                                                                printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                printf("                  /________  /=========================/________ =|   \n");
                                                                                                                printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                                printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                                printf("            *******        |          /_____           |      * | |   \n");
                                                                                                                printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                                printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                                printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                                printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                                printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                                printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                                printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                                printf("     >Só possui marcas do cajado... Quelle passou antes de você!\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                              \n");//FIM

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1); 
                                                                                                                break;
                                                                                                            }

                                                                                                            case 2://Não Atravessa a Fresta
                                                                                                            {
                                                                                                                limpar_tela();
                                                                                                                printf("\t ========================================================================================================================================\n");
                                                                                                                printf("     >Você decide por não atravessar...\n\n");
                                                                                                                printf("     >Você ouve um rugido muito auto{RUUUUUUU ROAAAAARRRRRRRRR!!!!\n\n");
                                                                                                                printf("     >De repente um enorme urso em chamas passa correndo e pula encima de você!!!\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");

                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                for (int i = 0; i < 4; i++)  // Bubble Sort para fazer ordenação. 
                                                                                                                {
                                                                                                                    for (int j = i + 1; j < 5; j++)
                                                                                                                    {
                                                                                                                        if (jogadores[i].vitorias < jogadores[j].vitorias)
                                                                                                                        {
                                                                                                                            struct player_t troca = jogadores[i];
                                                                                                                            jogadores[i] = jogadores[j];
                                                                                                                            jogadores[j] = troca;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }

                                                                                                                sleep(3);
                                                                                                                limpar_tela();
                                                                                                                printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
                                                                                                                printf("                                                                  𝐒 𝐂 𝐎 𝐑 𝐄 𝐁 𝐎 𝐀 𝐑 𝐃                                                             \n\n\n");
                                                                                                                printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
                                                                                                                printf("     %-50s %-50s %60s %60s","-= 𝐉 𝐎 𝐆 𝐀 𝐃 𝐎 𝐑 =-","-= 𝐏 𝐎 𝐍 𝐓 𝐔 𝐀 Ç Ã 𝐎 =-","-= 𝐕 𝐈 𝐓 Ó 𝐑 𝐈 𝐀 𝐒 =-", "-= 𝐃 𝐄 𝐑 𝐑 𝐎 𝐓 𝐀 𝐒 =-");

                                                                                                                for (int i = 0; i < 5; i++)
                                                                                                                {
                                                                                                                    printf("\n\t%-30s\t%-40.2d\t%-40.2d\t%-40.2d\n", jogadores[i].nome,jogadores[i].pontuacao, jogadores[i].vitorias, jogadores[i].derrotas);

                                                                                                                }
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1); 
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                        break;
                                                                                                    }
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }

                                                                                    case 2://Indo contra o camindo do Duende(2)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        limpar_tela();
                                                                                        printf("\t ========================================================================================================================================\n");
                                                                                        printf("     >Você espera o duende seguir e vai pelo caminho oposto ao indicado!\n\n");
                                                                                        printf("     >Após um tempo você vê que o ar vai ficando mais úmido e...\n\n");
                                                                                        printf("     >Você sente a lama em seus pés!... Uma poça de lama interrompe o caminho.\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Dejesa atravessá-la? (S=1/N=2)");
                                                                                            scanf("%i", &escolha_4);
                                                                                            getchar();
                                                                                            printf("\n\t ========================================================================================================================================\n");

                                                                                            switch(escolha_4)
                                                                                            {
                                                                                                case 1:
                                                                                                {
                                                                                                    limpar_tela();
                                                                                                    printf("\t ========================================================================================================================================\n");
                                                                                                    printf("     >Você começa a entrar naquela lama gosmenta...\n\n");
                                                                                                    printf("     >A cada passo você vai se sentindo puxado, mas continua.\n\n");
                                                                                                    printf("     >Quando você entra por completo, algo prende seu pé. . .\n\n");
                                                                                                    printf("     >Que maneira feia de terminar uma vida...\n\n");        
                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");   

                                                                                                    jogadores[k].derrotas+= 1;
                                                                                                     mostrar_placar(jogadores);
                                                                                                    sleep(10);
                                                                                                    limpar_tela();
                                                                                                    sleep(1);
                                                                                                    break;
                                                                                                }

                                                                                                case 2:
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    printf("     >Você decide por não atravessar.\n\n");
                                                                                                    printf("     >Olhando um pouco melhor, tem um cipó preso a uma arvore do outro lado da lama!\n\n");
                                                                                                    printf("     >Você sobe em um árvore... segura forte no cipó... e salta!\n\n");
                                                                                                    sleep(2);

                                                                                                    printf("\t ========================================================================================================================================\n\n");
                                                                                                    printf("\t\t\t\t\t\t\t       .-------.    ______    \n");
                                                                                                    printf("\t\t\t\t\t\t\t      /   o   /|   /          \n");
                                                                                                    printf("\t\t\t\t\t\t\t     /_______/o|  /o    o     \n");
                                                                                                    printf("\t\t\t\t\t\t\t     | o     | | /   o _____  \n");
                                                                                                    printf("\t\t\t\t\t\t\t     |   o   |o/  o   /o    / \n");
                                                                                                    printf("\t\t\t\t\t\t\t     |     o |/     o/  o  /  \n");
                                                                                                    printf("\t\t\t\t\t\t\t     '-------'      /____o/   \n");
                                                                                                    printf("\n\t ========================================================================================================================================\n");

                                                                                                    escolha_dado = rand() % 20 + 1;

                                                                                                    if(escolha_dado >= 15)
                                                                                                    {
                                                                                                        jogadores[k].pontuacao += 10;



                                                                                                        printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado) ;          
                                                                                                        printf("     >Você consegue se jogar do cipó a tempo e cai do outro lado a salvo!\n\n");
                                                                                                        printf("     >Continua a caminhada...\n\n");
                                                                                                        printf("     >Ao passar de um arbusto, você ouve um rugido muito alto!\n\n");
                                                                                                        printf("     >Um URSO enorme aparece cobrindo toda a sua visão!!!\n\n");
                                                                                                        printf("     >O Urso tenta te atacar e você desvia!\n\n");
                                                                                                        printf("     >Você junta suas energias nas mãos e solta uma magia sobre ele!\n\n");

                                                                                                        while(1)
                                                                                                        {
                                                                                                            printf("     > *Toque da Loucura(1)* ou *Mortalha Flamejante(2)* >>");
                                                                                                            scanf("%i", &escolha_5);
                                                                                                            getchar();

                                                                                                            switch (escolha_5)
                                                                                                            {
                                                                                                                case 1:
                                                                                                                {
                                                                                                                    printf("     >O Urso põe as patas na cabeça enquanto berra!!!\n\n");
                                                                                                                    printf("     >Ele, confuso, parte para cima mais furioso do que nunca!!!\n\n");
                                                                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");     

                                                                                                                    jogadores[k].derrotas += 1;
                                                                                                                     mostrar_placar(jogadores);
                                                                                                                    sleep(10);
                                                                                                                    limpar_tela();
                                                                                                                    sleep(1);          
                                                                                                                    break;
                                                                                                                }

                                                                                                                case 2:
                                                                                                                {
                                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                                    printf("     >Sobre o Urso surgem chamas que o queimam sem dó!!!\n\n");
                                                                                                                    printf("     >Urso~'ROOOAAAAAARRRRRRRRRRR', e foge correndo para dentro da floresta!\n\n");
                                                                                                                    printf("     >Zauber'Ufa! Essa foi por pouco!'\n\n");
                                                                                                                    printf("     >Após mais algum tempo você enfim chega ao santuário...");
                                                                                                                    printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                    printf("                                                        /      /      \n");
                                                                                                                    printf("                                                       ||______||     \n");
                                                                                                                    printf("                                                       || ^  ^ ||     \n");
                                                                                                                    printf("                                                        | |  | |/     \n");
                                                                                                                    printf("                                                        |______|      \n"); 
                                                                                                                    printf("                      __                                |  __  |      \n");  
                                                                                                                    printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                    printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                    printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                    printf("                  /________  /=========================/________ =|   \n");
                                                                                                                    printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                    printf("              *** | ^^  ^^ |---------------------------| ^^  ^^ |--   \n");
                                                                                                                    printf("             *****| []  [] |           _____           | []  [] | |   \n");
                                                                                                                    printf("            *******        |          /_____           |      * | |   \n");
                                                                                                                    printf("           *********^^  ^^ |  ^^  ^^  |  |  |  ^^  ^^  |     ***| |   \n");
                                                                                                                    printf("          ***********]  [] |  []  []  |  |  |  []  []  | ===***** |   \n");
                                                                                                                    printf("         *************     |         @|__|__|@         |/ |*******|   \n");
                                                                                                                    printf("        ***************   ***********--=====--**********| *********   \n");
                                                                                                                    printf("        ***************___*********** |=====| **********|***********  \n");
                                                                                                                    printf("         *************     ********* /=======  ******** | *********   \n\n");
                                                                                                                    printf("     >O Mantedor do santuário escuta que você está atrás do MAGUS e, depois de pensar um pouco...\n\n");
                                                                                                                    printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                                                    printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!\n\n");
                                                                                                                    printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                    printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                                    jogadores[k].vitorias += 1;
                                                                                                                    mostrar_placar(jogadores);
                                                                                                                    sleep(10);
                                                                                                                    limpar_tela();
                                                                                                                    sleep(1);
                                                                                                                    break;
                                                                                                                }

                                                                                                                default:
                                                                                                                {
                                                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                        continue;
                                                                                                                }
                                                                                                            }
                                                                                                            break;
                                                                                                        }
                                                                                                    }else if (escolha_dado < 15)
                                                                                                    {
                                                                                                        printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado) ;
                                                                                                        printf("     >O cipó estava coberto de um óleo escorregadio de árvore... Suas velhas e fracas mãos não foram suficientes...\n\n");
                                                                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");          

                                                                                                        jogadores[k].derrotas += 1;
                                                                                                        mostrar_placar(jogadores);
                                                                                                        sleep(10);
                                                                                                        limpar_tela();
                                                                                                        sleep(1);   
                                                                                                    }
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }

                                                                                    default:
                                                                                    {
                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                        continue;
                                                                                    }
                                                                                }
                                                                                break;
                                                                            }
                                                                            break;
                                                                        }


                                                                        case 2://Indo para a Deserto(2)
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            printf("     >Você decide por seguir pelo deserto...\n\n");
                                                                            printf("     >Você chega a um lugar e vê uma placa apontando para a direita!\n\n");
                                                                            printf("     >Ao olhar para a esquerda você vê um camelo domesticado e com sela\n\n");

                                                                            while(1)
                                                                            {
                                                                                printf("     >Você quer ir para a esquerda(camelo) ou para a direita(placa)?\n (Esquerda(1)/Direita(2)) >> ");
                                                                                scanf("%i", &escolha_3);
                                                                                getchar();

                                                                                switch(escolha_3)
                                                                                {
                                                                                    case 1:// Camelo (Esquerda)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;
                                                                                        printf("     >O camelo começa a andar bem lentamente.  .   .\n\n");

                                                                                        while(1)
                                                                                        {
                                                                                            printf("     >Você quer apressá-lo e correr ou não?(S(1)/N(2)>>");
                                                                                            scanf("%i",&escolha_4);
                                                                                            getchar();

                                                                                            switch(escolha_4)
                                                                                            {
                                                                                                case 1://correr
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    printf("     >Você dá umas batidas com a guia do camelo e ele começa a andar rapidamente.\n\n");
                                                                                                    printf("     >Após um tempo você sente o chão tremendo e...\n\n");
                                                                                                    printf("     >Na sua frente surge um enorme GOLEM DE AREIA!!!\n\n");
                                                                                                    printf("     >Você percebe sua irritação com seus movimentos...\n\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Você quer correr pra cima dele ou quer ficar parado? (correr(1)/parado(2)) ");
                                                                                                        scanf("%i", &escolha_5);
                                                                                                        getchar();

                                                                                                        switch(escolha_5)
                                                                                                        {
                                                                                                            case 1: // Correr 
                                                                                                            {
                                                                                                                printf("     >O camelo corre corre pra cima!! O Golem abre a boca e engole vocês!!!\n\n");
                                                                                                                printf("     >Golem~'AAAAAAUUMMHHHHHHHHH'\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");       
                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            case 2: // Parado
                                                                                                            {
                                                                                                                jogadores[k].pontuacao += 10;
                                                                                                                printf("     >Você fica parado e o monstro resolve te encarar...\n\n");
                                                                                                                printf("     >Você lembra que tem compromisso e tem que conseguir seguir o caminho!\n\n");

                                                                                                                while(1)
                                                                                                                {
                                                                                                                    printf("     >Quer descer do camelo e seguir a pé ou ficar encima e esperar o montro se acalmar?\n(Descer(1)/Ficar(2))");
                                                                                                                    scanf("%i", &escolha_6);
                                                                                                                    getchar();

                                                                                                                    switch(escolha_6)
                                                                                                                    {
                                                                                                                        case 1: // descer
                                                                                                                        {
                                                                                                                            printf("     >Você começa a descer do camelo...\n\n");
                                                                                                                            printf("     >Ao encostar o pé no chão a areia recobre eles e começa a subir por suas pernas!!\n\n");
                                                                                                                            printf("     >Zauber~'NâoOooOOOoo!!!'\n\n");
                                                                                                                            printf("     >O Golem te enterrou sob 7 palmos abaixo da areia...");
                                                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");  

                                                                                                                            jogadores[k].derrotas += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        case 2:// Ficar
                                                                                                                        {
                                                                                                                            jogadores[k].pontuacao += 10;

                                                                                                                            printf("     >Você decide por esperar o monstro se acalmar...\n\n");
                                                                                                                            printf("     >O camelo após alguns minutos se acalma e volta ao formato de areia sem vida!\n\n");
                                                                                                                            printf("     >Você dá um pouco de água ao seu camelo pra se ele acalmar...\n\n");
                                                                                                                            printf("     >Após mais um tempo andando você chega aos fundos do santuário que está virado para uma floresta!");
                                                                                                                            printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                            printf("                                                        /      /      \n");
                                                                                                                            printf("                                                       ||______||     \n");
                                                                                                                            printf("                                                       || ^  ^ ||     \n");
                                                                                                                            printf("                                                        | |  | |/     \n");
                                                                                                                            printf("                                                        |______|      \n"); 
                                                                                                                            printf("                      __                                |  __  |      \n");  
                                                                                                                            printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                            printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                            printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                            printf("                  /________  /=========================/________ =|   \n");
                                                                                                                            printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                            printf("              *** |        |---------------------------|        |--   \n");
                                                                                                                            printf("             *****|        |                           |        | |   \n");
                                                                                                                            printf("            *******        |                           |      * | |   \n");
                                                                                                                            printf("           *********^^     |                           |     ***| |   \n");
                                                                                                                            printf("          ***********      |                           | ===***** |   \n");
                                                                                                                            printf("         *************     |                           |/ |*******|   \n");
                                                                                                                            printf("        ***************   ***********        **********| *********    \n");
                                                                                                                            printf("        ***************___***********         **********|***********  \n");
                                                                                                                            printf("         *************     *********___________******** | *********   \n\n");
                                                                                                                            printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                            printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");
                                                                                                                            jogadores[k].vitorias += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);         
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        default:
                                                                                                                        {
                                                                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                            continue;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;

                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                    break;
                                                                                                } 

                                                                                                case 2://não correr
                                                                                                {
                                                                                                    jogadores[k].pontuacao += 10;

                                                                                                    printf("     >Você prefere ir lentamente e após algumas horas...\n\n");
                                                                                                    printf("     >Você encontra um OÁSIS!!!\n\n");
                                                                                                    printf("     >O seu camelo ao ver o pequeno lago fica alvoroçado!!!\n");

                                                                                                    while(1)
                                                                                                    {
                                                                                                        printf("     >Você quer deixá-lo beber água ou continuar andando?(água(1)/seguir(2))\n\n");
                                                                                                        scanf("%i", &escolha_6);
                                                                                                        getchar();

                                                                                                        switch(escolha_6)
                                                                                                        {
                                                                                                            case 1://Parar para descansar
                                                                                                            {
                                                                                                                printf("     >Você desce do camelo e deixa ele ir em encontro a água...\n\n");
                                                                                                                printf("     >O camelo bebe a água lentamente...\n\n");
                                                                                                                printf("     >Ele começa a tremer muito!!!\n\n");
                                                                                                                printf("     >O coitado morre e você com o cantil na boca que tinha acabado de encher no pequeno lago, se desespera!!!\n\n");
                                                                                                                printf("     >Você sente seu corpo se derrentendo por dentro!!!\n\n");
                                                                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n");    
                                                                                                                jogadores[k].derrotas += 1;
                                                                                                                mostrar_placar(jogadores);
                                                                                                                sleep(10);
                                                                                                                limpar_tela();
                                                                                                                sleep(1);
                                                                                                                break;
                                                                                                            }

                                                                                                            case 2://Seguir em frente
                                                                                                            {
                                                                                                                jogadores[k].pontuacao += 10;
                                                                                                                printf("     >Você segue em frente e seu camelo após um pouco de resistência aceita.       \n\n");
                                                                                                                printf("     >Você chega em um templo e para para seu camelo descansar um pouco...         \n\n");
                                                                                                                printf("     >No templo estão escritos símbolos com setas para a direita e para a esquerda.\n\n");
                                                                                                                printf(" ◄                                                                                 \n");
                                                                                                                printf("                       _  _    __.   _,_  __  _    ___        _                    \n");
                                                                                                                printf("                      (_/ ) _|)  __   '  (__  _|)    )  --o  (_)                   \n\n");
                                                                                                                printf("                                   OU                                              \n\n");
                                                                                                                printf("                  ___                _                       _                     \n");
                                                                                                                printf("                 |                         |                                       \n");
                                                                                                                printf("                 |      -    |- -    +    -+-   -    |-      +    -                \n");
                                                                                                                printf("                 |    |/    | | |   |     |   |/    |       |   | |                \n");
                                                                                                                printf("                  ---   --                  -   --                -                \n");          
                                                                                                                printf("                 |                                                                 \n ►");

                                                                                                                while(1)
                                                                                                                {
                                                                                                                    printf("1- Esquerda(◄) ou 2- Direita(►)?");
                                                                                                                    scanf("%i", &escolha_7);
                                                                                                                    getchar();

                                                                                                                    switch(escolha_7)
                                                                                                                    {
                                                                                                                        case 1://Esquerda
                                                                                                                        {
                                                                                                                            jogadores[k].pontuacao += 10;

                                                                                                                            printf("     >Você sem demorar muito escolhe o caminho que aponta para a esquerda...\n\n");
                                                                                                                            printf("     >Você anda por um tempo e...\n\n");
                                                                                                                            printf("     >Chega aos fundos do santuário!!!\n\n");
                                                                                                                            printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!'\n\n");
                                                                                                                            printf("                                                        /      /      \n");
                                                                                                                            printf("                                                       ||______||     \n");
                                                                                                                            printf("                                                       || ^  ^ ||     \n");
                                                                                                                            printf("                                                        | |  | |/     \n");
                                                                                                                            printf("                                                        |______|      \n"); 
                                                                                                                            printf("                      __                                |  __  |      \n");  
                                                                                                                            printf("                     /          ________________________|_/   _|__    \n");
                                                                                                                            printf("                    / ^^       /=========================/ ^^  ===|   \n");
                                                                                                                            printf("                   /  []      /=========================/  []   ==|   \n");
                                                                                                                            printf("                  /________  /=========================/________ =|   \n");
                                                                                                                            printf("               *  |        |/==========================|        |=|   \n");
                                                                                                                            printf("              *** |        |---------------------------|        |--   \n");
                                                                                                                            printf("             *****|        |                           |        | |   \n");
                                                                                                                            printf("            *******        |                           |      * | |   \n");
                                                                                                                            printf("           *********^^     |                           |     ***| |   \n");
                                                                                                                            printf("          ***********      |                           | ===***** |   \n");
                                                                                                                            printf("         *************     |                           |/ |*******|   \n");
                                                                                                                            printf("        ***************   ***********        **********| *********    \n");
                                                                                                                            printf("        ***************___***********         **********|***********  \n");
                                                                                                                            printf("         *************     *********___________******** | *********   \n\n");
                                                                                                                            printf("     >Você entra rapidamente no santuário\n\n");
                                                                                                                            printf("     > Abre a cova do antigo Feiticeiro Ancião Magiccelium e...\n\n");
                                                                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");
                                                                                                                            jogadores[k].vitorias += 1;
                                                                                                                            mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        case 2://Direita
                                                                                                                        {
                                                                                                                            printf("     >Sem muita demora você segue para a direita com seu camelo...                                    \n\n");
                                                                                                                            printf("     >Você anda por horas e horas...                                                                  \n\n");
                                                                                                                            printf("     >Ao anoitecer voce chega a um cemitério cheio de canibais famintos!!!                            \n\n");
                                                                                                                            printf("                                                                       .---.                          \n");
                                                                                                                            printf("                                                                  '-.  |   |  .-'                      \n");
                                                                                                                            printf("                                                                    ___|   |___                        \n");
                                                                                                                            printf("                                                               -=  [           ]  =-                   \n");
                                                                                                                            printf("                                                                   `---.   .---'                       \n");
                                                                                                                            printf("                                                                __||__ |   | __||__                    \n");
                                                                                                                            printf("                                                                '-..-' |   | '-..-'                    \n");
                                                                                                                            printf("                                                                  ||   |   |   ||                      \n");
                                                                                                                            printf("                                                                  ||_.-|   |-,_||                      \n");
                                                                                                                            printf("                                                               .- `    `  '`   ` .                     \n");
                                                                                                                            printf("                                                              '                    '                   \n");
                                                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========             \n");   
                                                                                                                            jogadores[k].derrotas += 1;
                                                                                                                             mostrar_placar(jogadores);
                                                                                                                            sleep(10);
                                                                                                                            limpar_tela();
                                                                                                                            sleep(1);
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        default:
                                                                                                                        {
                                                                                                                            printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                            continue;
                                                                                                                        }              
                                                                                                                    }
                                                                                                                    break;
                                                                                                                }
                                                                                                                break;
                                                                                                            }

                                                                                                            default:
                                                                                                            {
                                                                                                                printf("     >Opção Inválida! Tente Novamente!");
                                                                                                                continue;
                                                                                                            }
                                                                                                        }
                                                                                                        break;
                                                                                                    }
                                                                                                    break;
                                                                                                }

                                                                                                default:
                                                                                                {
                                                                                                    printf("     >Opção Inválida! Tente Novamente!");
                                                                                                    continue;
                                                                                                }
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    }

                                                                                    case 2:// Caminho (Direita)
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        printf("     >Você decide por seguir pelo caminho a pé mesmo...\n\n");
                                                                                        printf("     >Após um tempo andando, você sente a areia ficando muito fofa...\n\n");
                                                                                        printf("     >Você olha pra baixo e percebe que está em uma Areia Movediça!!!\n\n");
                                                                                        sleep(2);

                                                                                        escolha_dado_2 = rand() % 20 + 1;

                                                                                        if(escolha_dado_2 >= 15)
                                                                                        {
                                                                                            printf("     >Você consegue se segurar em uma pedra a tempo e contorna a areia movediça!            \n\n");
                                                                                            printf("     >Você anda por um longo caminho...                                                     \n\n");
                                                                                            printf("     >Você sem acreditar, chega nos fundos do santuário!!!                                  \n\n");
                                                                                            printf("     >Zauber~'AH! O belíssimo Santuário Magiccelium!                                        \n\n");
                                                                                            printf("                                                        /      /                            \n");
                                                                                            printf("                                                       ||______||                           \n");
                                                                                            printf("                                                       || ^  ^ ||                           \n");
                                                                                            printf("                                                        | |  | |/                           \n");
                                                                                            printf("                                                        |______|                            \n"); 
                                                                                            printf("                      __                                |  __  |                            \n");  
                                                                                            printf("                     /          ________________________|_/   _|__                          \n");
                                                                                            printf("                    / ^^       /=========================/ ^^  ===|                         \n");
                                                                                            printf("                   /  []      /=========================/  []   ==|                         \n");
                                                                                            printf("                  /________  /=========================/________ =|                         \n");
                                                                                            printf("               *  |        |/==========================|        |=|                         \n");
                                                                                            printf("              *** |        |---------------------------|        |--                         \n");
                                                                                            printf("             *****|        |                           |        | |                         \n");
                                                                                            printf("            *******        |                           |      * | |                         \n");
                                                                                            printf("           *********^^     |                           |     ***| |                         \n");
                                                                                            printf("          ***********      |                           | ===***** |                         \n");
                                                                                            printf("         *************     |                           |/ |*******|                         \n");
                                                                                            printf("        ***************   ***********        **********| *********                          \n");
                                                                                            printf("        ***************___***********         **********|***********                        \n");
                                                                                            printf("         *************     *********___________******** | *********                         \n\n");
                                                                                            printf("     >O Mantedor do santuário olha sem crer para o chão atrás de você...                    \n\n");
                                                                                            printf("     >Você percebe que deixou um rastro enorme de areia com suas botas imundas!!!           \n\n");
                                                                                            printf("     >mantedor~'Você vai limpar isso agora!'E te mostra uma vassoura e um rodo com pano...  \n");

                                                                                            while(1)
                                                                                            {
                                                                                                printf("     >Vassoura(1)/Rodo(2) >>                                                                \n");
                                                                                                scanf("%i",&escolha_4);
                                                                                                getchar();

                                                                                                switch(escolha_4)
                                                                                                {
                                                                                                    case 1://Vassoura
                                                                                                    {
                                                                                                        printf("     >Você escolhe a vassouura e começa a varrer...                                          \n\n");
                                                                                                        printf("     >Ao varrer, você vê que suja cada vez mais o santuário!!                                \n\n");
                                                                                                        printf("     >O Mantedor se enfurece e joga uma fumaça em você que te adormece...                    \n\n");
                                                                                                        printf("     >Ao acordar, você está fora do santuário e de noite...                                  \n\n");
                                                                                                        printf("     >Você vai escondido ao túmulo do antigo Feiticeiro Ancião Magiccelium e...              \n\n");
                                                                                                        printf("     >Só possui marcas do cajado... Quelle passou enquanto você dormia!                      \n\n");
                                                                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========   \n");//FIM
                                                                                                        jogadores[k].derrotas += 1;
                                                                                                        mostrar_placar(jogadores);
                                                                                                        sleep(10);
                                                                                                        limpar_tela();
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                    }

                                                                                                    case 2://Rodo
                                                                                                    {
                                                                                                        jogadores[k].pontuacao += 10;

                                                                                                        printf("     >Você escolhe o Rodo com pano e começa a limpar...        \n\n");
                                                                                                        printf("     >Em poucos minutos você consegue limpar toda a sujeira!!! \n\n");
                                                                                                        printf("     >O Mantedor olha satisfeito para você e sua limpeza...    \n\n");
                                                                                                        printf("     >Mantedor~'Muito bem, agora me diga: O que te trás aqui?' \n");
                                                                                                        printf("     >Zauber~'Eu desejo pegar o lendário cajado MAGUS! Por favor!\n\n");
                                                                                                        printf("     >Ele te leva até a cova do antigo Feiticeiro Ancião Magiccelium e em uma nuvem de fumaça, desaparece!\n\n");
                                                                                                        printf("     >Você abre a cova e lá está!!! O CAJADO MAGUS!!!");
                                                                                                        printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA A ELFA QUELLE!!!\n\n");
                                                                                                        printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                                        jogadores[k].vitorias += 1;
                                                                                                        mostrar_placar(jogadores);
                                                                                                        sleep(10);
                                                                                                        limpar_tela();
                                                                                                        sleep(1);
                                                                                                        break;
                                                                                                    }

                                                                                                    default:
                                                                                                    {
                                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                                        continue;
                                                                                                    }
                                                                                                }
                                                                                                break;
                                                                                            }
                                                                                            break;
                                                                                        }else if(escolha_dado_2 < 15)
                                                                                        {
                                                                                            printf("    >Você se desespera!!!\n\n");
                                                                                            printf("    >Quando percebe, você já está debaixo da areia e não tem como se salvar...\n\n");
                                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========   \n");//FIM

                                                                                            jogadores[k].derrotas += 1;
                                                                                             mostrar_placar(jogadores);
                                                                                            sleep(10);
                                                                                            limpar_tela();
                                                                                            sleep(1);
                                                                                        }
                                                                                        break;
                                                                                    }   

                                                                                    default:
                                                                                    {
                                                                                        printf("     >Opção Inválida! Tente Novamente!");
                                                                                        continue;
                                                                                    }
                                                                                }
                                                                                break;
                                                                            }
                                                                            break;
                                                                        }

                                                                        default:
                                                                        {
                                                                            printf("     >Opção Inválida! Tente Novamente!\n");
                                                                            continue;
                                                                        }
                                                                    }
                                                                    break;

                                                                }
                                                                break;
                                                            }

                                                            default:
                                                            {
                                                                printf("     >Opção Inválida! Tente Novamente!\n");
                                                                continue;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                    break;
                                                } 

                                                default:
                                                {
                                                    printf("     >Opção Inválida! Tente Novamente!\n");
                                                    sleep(2);
                                                    continue;
                                                }
                                            } 
                                            break;
                                        }
}
