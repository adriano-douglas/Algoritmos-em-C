#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba uma matriz  A (n x m) e imprima o número de
linhas e o número de colunas nulas da matriz. Exemplo:

0 0 0 0
1 0 2 2
4 0 5 6
0 0 0 0

tem duas linhas nulas e uma coluna nula. */

#define linhas 3
#define colunas 3

void verifica_matriz(int matriz[linhas][colunas])
{
    int i, j, cont, cont_l = 0, cont_c = 0;
    for (i = 0; i < linhas; i++){
        cont = 0;
        for (j = 0; j < colunas; j++){
            if (matriz[i][j] == 0){
                cont++;
            }else{
                break;
            }
        }
        if (cont == colunas){
            cont_l++;
        }
    }
    for (j = 0; j < colunas; j++){
        cont = 0;
        for (i = 0; i < linhas; i++){
            if (matriz[i][j] == 0){
                cont++;
            }else{
                break;
            }
        }
        if (cont == linhas){
            cont_c++;
        }
    }
    printf("\nNº de linhas nulas:  %d ", cont_l);
    printf("\nNº de colunas nulas: %d ", cont_c);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[linhas][colunas], i, j;
    srand(time(NULL));
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 2;
            printf("[ %d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    verifica_matriz(matriz);
    getchar();
    return 0;
}
