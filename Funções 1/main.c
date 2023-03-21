#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int maior_numeroV(int vetor[], int tamanho){
    int i, maior = vetor[0];
    for (i = 0; i < tamanho; i++){
        if (maior < vetor[i]){
            maior = vetor[i];
        }
    }
    return maior;
}

int menor_numeroV(int vetor[], int tamanho){
    int i, menor = vetor[0];
    for (i = 0; i < tamanho; i++){
        if (menor > vetor[i]){
            menor = vetor[i];
        }
    }
    return menor;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[10];
    for (i = 0; i < 10; i++){
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }
    printf("\nO maior número informado foi: %d ", maior_numeroV(vetor, 10));
    printf("\nO menor número informado foi: %d ", menor_numeroV(vetor, 10));
    getchar();
    return 0;
}
