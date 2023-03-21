#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ordenarVetor(int vetor[], int tamanho){
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

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[10];
    for (i = 0; i < 10; i++){
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }
    printf("\nVetor em ordem crescente: ");
    ordenarVetor(vetor, 10);
    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}
