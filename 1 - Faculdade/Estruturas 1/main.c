#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Construa uma estrutura com nome, número de matrícula e curso. Leia do usuário dados
de 5 alunos, armazene em um vetor do tipo da estrutura criada e imprima os dados na tela. */

typedef struct {
    char nome[30];
    int matricula;
    char curso[30];
}dados_alunos;

int main()
{
    setlocale(LC_ALL, "portuguese");
    dados_alunos alunos[5];
    int i;
    for (i = 0; i < 5; i++){
        printf(" ALUNO %d \n", i + 1);
        printf("----------\n");
        printf("Nome: ");
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Nº da matrícula: ");
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        printf("Curso: ");
        gets(alunos[i].curso);
        fflush(stdin);
        system("clear || cls");
    }
    printf(" ALUNOS CADASTRADOS \n");
    printf("--------------------\n");
    for (i = 0; i < 5; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nº Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n\n", alunos[i].curso);
    }
    getchar();
    return 0;
}
