#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia quatro números inteiros e encontre a média aritmética simples entre as
que correspondem a números pares. Lembre-se que não pode haver divisão por zero. */

int main()
{
    int n1, n2, n3, n4;
    float media, contador = 0, soma = 0;
    setlocale(LC_ALL, "portuguese");
    printf("Informe o 1º número: ");
    scanf("%d", &n1);
    printf("Informe o 2º número: ");
    scanf("%d", &n2);
    printf("Informe o 3º número: ");
    scanf("%d", &n3);
    printf("Informe o 4º número: ");
    scanf("%d", &n4);
    if (n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0 && n4 % 2 != 0){
        printf("\nNenhum número par foi iformado!\n\n");
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
        printf("\nA média dos números pares informados é %.2f\n\n", media);
    }
    system("pause");
    return 0;
}
