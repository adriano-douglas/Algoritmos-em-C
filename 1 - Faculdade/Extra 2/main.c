#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia 10 n�meros fornecidos pelo usu�rio e armazene em um vetor.
Contar e escrever quantos valores pares o vetor possui. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[10], pares = 0;
    for (i = 0; i < 10; i++){
        printf("Informe o %d� n�mero do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }
    if (pares != 0){
        printf("\nQuantidade de n�meros pares do vetor: %d\n\n", pares);
    }else{
        printf("\nO vetor n�o possui n�meros pares!\n\n");
    }
    system("pause");
    return 0;
}
