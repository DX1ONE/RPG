#include <stdio.h>

int main()
{

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
    
    
    printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
    printf("                                                                  𝐒 𝐂 𝐎 𝐑 𝐄 𝐁 𝐎 𝐀 𝐑 𝐃                                                             \n\n\n");
    printf("     █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ █████ ████\n\n\n");
    printf("     %-50s %-50s %60s %60s","-= 𝐉 𝐎 𝐆 𝐀 𝐃 𝐎 𝐑 =-","-= 𝐏 𝐎 𝐍 𝐓 𝐔 𝐀 Ç Ã 𝐎 =-","-= 𝐕 𝐈 𝐓 Ó 𝐑 𝐈 𝐀 𝐒 =-", "-= 𝐃 𝐄 𝐑 𝐑 𝐎 𝐓 𝐀 𝐒 =-");
    
    for (int i = 0; i < MAX; i++)
    {
                        printf("%-10s\t%9.2d\t%8.2d\n", jogadores[i].player_name, jogadores[i].vitorias, jogadores[i].derrotas);
    }
    
   






return 0;
}