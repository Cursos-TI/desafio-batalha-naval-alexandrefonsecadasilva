#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int i, j;

    // 1) Inicializar tabuleiro com 0 (água)
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2) Definir coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 1; // navio horizontal
    int linhaV = 5, colunaV = 7; // navio vertical
    int linhaD1 = 0, colunaD1 = 0; // navio diagonal ↘
    int linhaD2 = 0, colunaD2 = 9; // navio diagonal ↙

    // 3) Posicionar navio horizontal
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // 4) Posicionar navio vertical
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // 5) Posicionar navio diagonal ↘ (linha++, coluna++)
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // 6) Posicionar navio diagonal ↙ (linha++, coluna--)
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    // 7) Exibir tabuleiro completo
    printf("Tabuleiro 10x10 (0 = agua, 3 = navio)\\n\\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\\n");
    }

    return 0;
}
