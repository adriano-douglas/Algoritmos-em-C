#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*  Crie uma função em linguagem C que receba 2 números e retorne o maior valor. */

int maior_valor(int n1, int n2){
    if (n1 > n2){
        return n1;
    }else{
        return n2;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    printf("Informe o 1º número: ");
    scanf("%d", &n1);
    printf("Informe o 2º número: ");
    scanf("%d", &n2);
    fflush(stdin);
    printf("O maior número informado foi: %d", maior_valor(n1, n2));
    getchar();
    return 0;
}
