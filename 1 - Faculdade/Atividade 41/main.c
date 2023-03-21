#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Implemente um algoritmo que preencha as posições de um vetor de tamanho 100,
com os valores de 1 a 100. Ao final, imprima o conteúdo desse vetor. */

int main()
{
    setlocale(LC_ALL, "portuguse");
    int vetor[100], i;
    for (i =0; i < 100; i++){
        vetor[i] = i + 1;
    }
    for (i = 0; i < 100; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}
