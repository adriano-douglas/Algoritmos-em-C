#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Faça um algoritmo que crie duas matrizes, a matriz m[3][3] e a matriz t[3][3].
Solicite ao usuário que preencha todas as posições da matriz m. A matriz t será a
matriz transposta da matriz m (troca-se as linhas por colunas, ou seja, o que era
linha passa a ser coluna). Ao final, imprima as duas matrizes. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz1[3][3], matriz2[3][3], i, j;
    printf(" PREENCHIMENTO DA MATRIZ \n");
    printf("-------------------------\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Informe um número para a posição [ %d - %d ]:  ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
            fflush(stdin);
        }
    }
    printf("\n    Matriz Original    \n\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            matriz2[j][i] = matriz1[i][j];
            printf("[ %-4d] ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n    Matriz Transposta   \n\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("[ %-4d] ", matriz2[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
