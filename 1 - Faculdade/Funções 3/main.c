#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*  Crie uma fun��o em linguagem C que receba 3 n�meros e retorne
o maior valor, use a fun��o da quest�o anterior. */

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
    printf("Informe o 1� n�mero: ");
    scanf("%d", &n1);
    printf("Informe o 2� n�mero: ");
    scanf("%d", &n2);
    printf("Informe o 3� n�mero: ");
    scanf("%d", &n3);
    fflush(stdin);
    printf("\nO maior n�mero informado foi: %d ", maior_valor(n1, n2, n3));
    getchar();
    return 0;
}
