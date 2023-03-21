#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*  Crie uma função em linguagem C que receba 3 números e retorne
o maior valor, use a função da questão anterior. */

int maior_valor(int n1, int n2, int n3){
    if (n1 >= n2 && n1 >= n3){
        return n1;
    }else if (n2 >= n1 && n2 >= n3){
        return n2;
    }else if (n3 >= n1 && n3 >= n2){
        return n3;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, n3;
    printf("Informe o 1º número: ");
    scanf("%d", &n1);
    printf("Informe o 2º número: ");
    scanf("%d", &n2);
    printf("Informe o 3º número: ");
    scanf("%d", &n3);
    fflush(stdin);
    printf("\nO maior número informado foi: %d ", maior_valor(n1, n2, n3));
    getchar();
    return 0;
}
