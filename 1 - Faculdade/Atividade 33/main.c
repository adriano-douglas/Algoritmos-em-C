#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que leia um conjunto de 10 n�meros{
//inteiros e mostre qual foi o maior e o menor valor fornecido.

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador, numero, menor, maior;
    printf("Informe o 1� n�mero: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    for (contador = 2; contador <= 10; contador++){
        printf("Informe o %d� n�mero: ", contador);
        scanf("%d", &numero);
        if (numero < menor){
            menor = numero;
        }
        if (numero > maior){
            maior = numero;
        }
    }
    printf("\nMaior n�mero informado: %d\n", maior);
    printf("Menor n�mero informado: %d\n\n", menor);
    system("pause");
    return 0;
}
