#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    float nota1, nota2, nota3, nota4, media;

    system("color B");
    printf("Nome do aluno: ");
    gets(nome);
    printf("Primeira Nota: ");
    scanf("%f", &nota1);
    printf("Segunda Nota: ");
    scanf("%f", &nota2);
    printf("Terceira Nota: ");
    scanf("%f", &nota3);
    printf("Quarta Nota: ");
    scanf("%f", &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    system("cls");
    printf("Aluno: %s\n", nome);
    printf("Nota média: %.2f\n", media);
    if (media < 5){
        printf("Aluno Reprovado!\n");
    }else{
        if ((media >= 5)&&(media < 7)){
            printf("Aluno em Recuperação!\n");
        }else{
            printf("Aluno Aprovado!\n");
        }
    }
    system("pause");
    return 0;
}
