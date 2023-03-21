#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba um vetor N de 20 posições, troque o 1º elemento com o último,
o 2º com o penúltimo, etc até o 10º com o 11º, invertendo a ordem dos elementos do vetor.
No método main(), crie o vetor de 20 posições, preencha com números aleatórios, imprima o
vetor original, envie para a função e ao final imprima o vetor alterado pela função. */

void inverter_vetor(int vetor[])
{
    int i = 0, f = 20, aux;
    for (i = 0; i < 10; i++){
        f--;
        aux = vetor[f];
        vetor[f] = vetor[i];
        vetor[i] = aux;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[20], i;
    srand(time(NULL));
    printf("Vetor Original: ");
    for (i = 0; i < 20; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%d ", vetor[i]);
    }
    inverter_vetor(vetor);
    printf("\n\nVetor Invetido: ");
    for (i = 0; i < 20; i++){
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}
