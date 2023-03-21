#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Fa�a uma fun��o que receba um vetor X de 30 elementos inteiros, gerados aleatoriamente
com n�meros de 1 a 100, por par�metro, e retorna, tamb�m por par�metro, dois vetores A e B.
O vetor A deve conter os elementos pares de X e o vetor B os elementos �mpares. No m�todo main()
fa�a o preenchimento do vetor, envie para a fun��o juntamente com os dois vetores que receber�o
os n�meros pares e �mpares e imprima os tr�s vetores. */

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
