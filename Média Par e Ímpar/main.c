#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  /*   Leia quatro n�meros inteiros e encontre a m�dia aritm�tica simples entre as que
 correspondem a n�meros pares e impares. Lembre-se que n�o pode haver divis�o por zero.   */

int main()
{
    int n1, n2, n3, n4, soma = 0, soma2 = 0;
    float media, media2, media3, contador = 0, contador2 = 0;
    setlocale(LC_ALL, "portuguese");
    printf("Informe o 1� n�mero: ");
    scanf("%d", &n1);
    printf("Informe o 2� n�mero: ");
    scanf("%d", &n2);
    printf("Informe o 3� n�mero: ");
    scanf("%d", &n3);
    printf("Informe o 4� n�mero: ");
    scanf("%d", &n4);
    if (n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0 && n4 % 2 == 0){
       media = (n1 + n2 + n3 + n4) / 4;
       printf("\nNenhum n�mero �mpar foi informado!\n");
       printf("\nM�dia dos n�meros pares: %.2f\n\n", media);
    }else if (n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0 && n4 % 2 != 0){
        media2 = (n1 + n2 + n3 + n4) / 4;
        printf("\nNenhum n�mero par foi informado!\n");
        printf("\nM�dia dos n�meros �mpares: %.2f\n\n", media2);
    }else{
        if (n1 % 2 == 0){
            soma = soma + n1;
            contador++;
        }else{
            soma2 = soma2 + n1;
            contador2++;
        }
        if (n2 % 2 == 0){
            soma = soma + n2;
            contador++;
        }else{
            soma2 = soma2 + n2;
            contador2++;
        }
        if (n3 % 2 == 0){
            soma = soma + n3;
            contador++;
        }else{
            soma2 = soma2 + n3;
            contador2++;
        }
        if (n4 % 2 == 0){
            soma = soma + n4;
            contador++;
        }else{
            soma2 = soma2 + n4;
            contador2++;
        }
        media = soma / contador;
        media2 = soma2 / contador2;
        media3 = (n1 + n2 + n3 + n4) / 4;
        printf("\nM�dia de todos os n�meros: %.2f\n", media3);
        printf("\nM�dia dos n�meros �mpares: %.2f\n", media2);
        printf("\nM�dia dos n�meros pares: %.2f\n\n", media);
    }
    system("pause");
    return 0;
}
