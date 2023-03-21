#include <stdio.h>  //
#include <stdlib.h> // srand, rand, rand_max para gerar numeros pseudo aleatorios.
#include <time.h>  // time usado para ALIMENTAR a SEED.
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int vetor[10], i, j, aux;

    srand(time(NULL));

    for (i = 0; i < 10; i++){
        vetor[i] = i+1;
    }

    for (i = 0; i < 5; i++){
        j = 9 - (rand() % (10 - i)); // gera um numero.
        aux = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = aux;

        printf("[%d] ", vetor[i]);
    }
}
