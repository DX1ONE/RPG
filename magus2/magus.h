#ifndef MAGUS_H
#define MAGUS_H

#include <stddef.h>  // size_t, usado por ler_nome

#ifdef __EMSCRIPTEN__
#include <unistd.h>
// O jogo original tem centenas de pausas dramáticas (sleep), várias de
// vários segundos — até 10s nas telas de vitória/derrota. Isso fazia
// sentido num terminal onde o texto aparecia todo de uma vez: a pausa
// era o tempo de leitura. Na versão web o texto aparece aos poucos
// (efeito de digitação), e essa digitação já é o tempo de leitura.
//
// magus_web_pause (ui.c) faz as duas coisas na ordem certa: primeiro
// espera o texto terminar de aparecer, depois faz uma pausa curta (1/6
// da original) antes de seguir. Sem essa espera, o jogo seguia em frente
// e limpava a tela por cima de texto que o jogador ainda não tinha lido.
// O build nativo continua com o sleep() normal.
void magus_web_pause(unsigned segundos);
#define sleep(s) magus_web_pause((unsigned)(s))
#endif

#define JOGADORES_MAX 5

// Níveis de dificuldade, na ordem do menu.
#define NIVEL_BASICO   1
#define NIVEL_MEDIO    2
#define NIVEL_AVANCADO 3

struct player_t
{
    char nome[21];
    int pontuacao;    // Vitórias 10 pontos a cada escolha bem-sucedida.
    int vitorias;     // +1 vitória
    int derrotas;     // +1 derrota
};

// Valor devolvido por ler_opcao() quando o jogador digitou algo que não
// é um número. Nenhum menu usa opções negativas, então cai sempre no
// "Opção Inválida!" de quem perguntou.
#define OPCAO_INVALIDA (-1)

// ui.c — leitura da entrada (ver o comentário lá sobre o fim de entrada)
int  ler_opcao(void);
void ler_nome(char *destino, size_t tamanho);
int  ler_resposta_charada(void);

void limpar_tela(void);
void mostrar_logo_magus(void);
void mostrar_introducao(void);
void mostrar_placar(struct player_t jogadores[JOGADORES_MAX]);
int  reta_final(struct player_t jogadores[JOGADORES_MAX], int k, int escolhas, int nivel);

// nivel_basico.c / nivel_medio.c / nivel_avancado.c (Zauber)
void jogar_nivel_basico(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_medio(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_avancado(struct player_t jogadores[JOGADORES_MAX], int k);

// nivel_basico_quelle.c / nivel_medio_quelle.c / nivel_avancado_quelle.c (Quelle)
void jogar_nivel_basico_quelle(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_medio_quelle(struct player_t jogadores[JOGADORES_MAX], int k);
void jogar_nivel_avancado_quelle(struct player_t jogadores[JOGADORES_MAX], int k);

#endif
