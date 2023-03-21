#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva uma função que recebe como parâmetros um vetor de inteiros v,
o número de elementos do vetor e ponteiros para variáveis nas quais devem s
er armazenados os valores máximo e mínimo do vetor.
Sua assinatura deve ser:
void maximoMinimo(int *v, int N, int *maximo, int *minimo); */

void maximo_minimo(int vetor[], int tamanho, int *maximo, int *minimo){
    int i;
    *maximo = 0; *minimo = 101;
    for (i = 0; i < tamanho; i++){
        if(vetor[i] > *maximo){
            *maximo = vetor[i];
        }
        if (vetor[i] < *minimo){
            *minimo = vetor[i];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[20];
    int *maximo, *minimo;
    maximo = (int *)malloc(sizeof(int));
    minimo = (int *)malloc(sizeof(int));
    if (!maximo){
        printf("Erro!\n");
        return 1;
    }
    if (!minimo){
        printf("Erro!\n");
        return 2;
    }
    srand(time(NULL));
    for (i = 0; i < 20; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%d ", vetor[i]);
    }
    maximo_minimo(vetor, 20, maximo, minimo);
    printf("\n\nMaximo: %d", *maximo);
    printf("\nMinimo: %d ", *minimo);
    getchar();
    return 0;
}
