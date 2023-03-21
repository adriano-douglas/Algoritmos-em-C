#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor com aloca��o din�mica com 10 posi��es. Preencha as
10 posi��es com n�meros aleat�rios e em seguida imprima o
conte�do do vetor. Fa�a a aloca��o de mais 10 posi��es (realloc)
neste vetor, preencha as 10 novas posi��es e imprima o vetor
completo. Em seguida, aloque mais 5 posi��es, preencha essas novas
posi��es com n�meros aleat�rios e por fim imprima o vetor
completo com as 25 posi��es. */

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
