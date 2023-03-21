#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Escreva uma fun��o que receba um vetor de 30 inteiros e retorne a soma dos
n�meros pares deste vetor. No m�todo main() crie o vetor, preencha com 30 n�meros
aleat�rios, envie para a fun��o e imprima o resultado (soma dos n�meros pares). */

int soma_par(int vetor[], int tamanho, int soma)
{
    if (vetor[tamanho] % 2 == 0){
        soma += vetor[tamanho];
    }
    if (tamanho == 0){
        return soma;
    }
    soma_par(vetor, tamanho - 1, soma);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[30], i;
    srand(time(NULL));
    for (i = 0; i < 30; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%d ", vetor[i]);
    }
    printf("\n\nSoma dos elementos pares do vetor: %d ", soma_par(vetor, 29, 0));
    getchar();
    return 0;
}
