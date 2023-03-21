#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Escreva um algoritmo que gere números aleatórios de 0 a 100
para uma matriz M(10,10) e imprima a matriz gerada. Após a impressão
troque o conteúdo da linha 2 com a linha 8 e imprima a matriz modificada. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[10][10], i, j, vetor[10];
    srand(time(NULL));
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            matriz[i][j] = rand() % 101;
            printf("[%3d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("%26sMATRIZ MODIFICADA\n\n", " ");
    for (j = 0; j < 10; j++){
        vetor[j] = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = vetor[j];
    }
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("[%3d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
