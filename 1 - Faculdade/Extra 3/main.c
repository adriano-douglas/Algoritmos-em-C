#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Leia e armazene em um vetor 10 n�meros fornecidos pelo usu�rio.
Em seguida dever� ser impresso o maior e o menor elemento do vetor */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[10], menor, maior;
    for (i = 0; i < 10; i++){
        printf("Informe o %d� n�mero do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    menor = vetor[0];
    maior = vetor[0];
    for (i = 0; i < 10; i++){
        if (menor > vetor[i]){
            menor = vetor[i];
        }
        if (maior < vetor[i]){
            maior = vetor[i];
        }
    }
    printf("\nMaior n�mero do vetor: %d", maior);
    printf("\nMenor n�mero do vetor: %d\n\n", menor);
    system("pause");
    return 0;
}
