#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia 4 notas, calcule a m�dia delas e escreva:
Reprovado (m�dia < 5), Recupera��o (m�dia >= 5 e < 7) e Aprovado (m�dia >= 7). */

int main()
{
    setlocale(LC_ALL, "portuguese");
    float n1, n2, n3, n4, media;
    printf("Informe a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a sua segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a sua terceira nota: ");
    scanf("%f", &n3);
    printf("Informe a sua quarta nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("\nVoc� est� ");
    if (media < 5){
        printf("reprovado!\n\n");
    }else{
        if (media >= 5 && media < 7){
            printf("em recupera��o!\n\n");
        }else{
            printf("aprovado!\n\n");
        }
    }
    system("pause");
    return 0;
}
