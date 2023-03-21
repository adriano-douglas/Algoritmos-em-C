#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1) Crie uma função que receba um vetor do tipo int e o tamanho desse vetor e solicite
ao usuário o preenchimento de todas as posições do vetor. No método main, leia um
valor n e aloque dinamicamente um vetor de tamnho n através da função malloc.
Envie o vetor para a função (que fará o preenchimento das posições) e após chamar
a função, imprima o conteúdo do vetor. */

void ordenar_vetor(int vetor[], int tamanho){
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++){
        for (j = i + 1; j < tamanho; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void preencher_vetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("Informe o %dº número do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, *vetor, tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("\n");
    vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL){
        printf("Erro! ");
        return 1;
    }
    preencher_vetor(vetor, tamanho);
    printf("\nVetor Informado: ");
    for (i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    ordenar_vetor(vetor, tamanho);
    printf("\n\nVetor em ordem crescente: ");
    for (i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    free(vetor);
    vetor = NULL;
    fflush(stdin);
    getchar();
    return 0;
}
