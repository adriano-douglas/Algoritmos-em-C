#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia os n�meros inteiros A e B e informe se A � m�ltiplo, divisor ou nada de B. */

int main()
{
    int A, B;
    setlocale(LC_ALL, "portuguese");
    printf("Informe o 1� n�mero: ");
    scanf("%d", &A);
    printf("Informe o 2� n�mero: ");
    scanf("%d", &B);
    if (A % B == 0 || B % A == 0){
        if (A % B == 0){
            printf("\n%d � m�ltiplo de %d\n", A, B);
        }
        if (B % A == 0){
            printf("\n%d � divisor de %d\n", A, B);
        }
    }else{
        printf("\n%d n�o � m�ltilplo e nem divisor de %d\n", A, B);
    }
    printf("\n");
    system("pause");
    return 0;
}
