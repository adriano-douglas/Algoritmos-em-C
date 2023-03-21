#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia 4 notas, calcule a média delas e escreva:
Reprovado (média < 5), Recuperação (média >= 5 e < 7) e Aprovado (média >= 7). */

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
    printf("\nVocê está ");
    if (media < 5){
        printf("reprovado!\n\n");
    }else{
        if (media >= 5 && media < 7){
            printf("em recuperação!\n\n");
        }else{
            printf("aprovado!\n\n");
        }
    }
    system("pause");
    return 0;
}
