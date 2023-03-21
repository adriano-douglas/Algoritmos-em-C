#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba os parâmetros m e n, aloque dinamicamente uma matriz
de ordem m x n e retorne um ponteiro para esta matriz alocada. Crie ainda uma função
para liberar a área de memória alocada pela matriz. No método main(), utilize as funções
criadas acima. */

void liberar_memoria(int **matriz){
    free(matriz);
    matriz = NULL;
}

int alocar_matriz(int linhas, int colunas){
    int **matriz, i;
    matriz = (int *) malloc(linhas * sizeof(int));
    if (matriz == NULL){
        printf("Erro 1! ");
        return NULL;
    }
    for (i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        if (matriz == NULL){
            printf("Erro 2! ");
            return NULL;
        }
    }
    return matriz;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int linhas, colunas, i, j, **matriz;
    srand(time(NULL));
    printf("Informe o total de linhas da matriz:  ");
    scanf("%d", &linhas);
    printf("Informe o total de colunas da matriz: ");
    scanf("%d", &colunas);
    matriz = alocar_matriz(linhas, colunas);
    if (matriz == NULL){
        return 0;
    }
    printf("\n");
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 100 + 1;
            printf("%-3d ", matriz[i][j]);
        }
        printf("\n");
    }
    liberar_memoria(matriz);
    fflush(stdin);
    getchar();
    return 0;
}
