#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  /*   Leia quatro números inteiros e encontre a média aritmética simples entre as que
 correspondem a números pares e impares. Lembre-se que não pode haver divisão por zero.   */

int main()
{
    int n1, n2, n3, n4, soma = 0, soma2 = 0;
    float media, media2, media3, contador = 0, contador2 = 0;
    setlocale(LC_ALL, "portuguese");
    printf("Informe o 1º número: ");
    scanf("%d", &n1);
    printf("Informe o 2º número: ");
    scanf("%d", &n2);
    printf("Informe o 3º número: ");
    scanf("%d", &n3);
    printf("Informe o 4º número: ");
    scanf("%d", &n4);
    if (n1 % 2 == 0 && n2 % 2 == 0 && n3 % 2 == 0 && n4 % 2 == 0){
       media = (n1 + n2 + n3 + n4) / 4;
       printf("\nNenhum número ímpar foi informado!\n");
       printf("\nMédia dos números pares: %.2f\n\n", media);
    }else if (n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0 && n4 % 2 != 0){
        media2 = (n1 + n2 + n3 + n4) / 4;
        printf("\nNenhum número par foi informado!\n");
        printf("\nMédia dos números ímpares: %.2f\n\n", media2);
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
        printf("\nMédia de todos os números: %.2f\n", media3);
        printf("\nMédia dos números ímpares: %.2f\n", media2);
        printf("\nMédia dos números pares: %.2f\n\n", media);
    }
    system("pause");
    return 0;
}
