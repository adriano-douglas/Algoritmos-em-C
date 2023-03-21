#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia e armazene (em um vetor) 20 números inteiros
informados pelo usuário.  Em seguida o programa deve ler um número inteiro
informado pelo usuário e dizer se ele pertence ou não ao vetor armazenado
previamente. Junto da mensagem se encontrou ou não o número, imprima também
o conteúdo do vetor. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vnumeros[20], i, numero, resposta = 0;
    for (i = 0; i < 20; i++){
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &vnumeros[i]);
    }
    printf("\nInforme o número a ser verificado: ");
    scanf("%d", &numero);
    for (i = 0; i < 20; i++){
        if (numero == vnumeros[i]){
            resposta = 1;
        }
    }
    system("cls");
    if (resposta == 1){
        printf("O NÚMERO %d PERTENCE AO CONJUNTO DOS NÚMEROS INFORMADOS ANTERIORMENTE!\n", numero);
    }else{
        printf("O NÚMERO %d NÃO PERTENCE AO CONJUNTO DOS NÚMEROS INFORMADOS ANTERIORMENTE!\n", numero);
    }
    printf("\nCONJUNTO DOS NÚMEROS INFORMADOS");
    printf("\n-------------------------------\n");
    for (i = 0; i < 20; i++){
        printf("%d  ", vnumeros[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
