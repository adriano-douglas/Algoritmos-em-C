#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que realize a leitura dos seguintes dados relativos a um conjunto
de alunos: Matricula, Nome, C�digo da Disciplina, Nota1 e Nota2. Crie uma Struct para
guardar estes dados. Considere uma turma de at� 10 alunos. Ap�s ler todos os dados
digitados, e depois de armazen�los em um vetor de estrutura (estrutura aluno criada
acima), exibir na tela a listagem final dos alunos com as suas respectivas m�dias
finais (use uma m�dia ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0). */

typedef struct {
    int matricula;
    char nome[40];
    int codigo;
    float nota1;
    float nota2;
}dados_alunos;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int total;
    printf("Informe o total de alunos da turma: ");
    scanf("%d", &total);
    system("clear || cls");

    dados_alunos alunos[total];
    int i;
    for (i = 0; i < total; i++){
        printf(" ALUNO %d \n", i + 1);
        printf("----------\n");
        printf("N� da matricula: ");
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);
        printf("Nome: ");
        gets(alunos[i].nome);
        printf("C�digo da disciplina: ");
        scanf("%d", &alunos[i].codigo);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("\n");
    }
    system("clear || cls");
    printf("DADOS DOS ALUNOS\n");
    printf("----------------  ");
    for (i = 0; i < total; i++){
        printf("\n");
        printf("N� da matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("C�digo da disciplina: %d\n", alunos[i].codigo);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("M�dia:  %.2f\n", (alunos[i].nota1 * 1 + alunos[i].nota2 * 2) / 3);
    }
    fflush(stdin);
    getchar();
    return 0;
}
