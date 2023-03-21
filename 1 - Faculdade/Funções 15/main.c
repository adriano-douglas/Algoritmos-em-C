#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor
elemento de uma linha onde se encontra o maior elemento da matriz. Faça uma função
que recebe, por parâmetro, uma matriz A(5,5) e retorna o seu elemento minimax, juntamente
com a sua posição. No método main(), preencha uma matriz (5,5) com números aleatórios de
1 a 100, envie a matriz para a função criada e exiba o valor e a posição do elemento minimax. */

void minimax(int matriz[5][5], int *linha, int *coluna, int *minimax)
{
    int i, j, maior = 0, menor = 101;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (maior < matriz[i][j]){
                maior = matriz[i][j];
                *linha = i;
            }
        }
    }
    for (j = 0; j < 5; j++){
        if (menor > matriz[*linha][j]){
            menor = matriz[*linha][j];
            *coluna = j;
        }
    }
    *minimax = menor;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[5][5], i, j, linha, coluna, Minimax;
    srand(time(NULL));
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100 + 1;
            printf("[%3d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    minimax(matriz, &linha, &coluna, &Minimax);
    printf("\nElemento Minimax: %d", Minimax);
    printf("\nPosição: [ %d - %d ] ", linha + 1, coluna + 1);
    getchar();
    return 0;
}
