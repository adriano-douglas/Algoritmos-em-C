#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int Qalunos, contador;
    float nota, Mnota = 0;
    char nome[30], Maluno[30];
    printf(" ESCOLA JAVALI CANSADO \n");
    printf("-----------------------\n");
    printf("Informe quantos alunos tem em sua sala: ");
    scanf("%d", &Qalunos);
    printf("-----------------------\n");
    for (contador = 1; contador <= Qalunos; contador++){
        printf("ALUNO %d", contador);
        printf("\nNome do aluno: ");
        scanf("%s", &nome);
        printf("Nota de %s: ", nome);
        scanf("%f", &nota);
        printf("-----------------------\n");
        if (Mnota < nota){
            Mnota = nota;
            Maluno = nome;
        }
    }
    printf("O melhor aproveitamento foi de %s com a nota %.2f\n\n", Maluno, Mnota);
    system("pause");
    return 0;
}
