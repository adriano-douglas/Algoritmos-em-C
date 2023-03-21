#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia os números inteiros A e B e informe se A é múltiplo, divisor ou nada de B. */

int main()
{
    int A, B;
    setlocale(LC_ALL, "portuguese");
    printf("Informe o 1º número: ");
    scanf("%d", &A);
    printf("Informe o 2º número: ");
    scanf("%d", &B);
    if (A % B == 0 || B % A == 0){
        if (A % B == 0){
            printf("\n%d é múltiplo de %d\n", A, B);
        }
        if (B % A == 0){
            printf("\n%d é divisor de %d\n", A, B);
        }
    }else{
        printf("\n%d não é múltilplo e nem divisor de %d\n", A, B);
    }
    printf("\n");
    system("pause");
    return 0;
}
