#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o
de 1000 em 1000, imprimindo seu valor na tela até que seu valor seja 100000 (cem mil). */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador;
    for (contador = 0; contador <= 100000; contador += 1000){
        printf("%d\n", contador);
    }
    system("pause");
    return 0;
}
