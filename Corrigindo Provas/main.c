#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, j, contador;
    float soma = 0, acertos[3];
    char gabarito[5][2], respostas[5][2], nome[3][35];
    printf("======================\n");
    printf(" CADASTRO DO GABARITO \n");
    printf("======================\n");
    for (i = 0; i < 5; i++){
        printf("Questão %d: ", i + 1);
        gets(gabarito[i]);
    }
    system("cls");
    for (i = 0; i < 3; i++){
        contador = 0;
        printf("=============\n");
        printf("  ALUNO %d \n", i + 1);
        printf("=============\n");
        printf("Nome: ");
        gets(nome[i]);
        printf("\n");
        for (j = 0; j < 5; j++){
            printf("Resposta %d: ", j + 1);
            gets(respostas[j]);
            if (respostas[j][0] == gabarito[j][0]){
                contador += 2;
            }
        }
        printf("%d\n", contador);
        acertos[i] = contador;
        system("cls");
    }
    printf("======================================\n");
    printf("             NOTAS FINAIS             \n");
    printf("======================================\n");
    for (i = 0; i < 3; i++){
        printf("%-35s %2.0f", nome[i], acertos[i]);
        soma += acertos[i];
        printf("\n");
    }
    printf("======================================\n");
    printf("MÉDIA DA TURMA: %.2f\n\n", soma / 3);
    system("pause");
    return 0;
}
