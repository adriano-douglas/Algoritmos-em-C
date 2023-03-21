#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia um número inteiro e mostre uma mensagem indicando se
 este número é par ou ímpar, e se é positivo ou negativo. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1;
    printf("Informe um número: ");
    scanf("%d", &n1);
    printf("\nO número %d é ", n1);
    if (n1 % 2 == 0){
        printf("par ");
    }else{
        printf("impar ");
    }
    if (n1 == 0){
        printf("e considerado neutro.\n\n");
    }else{
        if (n1 > 0){
            printf("e positivo.\n\n");
        }else{
            printf("e negativo.\n\n");
        }
    }
    system("pause");
    return 0;
}
