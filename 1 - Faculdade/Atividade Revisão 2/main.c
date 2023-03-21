#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Faça um algoritmo que leia dois valores inteiros e positivos A e B.
O algoritmo deve calcular e retornar o resultado de AB. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int A, B, i, resultado = 1;
    printf("Informe o 1º número: ");
    scanf("%d", &A);
    printf("Informe o 2º número: ");
    scanf("%d", &B);
    fflush(stdin);
    for (i = 1; i <= B; i++){
        resultado *= A;
    }
    printf("\nResultado de %d elevado a %d: %d ",A, B, resultado);
    getchar();
    return 0;
}
