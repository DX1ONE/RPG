#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "magus.h"

void jogar_nivel_avancado_quelle(struct player_t jogadores[JOGADORES_MAX], int k)
{
    int escolha_1 = -1, escolha_2 = -1, escolha_3 = -1, escolha_4 = -1;
    int escolha_5 = -1, escolha_6 = -1, escolha_7 = -1, escolha_8 = -1;
    int escolha_dado, escolha_dado_2;

    limpar_tela();
    printf("     ========================================================================================================================================\n");
    printf("     ============================================================== 𝓐 𝓿 𝓪 𝓷 ç 𝓪 𝓭 𝓸 =============================================================\n");
    printf("     ========================================================================================================================================\n");
    printf("     Entrando no Mundo como Quelle...\n");
    usleep(500);
    printf("                                                         --- 𝐀 𝐭 𝐫 𝐢 𝐛 𝐮 𝐭 𝐨 𝐬 ---\n     𝐕 𝐞 𝐥 𝐨 𝐜 𝐢 𝐝 𝐚 𝐝 𝐞\n\n     𝐄 𝐬 𝐩 𝐞 𝐫 𝐭 𝐞 𝐳 𝐚\n\n     𝐈 𝐦 𝐩 𝐚 𝐜 𝐢 ê 𝐧 𝐜 𝐢 𝐚\n\n");
    printf("     ========================================================================================================================================\n");
    sleep(5);
    limpar_tela();
    printf("     ========================================================================================================================================\n");
    printf("     >Você acorda em sua cabana, nos arredores da vila élfica...\n\n");

    while (1)
    {
        printf("     >Sair de casa agora mesmo? (S = 1 ; N = 2)");
        scanf("%i", &escolha_1);
        getchar();
        printf("\n\n");
        printf("     ========================================================================================================================================\n");

        switch (escolha_1)
        {
            case 1: //Saindo de Casa
            {
                limpar_tela();
                jogadores[k].pontuacao += 10;

                printf("     ========================================================================================================================================\n");
                printf("     >Sem perder um segundo, você calça as botas e sai porta afora...\n\n");
                printf("     >Ao fechar a porta, dois caminhos se abrem diante de você!\n\n");
                printf("     >Um sobe rumo às Montanhas geladas, o outro desce em direção a um Lago imenso.\n\n");

                while (1)
                {
                    printf("     >Qual caminho você escolhe? (Montanhas = 1 ; Lago = 2)");
                    scanf("%i", &escolha_2);
                    getchar();
                    printf("\n\n     ========================================================================================================================================\n");

                    switch (escolha_2)
                    {
                        case 1: //Indo para as Montanhas
                        {
                            jogadores[k].pontuacao += 10;

                            limpar_tela();
                            printf("     ========================================================================================================================================\n");
                            printf("     >Você aperta o passo rumo às Montanhas...\n\n");
                            printf("               _.-^^---....,,--        \n");
                            printf("           _--                  --_    \n");
                            printf("          <                        >)  \n");
                            printf("          |                         |   \n");
                            printf("           \\._                   _./   \n");
                            printf("              ```--. . , ; .--'''       \n");
                            printf("                    | |   |             \n");
                            printf("                 .-=||  | |=-.          \n");
                            printf("                 `-=#$%%&%%$#=-'         \n");
                            printf("                    | ;  :|             \n");
                            printf("           _____.,-#%%&$@%%#&#~,._____   \n\n");
                            printf("     >O ar fica mais fino e o vento uiva entre os picos nevados.\n\n");
                            printf("     >Logo à frente, o caminho se bifurca!\n\n");
                            sleep(2);

                            while (1)
                            {
                                printf("     >Para onde você vai? (Esquerda = 1 ; Direita = 2)");
                                scanf("%i", &escolha_3);
                                getchar();
                                printf("\n\n     ========================================================================================================================================\n");

                                switch (escolha_3)
                                {
                                    case 1: //Caminho estreito (Esquerda)
                                    {
                                        jogadores[k].pontuacao += 10;

                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Você segue pela esquerda e encontra um caminho estreito, cravado na lateral do penhasco.\n\n");
                                        printf("     >Lá embaixo, é só pedra e nada mais...\n\n");
                                        sleep(2);

                                        while (1)
                                        {
                                            printf("     >Vai atravessar o caminho estreito? (S = 1 ; N = 2)");
                                            scanf("%i", &escolha_4);
                                            getchar();
                                            printf("\n\n     ========================================================================================================================================\n");

                                            switch (escolha_4)
                                            {
                                                case 1: //Atravessar
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Você avança com cuidado, pé ante pé, colada na parede de pedra...\n\n");
                                                    printf("     >De repente, um MONSTRO salta de uma fenda na rocha, todo presas e veneno escorrendo!\n\n");
                                                    printf("     >Ele é frágil, mas rápido e extremamente venenoso. Um único bote já basta.\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >O que você faz? *Desviar e Correr(1)* ou *Contra-Atacar(2)* >>");
                                                        scanf("%i", &escolha_5);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_5)
                                                        {
                                                            case 1: //Desviar - Passou
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Rápida como sempre, você se joga para o lado e escapa das presas por um triz!\n\n");
                                                                printf("     >O MONSTRO, frustrado, desiste da caçada e volta para sua fenda.\n\n");
                                                                printf("     >Logo adiante, você encontra um velho Muambeiro sentado numa pedra.\n\n");
                                                                printf("     >Muambeiro~'Ei, você aí! Passou pelo bicho vivinha? Tome, isso pode te ajudar.'\n\n");
                                                                printf("     >Ele te entrega um frasquinho: um Bálsamo de Cura!\n\n");
                                                                sleep(2);
                                                                printf("     >Com o frasco em mãos, você segue... e no alto de uma rocha vê algo brilhar.\n\n");
                                                                printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                jogadores[k].vitorias += 1;
                                                                mostrar_placar(jogadores);
                                                                limpar_tela();
                                                                sleep(1);
                                                                break;
                                                            }

                                                            case 2: //Contra-Atacar - Não Passou
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Você tenta revidar, mas o MONSTRO é rápido demais e crava as presas em seu braço!\n\n");
                                                                printf("     >O veneno corre solto e suas pernas cedem antes mesmo de você gritar por socorro...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
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

                                                case 2: //Não Atravessar
                                                {
                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Prudente, você decide não arriscar o caminho estreito e procura outra passagem...\n\n");
                                                    printf("     >É tarde demais: um Íbex da Montanha, assustado com sua presença, avança e te dá uma cabeçada!\n\n");
                                                    printf("     >Você perde o equilíbrio e despenca penhasco abaixo...\n\n");
                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                    jogadores[k].derrotas += 1;
                                                    mostrar_placar(jogadores);
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

                                    case 2: //Pico Gelado (Direita)
                                    {
                                        jogadores[k].pontuacao += 10;

                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Você sobe pela direita e chega ao Pico Gelado, encoberto por uma névoa branca.\n\n");
                                        printf("     >Ao longe, nuvens escuras se formam rapidamente. Uma nevasca está chegando!\n\n");
                                        printf("     >Perto dali, uma cabana de madeira se ergue solitária na neve.\n\n");
                                        sleep(2);

                                        while (1)
                                        {
                                            printf("     >O que você faz? *Enfrentar a nevasca(1)* ou *Se abrigar na cabana(2)* >>");
                                            scanf("%i", &escolha_6);
                                            getchar();
                                            printf("\n\n     ========================================================================================================================================\n");

                                            switch (escolha_6)
                                            {
                                                case 1: //Nevasca
                                                {
                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Você segue em frente, confiante em sua velocidade... mas a nevasca é mais rápida ainda.\n\n");
                                                    printf("     >O vento gelado corta sua pele e a visibilidade cai a zero.\n\n");
                                                    printf("     >Quando o vento passa, só resta um vulto branco coberto de neve...\n\n");
                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                    jogadores[k].derrotas += 1;
                                                    mostrar_placar(jogadores);
                                                    limpar_tela();
                                                    sleep(1);
                                                    break;
                                                }

                                                case 2: //Se esquentar numa cabana
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Você entra correndo na cabana bem a tempo. A cabana está vazia, mas a lareira ainda está acesa.\n\n");
                                                    printf("     >Aquecida, você retoma o caminho e logo chega à margem de um lago congelado.\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >Vai pular para atravessar o lago congelado? (S = 1 ; N = 2)");
                                                        scanf("%i", &escolha_7);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_7)
                                                        {
                                                            case 1: //Pular
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Você toma impulso e salta sobre o gelo rachado, aterrissando do outro lado!\n\n");
                                                                printf("     >Mal você respira aliviada, uma Águia enorme mergulha do céu em sua direção!\n\n");
                                                                sleep(2);

                                                                while (1)
                                                                {
                                                                    printf("     >O que você faz? *Correr(1)* ou *Ficar parada(2)* >>");
                                                                    scanf("%i", &escolha_8);
                                                                    getchar();
                                                                    printf("\n\n     ========================================================================================================================================\n");

                                                                    switch (escolha_8)
                                                                    {
                                                                        case 1: //Correr
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você dispara pela neve, mais rápida que a própria Águia!\n\n");
                                                                            printf("     >Sem alcançá-la, a ave desiste e volta para o topo do pico.\n\n");
                                                                            printf("     >Ofegante, você repara em algo cravado no gelo, brilhando com uma luz dourada...\n\n");
                                                                            printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                            jogadores[k].vitorias += 1;
                                                                            mostrar_placar(jogadores);
                                                                            limpar_tela();
                                                                            sleep(1);
                                                                            break;
                                                                        }

                                                                        case 2: //Não correr
                                                                        {
                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você congela no lugar, e as garras da Águia não perdoam a hesitação...\n\n");
                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                            jogadores[k].derrotas += 1;
                                                                            mostrar_placar(jogadores);
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

                                                            case 2: //Não Pular
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Insegura, você decide contornar o lago pela beirada...\n\n");
                                                                printf("     >O gelo fino não aguenta seu peso e cede com um estalo seco!\n\n");
                                                                printf("     >A água congelada é a última coisa que você sente...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
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

                        case 2: //Indo para o Lago
                        {
                            jogadores[k].pontuacao += 10;

                            limpar_tela();
                            printf("     ========================================================================================================================================\n");
                            printf("     >Você desce a trilha e logo avista um Lago enorme, azul-turquesa, cercado por pinheiros.\n\n");
                            printf("            _.--.\n");
                            printf("        _.-'      `-._      ___.---.___\n");
                            printf("      ,'    ~ ~ ~     `. ,-'            `-.\n");
                            printf("     /   ~   ~    ~     `.                 `.\n");
                            printf("    ;  ~    ~   ~    ~    \\~ ~  L A G O ~ ~  \\\n");
                            printf("     `._  ~   ~    ~   ~ .'~  ~  ~   ~  ~  ~ /\n");
                            printf("        `--...___...--'`--...________...--'\n\n");
                            printf("     >Na margem, você vê um velho bote de madeira amarrado a um tronco.\n\n");
                            sleep(2);

                            while (1)
                            {
                                printf("     >Como vai atravessar? *De Bote(1)* ou *Nadando(2)* >>");
                                scanf("%i", &escolha_3);
                                getchar();
                                printf("\n\n     ========================================================================================================================================\n");

                                switch (escolha_3)
                                {
                                    case 1: //De Bote
                                    {
                                        jogadores[k].pontuacao += 10;

                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Você solta as amarras e começa a remar com força pelo lago...\n\n");
                                        printf("     >No meio da travessia, um Peixe Grande bate com força embaixo do bote, fazendo-o balançar!\n\n");
                                        sleep(2);

                                        while (1)
                                        {
                                            printf("     >Para qual lado você reage? (Bater à esquerda = 1 ; Bater à direita = 2)");
                                            scanf("%i", &escolha_4);
                                            getchar();
                                            printf("\n\n     ========================================================================================================================================\n");

                                            switch (escolha_4)
                                            {
                                                case 1: //Bater à esquerda
                                                {
                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Você reage para o lado errado e o bote vira de cabeça para baixo!\n\n");
                                                    printf("     >Presa pelo pé num cipó de água, você não consegue voltar à superfície a tempo...\n\n");
                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                    jogadores[k].derrotas += 1;
                                                    mostrar_placar(jogadores);
                                                    limpar_tela();
                                                    sleep(1);
                                                    break;
                                                }

                                                case 2: //Bater à direita
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Você se equilibra a tempo, mas o casco do bote rachou! A água começa a entrar rápido...\n\n");
                                                    printf("     >O Bote está Afundando!\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >O que você faz? *Pular na água(1)* ou *Tentar chegar à borda(2)* >>");
                                                        scanf("%i", &escolha_5);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_5)
                                                        {
                                                            case 1: //Pular
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Você pula na água gelada, mas a correnteza puxa você para o fundo antes que consiga nadar...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
                                                                limpar_tela();
                                                                sleep(1);
                                                                break;
                                                            }

                                                            case 2: //Tentar chegar à borda
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Remando com as próprias mãos, você consegue empurrar o bote quebrado até a margem!\n\n");
                                                                printf("     >Encharcada, você repara em algo preso entre as pedras da margem, brilhando...\n\n");
                                                                printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                jogadores[k].vitorias += 1;
                                                                mostrar_placar(jogadores);
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

                                    case 2: //Nadando
                                    {
                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Impaciente, você nem pensa duas vezes: tira as botas e mergulha de cabeça no lago!\n\n");
                                        sleep(2);

                                        printf("\t ========================================================================================================================================\n\n");
                                        printf("\t\t\t\t\t\t\t     ~ ~ ~ ~ ~ ~ ~ ~ ~ ~      \n");
                                        printf("\t\t\t\t\t\t\t    ~  L A G O  ~  ~  ~     \n");
                                        printf("\t\t\t\t\t\t\t     ~ ~ ~ ~ ~ ~ ~ ~ ~ ~      \n");
                                        printf("\n\t ========================================================================================================================================\n");

                                        escolha_dado = rand() % 20 + 1;

                                        if (escolha_dado >= 18)
                                        {
                                            jogadores[k].pontuacao += 10;

                                            printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado);
                                            printf("     >Você corta a água com braçadas fortes e ligeiras, driblando a correnteza!\n\n");
                                            printf("     >No meio do lago, você percebe um MONSTRO nadando na sua direção, rumo às Montanhas!\n\n");
                                            sleep(2);

                                            while (1)
                                            {
                                                printf("     >Vai tentar escapar nadando mais rápido? (S = 1 ; N = 2)");
                                                scanf("%i", &escolha_6);
                                                getchar();
                                                printf("\n\n     ========================================================================================================================================\n");

                                                switch (escolha_6)
                                                {
                                                    case 1: //Escapar
                                                    {
                                                        jogadores[k].pontuacao += 10;

                                                        limpar_tela();
                                                        printf("     ========================================================================================================================================\n");
                                                        printf("     >Você acelera com tudo e alcança a outra margem antes que o MONSTRO chegue perto!\n\n");
                                                        printf("     >Escorregando na areia molhada, sua mão bate em algo duro, meio enterrado...\n\n");
                                                        printf("     >É O CAJADO MAGUS!!!\n\n");
                                                        printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                        printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                        jogadores[k].vitorias += 1;
                                                        mostrar_placar(jogadores);
                                                        limpar_tela();
                                                        sleep(1);
                                                        break;
                                                    }

                                                    case 2: //Morrer
                                                    {
                                                        limpar_tela();
                                                        printf("     ========================================================================================================================================\n");
                                                        printf("     >Você congela de medo. O MONSTRO alcança suas pernas e puxa você para baixo...\n\n");
                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                        jogadores[k].derrotas += 1;
                                                        mostrar_placar(jogadores);
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
                                        }
                                        else
                                        {
                                            printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado);
                                            printf("     >Um rebojo forma-se do nada e puxa você para o fundo do lago...\n\n");
                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                            jogadores[k].derrotas += 1;
                                            mostrar_placar(jogadores);
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

            case 2: //Ficando em Casa
            {
                limpar_tela();
                jogadores[k].pontuacao += 10;

                printf("     ========================================================================================================================================\n");
                printf("     >Você decide esperar um pouco antes de sair. Enquanto arruma suas coisas, repara em algo estranho: \n\n");
                printf("     >Sobre o baú, uma capa cinzenta e surrada, que sussurra baixinho quando o vento entra pela janela...\n\n");
                printf("     >É a lendária Capa Sibilus! Ninguém sabe ao certo o que ela faz, só que dá sorte a quem a carrega.\n\n");
                sleep(2);

                while (1)
                {
                    printf("     >O que você faz com a capa? *Largar e ir sem ela(1)* ou *Pegar e vestir(2)* >>");
                    scanf("%i", &escolha_2);
                    getchar();
                    printf("\n\n     ========================================================================================================================================\n");

                    switch (escolha_2)
                    {
                        case 1: //Largar a Capa
                        {
                            jogadores[k].pontuacao += 10;

                            limpar_tela();
                            printf("     ========================================================================================================================================\n");
                            printf("     >Sem tempo para superstições, você deixa a capa sobre o baú e sai porta afora sem ela.\n\n");
                            printf("     >À frente, dois caminhos se abrem: um sobe às Montanhas, outro desce ao Lago.\n\n");
                            sleep(2);

                            while (1)
                            {
                                printf("     >Qual caminho você escolhe? (Montanhas = 1 ; Lago = 2)");
                                scanf("%i", &escolha_3);
                                getchar();
                                printf("\n\n     ========================================================================================================================================\n");

                                switch (escolha_3)
                                {
                                    case 1: //Montanhas (sem capa)
                                    {
                                        jogadores[k].pontuacao += 10;

                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Você sobe rumo às Montanhas. O vento aqui é ainda mais cortante do que você imaginava.\n\n");
                                        printf("     >O caminho logo se bifurca diante de você.\n\n");
                                        sleep(2);

                                        while (1)
                                        {
                                            printf("     >Para onde você vai? (Esquerda = 1 ; Direita = 2)");
                                            scanf("%i", &escolha_4);
                                            getchar();
                                            printf("\n\n     ========================================================================================================================================\n");

                                            switch (escolha_4)
                                            {
                                                case 1: //Caminho estreito
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Você encontra um caminho estreito colado ao penhasco.\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >Vai atravessar o caminho estreito? (S = 1 ; N = 2)");
                                                        scanf("%i", &escolha_5);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_5)
                                                        {
                                                            case 1: //Atravessar
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >No meio do caminho, um MONSTRO salta da fenda da rocha, presas à mostra!\n\n");
                                                                sleep(2);

                                                                while (1)
                                                                {
                                                                    printf("     >O que você faz? *Desviar e Correr(1)* ou *Contra-Atacar(2)* >>");
                                                                    scanf("%i", &escolha_6);
                                                                    getchar();
                                                                    printf("\n\n     ========================================================================================================================================\n");

                                                                    switch (escolha_6)
                                                                    {
                                                                        case 1: //Desviar
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você escapa por pouco! Sem a capa para se camuflar, o susto foi grande, mas passou.\n\n");
                                                                            printf("     >Logo à frente, um Muambeiro te entrega um Bálsamo de Cura em troca de conversa.\n\n");
                                                                            sleep(2);
                                                                            printf("     >Seguindo em frente, algo brilha entre as pedras...\n\n");
                                                                            printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                            jogadores[k].vitorias += 1;
                                                                            mostrar_placar(jogadores);
                                                                            limpar_tela();
                                                                            sleep(1);
                                                                            break;
                                                                        }

                                                                        case 2: //Contra-Atacar
                                                                        {
                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Sem a capa, você fica exposta por um segundo a mais que o necessário. O veneno faz o resto...\n\n");
                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                            jogadores[k].derrotas += 1;
                                                                            mostrar_placar(jogadores);
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

                                                            case 2: //Não atravessar
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Você recua, mas um Íbex da Montanha já está bem atrás de você, encurralando-a!\n\n");
                                                                printf("     >Ele avança e você não tem para onde correr...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
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

                                                case 2: //Pico Gelado
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Você chega ao Pico Gelado. Uma nevasca se forma rápido no horizonte.\n\n");
                                                    printf("     >Há uma cabana ali perto.\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >O que você faz? *Enfrentar a nevasca(1)* ou *Se abrigar na cabana(2)* >>");
                                                        scanf("%i", &escolha_5);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_5)
                                                        {
                                                            case 1: //Nevasca
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Sem a capa para te aquecer, o frio vence rápido demais. Suas forças se esvaem na neve...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
                                                                limpar_tela();
                                                                sleep(1);
                                                                break;
                                                            }

                                                            case 2: //Cabana
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >A cabana está vazia. Você se aquece e retoma o caminho até um lago congelado.\n\n");
                                                                sleep(2);

                                                                while (1)
                                                                {
                                                                    printf("     >Vai pular para atravessar o lago congelado? (S = 1 ; N = 2)");
                                                                    scanf("%i", &escolha_6);
                                                                    getchar();
                                                                    printf("\n\n     ========================================================================================================================================\n");

                                                                    switch (escolha_6)
                                                                    {
                                                                        case 1: //Pular
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você salta e aterrissa do outro lado! Uma Águia mergulha em sua direção!\n\n");
                                                                            sleep(2);

                                                                            while (1)
                                                                            {
                                                                                printf("     >O que você faz? *Correr(1)* ou *Ficar parada(2)* >>");
                                                                                scanf("%i", &escolha_7);
                                                                                getchar();
                                                                                printf("\n\n     ========================================================================================================================================\n");

                                                                                switch (escolha_7)
                                                                                {
                                                                                    case 1: //Correr
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        limpar_tela();
                                                                                        printf("     ========================================================================================================================================\n");
                                                                                        printf("     >Você corre com tudo e escapa das garras da Águia por pouco!\n\n");
                                                                                        printf("     >Ofegante, algo brilha dourado entre o gelo...\n\n");
                                                                                        printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                                        printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                                        printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                        jogadores[k].vitorias += 1;
                                                                                        mostrar_placar(jogadores);
                                                                                        limpar_tela();
                                                                                        sleep(1);
                                                                                        break;
                                                                                    }

                                                                                    case 2: //Não correr
                                                                                    {
                                                                                        limpar_tela();
                                                                                        printf("     ========================================================================================================================================\n");
                                                                                        printf("     >Você hesita, e a Águia não perdoa a hesitação...\n\n");
                                                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                                        jogadores[k].derrotas += 1;
                                                                                        mostrar_placar(jogadores);
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

                                                                        case 2: //Não pular
                                                                        {
                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você tenta contornar o lago pela beirada. O gelo fino cede sob seu peso...\n\n");
                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                            jogadores[k].derrotas += 1;
                                                                            mostrar_placar(jogadores);
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

                                    case 2: //Lago (sem capa)
                                    {
                                        jogadores[k].pontuacao += 10;

                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Você desce até o Lago e encontra um bote velho amarrado na margem.\n\n");
                                        sleep(2);

                                        while (1)
                                        {
                                            printf("     >Como vai atravessar? *De Bote(1)* ou *Nadando(2)* >>");
                                            scanf("%i", &escolha_4);
                                            getchar();
                                            printf("\n\n     ========================================================================================================================================\n");

                                            switch (escolha_4)
                                            {
                                                case 1: //De Bote
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >No meio do lago, um Peixe Grande bate no casco e o bote balança perigosamente!\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >Para qual lado você reage? (Bater à esquerda = 1 ; Bater à direita = 2)");
                                                        scanf("%i", &escolha_5);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_5)
                                                        {
                                                            case 1: //Esquerda
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >O bote vira de cabeça para baixo e você afunda antes de conseguir reagir...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
                                                                limpar_tela();
                                                                sleep(1);
                                                                break;
                                                            }

                                                            case 2: //Direita
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >O casco racha! O Bote está Afundando rápido...\n\n");
                                                                sleep(2);

                                                                while (1)
                                                                {
                                                                    printf("     >O que você faz? *Pular na água(1)* ou *Tentar chegar à borda(2)* >>");
                                                                    scanf("%i", &escolha_6);
                                                                    getchar();
                                                                    printf("\n\n     ========================================================================================================================================\n");

                                                                    switch (escolha_6)
                                                                    {
                                                                        case 1: //Pular
                                                                        {
                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >A água gelada tira seu fôlego e a correnteza faz o resto...\n\n");
                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                            jogadores[k].derrotas += 1;
                                                                            mostrar_placar(jogadores);
                                                                            limpar_tela();
                                                                            sleep(1);
                                                                            break;
                                                                        }

                                                                        case 2: //Chegar à borda
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você empurra o bote quebrado até a margem, ofegante mas viva.\n\n");
                                                                            printf("     >Entre as pedras da margem, algo brilha...\n\n");
                                                                            printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                            jogadores[k].vitorias += 1;
                                                                            mostrar_placar(jogadores);
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

                                                case 2: //Nadando
                                                {
                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Impaciente como sempre, você mergulha direto no lago gelado.\n\n");
                                                    sleep(2);

                                                    escolha_dado = rand() % 20 + 1;

                                                    if (escolha_dado >= 18)
                                                    {
                                                        jogadores[k].pontuacao += 10;

                                                        printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado);
                                                        printf("     >Você nada com força e vê um MONSTRO na água, rumo às Montanhas!\n\n");
                                                        sleep(2);

                                                        while (1)
                                                        {
                                                            printf("     >Vai tentar escapar nadando mais rápido? (S = 1 ; N = 2)");
                                                            scanf("%i", &escolha_5);
                                                            getchar();
                                                            printf("\n\n     ========================================================================================================================================\n");

                                                            switch (escolha_5)
                                                            {
                                                                case 1: //Escapar
                                                                {
                                                                    jogadores[k].pontuacao += 10;

                                                                    limpar_tela();
                                                                    printf("     ========================================================================================================================================\n");
                                                                    printf("     >Você alcança a margem antes do MONSTRO! Sua mão bate em algo duro na areia...\n\n");
                                                                    printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                    printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                    printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                    jogadores[k].vitorias += 1;
                                                                    mostrar_placar(jogadores);
                                                                    limpar_tela();
                                                                    sleep(1);
                                                                    break;
                                                                }

                                                                case 2: //Morrer
                                                                {
                                                                    limpar_tela();
                                                                    printf("     ========================================================================================================================================\n");
                                                                    printf("     >Você para de nadar por um instante, e o MONSTRO alcança suas pernas...\n\n");
                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                    jogadores[k].derrotas += 1;
                                                                    mostrar_placar(jogadores);
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
                                                    }
                                                    else
                                                    {
                                                        printf("     >Sua rolagem de dados deu: %i\n\n", escolha_dado);
                                                        printf("     >Um rebojo se forma e puxa você para o fundo do lago...\n\n");
                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                        jogadores[k].derrotas += 1;
                                                        mostrar_placar(jogadores);
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

                        case 2: //Pegar a Capa
                        {
                            jogadores[k].pontuacao += 10;

                            limpar_tela();
                            printf("     ========================================================================================================================================\n");
                            printf("     >Você veste a Capa Sibilus. Ela cheira a ervas estranhas e sussurra baixinho no vento...\n\n");
                            printf("     >Sentindo-se protegida, você sai de casa. Dois caminhos se abrem: Montanhas ou Lago.\n\n");
                            sleep(2);

                            while (1)
                            {
                                printf("     >Qual caminho você escolhe? (Montanhas = 1 ; Lago = 2)");
                                scanf("%i", &escolha_3);
                                getchar();
                                printf("\n\n     ========================================================================================================================================\n");

                                switch (escolha_3)
                                {
                                    case 1: //Montanhas (com capa)
                                    {
                                        jogadores[k].pontuacao += 10;

                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Envolta na capa, você sobe rumo às Montanhas quase sem sentir o frio.\n\n");
                                        printf("     >O caminho se bifurca à sua frente.\n\n");
                                        sleep(2);

                                        while (1)
                                        {
                                            printf("     >Para onde você vai? (Esquerda = 1 ; Direita = 2)");
                                            scanf("%i", &escolha_4);
                                            getchar();
                                            printf("\n\n     ========================================================================================================================================\n");

                                            switch (escolha_4)
                                            {
                                                case 1: //Caminho estreito
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >No caminho estreito, um Íbex da Montanha bloqueia completamente a passagem!\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >O que você faz? *Usar a capa para se disfarçar(1)* ou *Tentar passar direto(2)* >>");
                                                        scanf("%i", &escolha_5);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_5)
                                                        {
                                                            case 1: //Usar a capa
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Você se enrola na Capa Sibilus, e ela te transforma na figura encapuzada de um Monge!\n\n");
                                                                printf("     >De cabeça baixa, você caminha lentamente na direção do Íbex, torcendo para o disfarce enganar...\n\n");
                                                                sleep(2);

                                                                escolha_dado_2 = rand() % 13;

                                                                if (escolha_dado_2 == 0)
                                                                {
                                                                    jogadores[k].pontuacao += 10;

                                                                    printf("     >O Íbex fareja o ar, hesita... e por fim se afasta, enganado pelo disfarce!\n\n");
                                                                    printf("     >Aliviada, você segue em frente e vê algo brilhar atrás de uma pedra.\n\n");
                                                                    printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                    printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                    printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                    jogadores[k].vitorias += 1;
                                                                    mostrar_placar(jogadores);
                                                                    limpar_tela();
                                                                    sleep(1);
                                                                }
                                                                else
                                                                {
                                                                    printf("     >O disfarce não convence! O Íbex reconhece seu cheiro por baixo da capa e ataca!\n\n");
                                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                    jogadores[k].derrotas += 1;
                                                                    mostrar_placar(jogadores);
                                                                    limpar_tela();
                                                                    sleep(1);
                                                                }
                                                                break;
                                                            }

                                                            case 2: //Não usar
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Sem paciência para disfarces, você tenta passar correndo. O Íbex não gosta nada disso...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
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

                                                case 2: //Pico Gelado (com capa)
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >No Pico Gelado, uma nevasca se forma. Há também uma cabana com fumaça saindo da chaminé.\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >O que você faz? *Enfrentar a nevasca(1)* ou *Se abrigar na cabana(2)* >>");
                                                        scanf("%i", &escolha_6);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_6)
                                                        {
                                                            case 1: //Nevasca, protegida pela capa
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Você usa a Capa Sibilus para se proteger! O vento gelado escorrega por ela sem te tocar.\n\n");
                                                                printf("     >Assim que a nevasca passa, você chega a um lago congelado.\n\n");
                                                                sleep(2);

                                                                while (1)
                                                                {
                                                                    printf("     >Vai pular para atravessar o lago congelado? (S = 1 ; N = 2)");
                                                                    scanf("%i", &escolha_7);
                                                                    getchar();
                                                                    printf("\n\n     ========================================================================================================================================\n");

                                                                    switch (escolha_7)
                                                                    {
                                                                        case 1: //Pular
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você salta o gelo rachado e aterrissa do outro lado! Uma Águia mergulha sobre você!\n\n");
                                                                            sleep(2);

                                                                            while (1)
                                                                            {
                                                                                printf("     >O que você faz? *Correr(1)* ou *Ficar parada(2)* >>");
                                                                                scanf("%i", &escolha_8);
                                                                                getchar();
                                                                                printf("\n\n     ========================================================================================================================================\n");

                                                                                switch (escolha_8)
                                                                                {
                                                                                    case 1: //Correr
                                                                                    {
                                                                                        jogadores[k].pontuacao += 10;

                                                                                        limpar_tela();
                                                                                        printf("     ========================================================================================================================================\n");
                                                                                        printf("     >Você corre e a capa esvoaça atrás de você, confundindo a Águia, que desiste da caçada!\n\n");
                                                                                        printf("     >Ofegante, você vê algo dourado brilhando no gelo...\n\n");
                                                                                        printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                                        printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                                        printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                                        jogadores[k].vitorias += 1;
                                                                                        mostrar_placar(jogadores);
                                                                                        limpar_tela();
                                                                                        sleep(1);
                                                                                        break;
                                                                                    }

                                                                                    case 2: //Não correr
                                                                                    {
                                                                                        limpar_tela();
                                                                                        printf("     ========================================================================================================================================\n");
                                                                                        printf("     >Você hesita, e mesmo com a capa, as garras da Águia acertam em cheio...\n\n");
                                                                                        printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                                        jogadores[k].derrotas += 1;
                                                                                        mostrar_placar(jogadores);
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

                                                                        case 2: //Não pular
                                                                        {
                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você tenta contornar o lago pela beirada. O gelo fino cede sob seu peso, capa e tudo...\n\n");
                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                            jogadores[k].derrotas += 1;
                                                                            mostrar_placar(jogadores);
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

                                                            case 2: //Cabana com o velho
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >Você entra na cabana... mas não está vazia. Um velho ranzinza está sentado perto da lareira!\n\n");
                                                                printf("     >Velho~'Intrusos não são bem-vindos por aqui, mocinha!'\n\n");
                                                                printf("     >Antes que você consiga se explicar, ele saca uma espingarda escondida atrás da cadeira...\n\n");
                                                                printf("     >Um tiro pelas costas encerra sua jornada ali mesmo.\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
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

                                    case 2: //Lago (com capa)
                                    {
                                        jogadores[k].pontuacao += 10;

                                        limpar_tela();
                                        printf("     ========================================================================================================================================\n");
                                        printf("     >Você desce até o Lago, a capa balançando ao vento. Há um velho bote amarrado na margem.\n\n");
                                        sleep(2);

                                        while (1)
                                        {
                                            printf("     >Como vai atravessar? *De Bote(1)* ou *Nadando(2)* >>");
                                            scanf("%i", &escolha_4);
                                            getchar();
                                            printf("\n\n     ========================================================================================================================================\n");

                                            switch (escolha_4)
                                            {
                                                case 1: //De Bote
                                                {
                                                    jogadores[k].pontuacao += 10;

                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >No meio do lago, um Peixe Grande bate no casco e o bote balança!\n\n");
                                                    sleep(2);

                                                    while (1)
                                                    {
                                                        printf("     >Para qual lado você reage? (Bater à esquerda = 1 ; Bater à direita = 2)");
                                                        scanf("%i", &escolha_5);
                                                        getchar();
                                                        printf("\n\n     ========================================================================================================================================\n");

                                                        switch (escolha_5)
                                                        {
                                                            case 1: //Esquerda
                                                            {
                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >O bote vira e a capa encharcada te puxa direto para o fundo...\n\n");
                                                                printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                jogadores[k].derrotas += 1;
                                                                mostrar_placar(jogadores);
                                                                limpar_tela();
                                                                sleep(1);
                                                                break;
                                                            }

                                                            case 2: //Direita
                                                            {
                                                                jogadores[k].pontuacao += 10;

                                                                limpar_tela();
                                                                printf("     ========================================================================================================================================\n");
                                                                printf("     >O casco racha! O Bote está Afundando rápido...\n\n");
                                                                sleep(2);

                                                                while (1)
                                                                {
                                                                    printf("     >O que você faz? *Pular na água(1)* ou *Tentar chegar à borda(2)* >>");
                                                                    scanf("%i", &escolha_6);
                                                                    getchar();
                                                                    printf("\n\n     ========================================================================================================================================\n");

                                                                    switch (escolha_6)
                                                                    {
                                                                        case 1: //Pular
                                                                        {
                                                                            jogadores[k].pontuacao += 10;

                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >Você pula na água e, para sua surpresa, a Capa Sibilus se enche de ar e flutua, te levando até a margem!\n\n");
                                                                            printf("     >Ainda ofegante, você vê algo brilhar entre as pedras...\n\n");
                                                                            printf("     >É O CAJADO MAGUS!!!\n\n");
                                                                            printf("     >PARABÉNS, JOGADOR!!! VOCÊ GANHOU A CORRIDA PELO CAJADO CONTRA O MAGO ZAUBER!!!\n\n");
                                                                            printf("                                                        ========== 𝐕 𝐈 𝐓 𝐎 𝐑 𝐈 𝐀! ==========                                         \n\n\n");

                                                                            jogadores[k].vitorias += 1;
                                                                            mostrar_placar(jogadores);
                                                                            limpar_tela();
                                                                            sleep(1);
                                                                            break;
                                                                        }

                                                                        case 2: //Chegar à borda
                                                                        {
                                                                            limpar_tela();
                                                                            printf("     ========================================================================================================================================\n");
                                                                            printf("     >A capa encharcada pesa como uma pedra e te arrasta para baixo antes de alcançar a margem...\n\n");
                                                                            printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                                            jogadores[k].derrotas += 1;
                                                                            mostrar_placar(jogadores);
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

                                                case 2: //Nadando com a capa
                                                {
                                                    limpar_tela();
                                                    printf("     ========================================================================================================================================\n");
                                                    printf("     >Sem pensar, você mergulha no lago ainda vestindo a Capa Sibilus...\n\n");
                                                    printf("     >A capa enrosca no rebojo debaixo d'água e te prende como uma âncora!\n\n");
                                                    printf("     >Quanto mais você luta para se soltar, mais fundo ela te puxa...\n\n");
                                                    printf("                                                        ========== 𝕱𝖎𝖒 𝕯𝖊 𝕵𝖔𝖌𝖔 ==========                                            \n\n\n");

                                                    jogadores[k].derrotas += 1;
                                                    mostrar_placar(jogadores);
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

            default:
            {
                printf("     >Opção Inválida! Tente Novamente!");
                continue;
            }
        }
        break;
    }
}
