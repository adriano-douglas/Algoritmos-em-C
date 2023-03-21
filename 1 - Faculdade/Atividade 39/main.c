#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Fa�a um programa que calcule a m�dia aritm�tica de v�rios valores inteiros positivos.
O final da leitura acontecer� quando for lido um valor negativo. */


int main()
{
    setlocale(LC_ALL, "portuguese");
    float soma = 0;
    int contador = 0, n;
    do{
        printf("Informe um n�mero inteiro: ");
        scanf("%d", &n);
        if (n >= 0){
            soma += n;
            contador++;
        }
    }while (n >= 0);
    if (contador >= 1){
        printf("\nM�dia: %.2f\n\n", soma/contador);
    }else{
        printf("\nNenhum n�mero positivo foi informado!\n\n");
    }
    system("pause");
    return 0;
}
