#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função recursiva que retorne o menor elemento em um vetor. Crie um vetor
com 20 posições com números aleatórios e envie para a função retornar o menor elemento. */

int Menor_Elemento_Vetor(int vetor[], int tamanho, int menor)
{
    if (vetor[tamanho] <= menor){
        menor = vetor[tamanho];
    }
    if (tamanho == 0){
        return menor;
    }
    Menor_Elemento_Vetor(vetor, tamanho - 1, menor);
}

int main()
{
    int vetor[20], i;
    srand(time(NULL));
    for (i = 0; i < 20; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%d ", vetor[i]);
    }
    printf("\n\nMenor elemento do vetor: %d ", Menor_Elemento_Vetor(vetor, 19, 101));
    getchar();
    return 0;
}
