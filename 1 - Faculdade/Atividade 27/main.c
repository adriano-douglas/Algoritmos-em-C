#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia um n�mero inteiro e mostre uma mensagem indicando se
 este n�mero � par ou �mpar, e se � positivo ou negativo. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1;
    printf("Informe um n�mero: ");
    scanf("%d", &n1);
    printf("\nO n�mero %d � ", n1);
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
