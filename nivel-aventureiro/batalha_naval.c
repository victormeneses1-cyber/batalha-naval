#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {

    int tabuleiro[TAM][TAM];

    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0;

    int linhaH = 2, colunaH = 4;
    int linhaV = 2, colunaV = 4; // tentativa de sobreposição

    int podePosicionar = 1;

    // Verifica horizontal
    if(colunaH + NAVIO <= TAM) {
        for(int i = 0; i < NAVIO; i++)
            if(tabuleiro[linhaH][colunaH + i] != 0)
                podePosicionar = 0;

        if(podePosicionar)
            for(int i = 0; i < NAVIO; i++)
                tabuleiro[linhaH][colunaH + i] = 3;
    }

    podePosicionar = 1;

    // Verifica vertical
    if(linhaV + NAVIO <= TAM) {
        for(int i = 0; i < NAVIO; i++)
            if(tabuleiro[linhaV + i][colunaV] != 0)
                podePosicionar = 0;

        if(podePosicionar)
            for(int i = 0; i < NAVIO; i++)
                tabuleiro[linhaV + i][colunaV] = 3;
    }

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}
