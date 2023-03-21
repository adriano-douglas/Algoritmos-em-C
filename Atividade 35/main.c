#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que imprima os 100 primeiros inteiros positivos e pares.*/

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador = 0;
    while (contador <= 198){
        printf("%d\n", contador);
        contador = contador + 2;
    }
    printf("\n");
    system("pause");
    return 0;
}
