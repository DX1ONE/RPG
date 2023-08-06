#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int main()
{
    struct player_t{
        char nome[44];
    };
    
    struct player_t jogadores[5];
   int a;
    
    for (a = 0; a < 5; a++)
    {
        strcpy(jogadores[a].nome, "");
    }
    
    char nome[44] = {"Diogo"};
    int jogar = 1;
    int continuar = -1;
    int k = 0;

    
   while(jogar == 1 && k < 5) 
    {
        int jogar = 2;
        
        printf("OLA BITCH QUAL O SEU NOME ?\n");
        scanf("%[^\n]s", jogadores[k].nome);
        getchar();
        
        
        while(jogar == 2)
        {
            system("clear");
            printf("+- 1- Continuar jogando como: %s?\n", jogadores[k].nome);
            printf("+- 2- Trocar de Player\n");
            printf("+- 3- Sair do jogo \n");
            printf("+- Operacao: ");
            scanf("%i", &continuar);
            getchar();
                                                  
            switch(continuar)
            {
                case 1:
                {
                    jogar = 2; 
                    break;
                }
                                                            
                case 2:
                {
                    system("clear");
                    jogar = 1;
                    k += 1;
                    break;
                }
    
                case 3:
                {
                    system("clear");
                    printf("Jogo Finalizado! Ate Logo!\n");
                    sleep(1);
                    exit(0);
                    break;
                }
    
                default:
                {
                    printf("     >Opção Inválida! Tente Novamente!");
                    break;
                }        
            }  
        }    
    } 

    return 0;
}








