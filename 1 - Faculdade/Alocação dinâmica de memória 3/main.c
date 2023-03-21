#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1) Crie uma fun��o que receba um vetor do tipo int e o tamanho desse vetor e solicite
ao usu�rio o preenchimento de todas as posi��es do vetor. No m�todo main, leia um
valor n e aloque dinamicamente um vetor de tamnho n atrav�s da fun��o malloc.
Envie o vetor para a fun��o (que far� o preenchimento das posi��es) e ap�s chamar
a fun��o, imprima o conte�do do vetor. */

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
        printf("Informe o %d� n�mero do vetor: ", i + 1);
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
