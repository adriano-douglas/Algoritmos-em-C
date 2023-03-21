#include <stdio.h>
#include <stdlib.h>

/* Crie um programa em C que crie um vetor de números inteiros com 10
elementos gerados aleatoriamente no método main(). Escreva uma função
recursiva que inverta a ordem dos elementos presentes no vetor. */

void Inverter_Vetor(int vetor[], int inicio, int fim)
{
        int aux;
        if (fim >= inicio){
            aux = vetor[fim];
            vetor[fim] = vetor[inicio];
            vetor[inicio] = aux;
            Inverter_Vetor(vetor, inicio + 1, fim - 1);
        }
}

int main()
{
    int vetor[10], i;
    srand(time(NULL));
    for (i = 0; i < 10; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    Inverter_Vetor(vetor, 0, 9);
    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}
