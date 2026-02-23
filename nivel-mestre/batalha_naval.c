#include <stdio.h>

#define TAM 10
#define NAVIO 3

void inicializar(int tab[TAM][TAM]) {
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            tab[i][j] = 0;
}

int podePosicionar(int tab[TAM][TAM], int linha, int coluna, int horizontal) {

    if(horizontal) {
        if(coluna + NAVIO > TAM) return 0;
        for(int i = 0; i < NAVIO; i++)
            if(tab[linha][coluna + i] != 0)
                return 0;
    } else {
        if(linha + NAVIO > TAM) return 0;
        for(int i = 0; i < NAVIO; i++)
            if(tab[linha + i][coluna] != 0)
                return 0;
    }

    return 1;
}

void posicionar(int tab[TAM][TAM], int linha, int coluna, int horizontal) {

    if(horizontal)
        for(int i = 0; i < NAVIO; i++)
            tab[linha][coluna + i] = 3;
    else
        for(int i = 0; i < NAVIO; i++)
            tab[linha + i][coluna] = 3;
}

void exibir(int tab[TAM][TAM]) {
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
            printf("%d ", tab[i][j]);
        printf("\n");
    }
}

int main() {

    int tabuleiro[TAM][TAM];
    inicializar(tabuleiro);

    if(podePosicionar(tabuleiro, 2, 4, 1))
        posicionar(tabuleiro, 2, 4, 1);

    if(podePosicionar(tabuleiro, 5, 1, 0))
        posicionar(tabuleiro, 5, 1, 0);

    exibir(tabuleiro);

    return 0;
}
