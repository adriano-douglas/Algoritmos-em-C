#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia quatro n�meros inteiros e encontre a m�dia aritm�tica simples entre as
que correspondem a n�meros pares. Lembre-se que n�o pode haver divis�o por zero. */

int main()
{
    int n1, n2, n3, n4;
    float media, contador = 0, soma = 0;
    setlocale(LC_ALL, "portuguese");
    printf("Informe o 1� n�mero: ");
    scanf("%d", &n1);
    printf("Informe o 2� n�mero: ");
    scanf("%d", &n2);
    printf("Informe o 3� n�mero: ");
    scanf("%d", &n3);
    printf("Informe o 4� n�mero: ");
    scanf("%d", &n4);
    if (n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0 && n4 % 2 != 0){
        printf("\nNenhum n�mero par foi iformado!\n\n");
    }else{
        if (n1 % 2 == 0){
            soma = soma + n1;
            contador++;
        }
        if (n2 % 2 == 0){
            soma = soma + n2;
            contador++;
        }
        if (n3 % 2 == 0){
            soma = soma + n3;
            contador++;
        }
        if (n4 % 2 == 0){
            soma = soma + n4;
            contador++;
        }
        media = soma / contador;
        printf("\nA m�dia dos n�meros pares informados � %.2f\n\n", media);
    }
    system("pause");
    return 0;
}
