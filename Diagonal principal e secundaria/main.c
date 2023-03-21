#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int l, c, limite;
    printf("Quantidade de linhas da Matriz: ");
    scanf("%d", &l);
    printf("Quantidade de colunas da Matriz: ");
    scanf("%d", &c);
    printf("Limite dos números gerados: ");
    scanf("%d", &limite);
    system("clear || cls");
    int i, j, matriz[l][c];
    srand(time(NULL));
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            matriz[i][j] = rand() % limite + 1;
            printf("%-3d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            if (i == j || i + j == l - 1){
                printf("%-3d ", matriz[i][j]);
            }else{
                printf("    ");
            }
        }
        printf("\n");
    }
    fflush(stdin);
    getchar();
    return 0;
}
