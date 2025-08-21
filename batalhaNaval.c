#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int i, j;

    // 1) Inicializar o tabuleiro com 0 (água)
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2) Definir os navios como vetores (cada parte do navio = 3)
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int navio_vertical[TAMANHO_NAVIO]   = {3, 3, 3};

    // 3) Definir coordenadas iniciais
    int linhaH = 2, colunaH = 1; // navio horizontal começa em (2,1)
    int linhaV = 5, colunaV = 7; // navio vertical começa em (5,7)

    // 4) Posicionar navio horizontal (tamanho fixo = 3)
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navio_horizontal[i];
    }

    // 5) Posicionar navio vertical (tamanho fixo = 3)
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navio_vertical[i];
    }

    // 6) Mostrar tabuleiro
    printf("Tabuleiro Batalha Naval (0 = agua, 3 = navio)\\n\\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\\n");
    }

    return 0;
}
