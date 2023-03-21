#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Fa�a um algoritmo que receba do usu�rio 10 n�meros e os armazene em um vetor.
Imprima o vetor e ap�s a impress�o altere o vetor multiplicando todas as posi��es
 pelo maior n�mero presente no vetor. Ao final, imprima o maior n�mero e o vetor alterado. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10], i, maior;
    for (i = 0; i < 10; i++){
        printf("Informe o %d� n�mero: ", i + 1);
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
    printf("\n\nMaior n�mero informado: %d\n", maior);
    printf("\nVETOR MODIFICADO\n\n");
    for (i = 0; i < 10; i++){
        vetor[i] *= maior;
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}
