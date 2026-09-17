#ifndef MAGUS_H
#define MAGUS_H

#define JOGADORES_MAX 5

struct player_t
{
    char nome[21];
    int pontuacao;    // Vitórias 10 pontos a cada escolha bem-sucedida.
    int vitorias;     // +1 vitória
    int derrotas;     // +1 derrota
};

// ui.c
void limpar_tela(void);
void mostrar_logo_magus(void);
void mostrar_placar(struct player_t jogadores[JOGADORES_MAX]);

// nivel_basico.c / nivel_medio.c / nivel_avancado.c (Zauber)
void jogar_nivel_basico(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_medio(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_avancado(struct player_t jogadores[JOGADORES_MAX], int k);

// nivel_basico_quelle.c / nivel_medio_quelle.c / nivel_avancado_quelle.c (Quelle)
void jogar_nivel_basico_quelle(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_medio_quelle(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_avancado_quelle(struct player_t jogadores[JOGADORES_MAX], int k);

#endif
