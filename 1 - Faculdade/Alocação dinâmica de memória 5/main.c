#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um vetor com aloca��o din�mica com 3 posi��es. Preencha as 3
posi��es e em seguida imprima o conte�do do vetor. Fa�a a aloca��o
de mais 3 posi��es (realloc) neste vetor, preencha as 3 novas
posi��es e imprima o vetor completo. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int *vetor, i;
    vetor = (int *) malloc(3 * sizeof(int));
    if (vetor == NULL){
        printf("Erro! ");
        return 0;
    }
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    for (i = 0; i < 3; i++){
        printf("%d ", vetor[i]);
    }
    vetor = (int *) realloc(vetor, 6 * sizeof(int));
    if (vetor == NULL){
        printf("Erro para realocar! ");
        return 0;
    }
    vetor[3] = 4;
    vetor[4] = 5;
    vetor[5] = 6;
    printf("\n\n");
    for (i = 0; i < 6; i++){
        printf("%d ", vetor[i]);
    }
    free(vetor);
    vetor = NULL;
    getchar();
    return 0;
}
