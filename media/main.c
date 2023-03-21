#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    float nota1, nota2, nota3, media;
    printf("Nome do aluno: ");
    gets(nome);
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    printf("Terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1+nota2+nota3)/3;
    printf("Aluno: %s\n", nome);
    printf("Nota media: %.2f\n", media);
    if (media >= 7){
        printf("Aluno Aprovado!\n");
        }else{
            printf("Aluno Reprovado!\n");
        }
    system("pause");
    return 0;
}
