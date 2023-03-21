#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que leia e armazene (em um vetor) 20 n�meros inteiros
informados pelo usu�rio.  Em seguida o programa deve ler um n�mero inteiro
informado pelo usu�rio e dizer se ele pertence ou n�o ao vetor armazenado
previamente. Junto da mensagem se encontrou ou n�o o n�mero, imprima tamb�m
o conte�do do vetor. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vnumeros[20], i, numero, resposta = 0;
    for (i = 0; i < 20; i++){
        printf("Informe o %d� n�mero: ", i + 1);
        scanf("%d", &vnumeros[i]);
    }
    printf("\nInforme o n�mero a ser verificado: ");
    scanf("%d", &numero);
    for (i = 0; i < 20; i++){
        if (numero == vnumeros[i]){
            resposta = 1;
        }
    }
    system("cls");
    if (resposta == 1){
        printf("O N�MERO %d PERTENCE AO CONJUNTO DOS N�MEROS INFORMADOS ANTERIORMENTE!\n", numero);
    }else{
        printf("O N�MERO %d N�O PERTENCE AO CONJUNTO DOS N�MEROS INFORMADOS ANTERIORMENTE!\n", numero);
    }
    printf("\nCONJUNTO DOS N�MEROS INFORMADOS");
    printf("\n-------------------------------\n");
    for (i = 0; i < 20; i++){
        printf("%d  ", vnumeros[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
