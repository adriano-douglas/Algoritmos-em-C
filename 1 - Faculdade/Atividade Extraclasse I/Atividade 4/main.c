#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o que receba um vetor N de 20 posi��es, troque o 1� elemento com o �ltimo,
o 2� com o pen�ltimo, etc at� o 10� com o 11�, invertendo a ordem dos elementos do vetor.
No m�todo main(), crie o vetor de 20 posi��es, preencha com n�meros aleat�rios, imprima o
vetor original, envie para a fun��o e ao final imprima o vetor alterado pela fun��o. */

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
