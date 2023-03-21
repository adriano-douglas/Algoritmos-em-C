#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Faça uma função que receba um vetor X de 30 elementos inteiros, gerados aleatoriamente
com números de 1 a 100, por parâmetro, e retorna, também por parâmetro, dois vetores A e B.
O vetor A deve conter os elementos pares de X e o vetor B os elementos ímpares. No método main()
faça o preenchimento do vetor, envie para a função juntamente com os dois vetores que receberão
os números pares e ímpares e imprima os três vetores. */

void Gerar_Vetor(int vetor[], int vetA[], int VetB[])
{
    int i;
    for (i = 0; i < 30; i++){
        if (vetor[i] % 2 == 0){
            vetA[i] = vetor[i];
        }else{
            VetB[i] = vetor[i];
        }
    }
}

void Imprimir_Vetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++){
        if (vetor[i] != -1){
            printf("%d ", vetor[i]);
        }
    }
}

void Iniciar_Vetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++){
        vetor[i] = -1;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, X[30], A[30], B[30];
    srand(time(NULL));
    printf("Vetor X: ");
    for (i = 0; i < 30; i++){
        X[i] = rand() % 100 + 1;
        printf("%d ", X[i]);
    }
    Iniciar_Vetor(A, 30);
    Iniciar_Vetor(B, 30);

    Gerar_Vetor(X, A, B);

    printf("\n\nVetor A: ");
    Imprimir_Vetor(A, 30);

    printf("\n\nVetor B: ");
    Imprimir_Vetor(B, 30);
    getchar();
    return 0;
}
