#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que leia um conjunto de 10 números{
//inteiros e mostre qual foi o maior e o menor valor fornecido.

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador, numero, menor, maior;
    printf("Informe o 1º número: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    for (contador = 2; contador <= 10; contador++){
        printf("Informe o %dº número: ", contador);
        scanf("%d", &numero);
        if (numero < menor){
            menor = numero;
        }
        if (numero > maior){
            maior = numero;
        }
    }
    printf("\nMaior número informado: %d\n", maior);
    printf("Menor número informado: %d\n\n", menor);
    system("pause");
    return 0;
}
