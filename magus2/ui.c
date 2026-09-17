#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "magus.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>

EM_JS(void, js_limpar_tela, (void), {
    if (typeof Module.magusClear === "function") {
        Module.magusClear();
    }
});
#endif

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

// Ordena os jogadores por vitórias (bubble sort) e imprime o placar dos
// até 5 jogadores locais. Repetido dezenas de vezes ao final de cada
// desfecho da história no arquivo original; extraído aqui sem alterar o
// comportamento.
void mostrar_placar(struct player_t jogadores[JOGADORES_MAX])
{
    for (int i = 0; i < JOGADORES_MAX - 1; i++)
    {
        for (int j = i + 1; j < JOGADORES_MAX; j++)
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

    for (int i = 0; i < JOGADORES_MAX; i++)
    {
        printf("\n\t%-30s\t%-40.2d\t%-40.2d\t%-40.2d\n", jogadores[i].nome, jogadores[i].pontuacao, jogadores[i].vitorias, jogadores[i].derrotas);
    }
}
