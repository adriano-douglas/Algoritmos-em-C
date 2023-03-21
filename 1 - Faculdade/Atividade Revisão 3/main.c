#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Faça um algoritmo que receba do usuário 10 números e os armazene em um vetor.
Imprima o vetor e após a impressão altere o vetor multiplicando todas as posições
 pelo maior número presente no vetor. Ao final, imprima o maior número e o vetor alterado. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10], i, maior;
    for (i = 0; i < 10; i++){
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }
    maior = vetor[0];
    printf("\nVETOR ORIGINAL\n\n");
    for (i = 0; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
        printf("%d ", vetor[i]);
    }
    printf("\n\nMaior número informado: %d\n", maior);
    printf("\nVETOR MODIFICADO\n\n");
    for (i = 0; i < 10; i++){
        vetor[i] *= maior;
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}
