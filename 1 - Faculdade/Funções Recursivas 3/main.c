#include <stdio.h>
#include <stdlib.h>

/* Faça uma função recursiva que permita somar os elementos de um vetor de
inteiros com 10 posições.. No método main() preencha um vetor com números
aleatórios de 1 a 10 e envie para a função criada realizar a soma dos elementos. */

int SomarVetor(int vetor[], int tamanho)
{
    if (tamanho == 0){
        return vetor[0];
    }else{
        return vetor[tamanho] + SomarVetor(vetor, tamanho - 1);
    }
}

int main()
{
    int vetor[10], i;
    srand(time(NULL));
    for (i = 0; i < 10; i++){
        vetor[i] = rand() % 10 + 1;
        printf("%d ", vetor[i]);
    }
    printf("\n\nSoma dos elementos do vetor: %d ", SomarVetor(vetor, 9));
    getchar();
    return 0;
}
