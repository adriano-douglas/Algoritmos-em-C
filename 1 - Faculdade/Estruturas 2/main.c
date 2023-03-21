#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma struct para representar os alunos de um curso. A estrutura deve conter a
matrícula do aluno, nome, nota da primeira avaliação (0 a 10), nota da segunda avaliação (0 a 10) e
nota da terceira avaliação (0 a 10). Permita ao usuário cadastrar 5 alunos. Em seguida exiba:

a) A matrícula e o nome do aluno com a maior nota da terceira avaliação.
b) A matrícula e o nome do aluno com a maior média geral.
c) A matrícula e o nome do aluno com menor média geral. */

typedef struct {
    int n_matricula;
    char nome[40];
    float nota1;
    float nota2;
    float nota3;
}dados_alunos;

typedef struct {
    int n_matricula;
    char nome[40];
} maior_menor;

int main()
{
    setlocale(LC_ALL, "portuguese");
    dados_alunos alunos[5];
    float medias[5], maior3 = -1, maior_media = -1, menor_media = 11;
    maior_menor dados[3];
    int i;
    for (i = 0; i < 5; i++){
        printf(" ALUNO %d \n", i + 1);
        printf("----------\n");
        printf("Nº da matricula: ");
        scanf("%d", &alunos[i].n_matricula);
        fflush(stdin);
        printf("Nome: ");
        gets(alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
        printf("\n");
        medias[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (maior3 < alunos[i].nota3){
            maior3 = alunos[i].nota3;
            dados[0].n_matricula = alunos[i].n_matricula;
            strcpy(dados[0].nome, alunos[i].nome);
        }
        if (maior_media < medias[i]){
            maior_media = medias[i];
            dados[1].n_matricula = alunos[i].n_matricula;
            strcpy(dados[1].nome, alunos[i].nome);
        }
        if (menor_media > medias[i]){
            menor_media = medias[i];
            dados[2].n_matricula = alunos[i].n_matricula;
            strcpy(dados[2].nome, alunos[i].nome);
        }
    }
    printf("Aluno com a maior nota da terceira avaliação: \n\n");
    printf("Nº da matricula: %d\n", dados[0].n_matricula);
    printf("Nome: %s\n\n", dados[0].nome);
    printf("Aluno com a maior média geral: \n\n");
    printf("Nº da matricula: %d\n", dados[1].n_matricula);
    printf("Nome: %s\n\n", dados[1].nome);
    printf("Aluno com a menor média geral: \n\n");
    printf("Nº da matricula: %d\n", dados[2].n_matricula);
    printf("Nome: %s ", dados[2].nome);
    fflush(stdin);
    getchar();
    return 0;
}
