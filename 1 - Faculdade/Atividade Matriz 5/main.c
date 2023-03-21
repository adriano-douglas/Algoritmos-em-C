#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo que crie uma matriz M(30,11). Preencha (de forma aleat�ria utilizando o rand())
as 30 linhas da matriz at� a 10 coluna de cada linha. Depois, fa�a a soma de cada uma das linhas e guarde
o resultado da soma na 11� coluna de cada linha. Imprima a matriz completa, incluindo a coluna com a soma. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int matriz[30][11], i, j, soma;
    for (i = 0; i < 30; i++){
        soma = 0;
        for (j = 0; j < 10; j++){
            matriz[i][j] = rand() % 500 + 1;
            soma += matriz[i][j];
        }
        matriz[i][10] = soma;
    }
    for (i = 0; i < 30; i++){
        for (j = 0; j < 11; j++){
            printf("[ %-3d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}

