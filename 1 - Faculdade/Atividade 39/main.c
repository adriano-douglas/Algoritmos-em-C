#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Faça um programa que calcule a média aritmética de vários valores inteiros positivos.
O final da leitura acontecerá quando for lido um valor negativo. */


int main()
{
    setlocale(LC_ALL, "portuguese");
    float soma = 0;
    int contador = 0, n;
    do{
        printf("Informe um número inteiro: ");
        scanf("%d", &n);
        if (n >= 0){
            soma += n;
            contador++;
        }
    }while (n >= 0);
    if (contador >= 1){
        printf("\nMédia: %.2f\n\n", soma/contador);
    }else{
        printf("\nNenhum número positivo foi informado!\n\n");
    }
    system("pause");
    return 0;
}
