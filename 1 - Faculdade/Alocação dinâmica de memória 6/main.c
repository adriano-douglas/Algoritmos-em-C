#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor com alocação dinâmica com 10 posições. Preencha as
10 posições com números aleatórios e em seguida imprima o
conteúdo do vetor. Faça a alocação de mais 10 posições (realloc)
neste vetor, preencha as 10 novas posições e imprima o vetor
completo. Em seguida, aloque mais 5 posições, preencha essas novas
posições com números aleatórios e por fim imprima o vetor
completo com as 25 posições. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int *vetor, i;
    vetor = (int *) malloc(10 * sizeof(int));
    if (vetor == NULL){
        printf("Erro 1! ");
        return 0;
    }
    for (i = 0; i < 10; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%-3d ", vetor[i]);
    }
    printf("\n");
    vetor = (int * ) realloc(vetor, 20 * sizeof(int));
    if (vetor == NULL){
        printf("Erro 2! ");
        return 0;
    }
    for (i = 10; i < 20; i++){
        vetor[i] = rand() % 100 + 1;
    }
    for (i = 0; i < 20; i++){
        printf("%-3d ", vetor[i]);
    }
    printf("\n");
    vetor = (int * ) realloc(vetor, 25 * sizeof(int));
    if (vetor == NULL){
        printf("Erro 3! ");
        return 0;
    }
    for (i = 20; i < 25; i++){
        vetor[i] = rand() % 100 + 1;
    }
    for (i = 0; i < 25; i++){
        printf("%-3d ", vetor[i]);
    }
    free(vetor);
    vetor = NULL;
    getchar();
    return 0;
}
