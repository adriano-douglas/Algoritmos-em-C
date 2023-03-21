#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*  Faça um programa que receba uma string digitada pelo usuário,
inverta os caracteres dessa string e imprima a string invertida.
Por exemplo, se a string informada for “ROMA”, deve ser retornada a string “AMOR”. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[100], stringInvertida[100];
    int i, j = 0, tamanho;
    printf("Informe uma string: ");
    gets(string);
    tamanho = strlen(string) - 1;
    for (i = tamanho; i >= 0; i--){
        stringInvertida[j] = string[i];
        j++;
    }
    stringInvertida[j] = '\0';
    printf("\nString Invertida: %s\n", stringInvertida);
    getchar();
    return 0;
}
