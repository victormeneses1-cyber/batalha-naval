#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {

    int tabuleiro[TAM][TAM];

    // Inicializa com água (0)
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0;

    // Coordenadas fixas
    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 1;

    // Navio horizontal
    if(colunaH + NAVIO <= TAM) {
        for(int i = 0; i < NAVIO; i++)
            tabuleiro[linhaH][colunaH + i] = 3;
    }

    // Navio vertical
    if(linhaV + NAVIO <= TAM) {
        for(int i = 0; i < NAVIO; i++)
            tabuleiro[linhaV + i][colunaV] = 3;
    }

    // Exibe tabuleiro
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}
