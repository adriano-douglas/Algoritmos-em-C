#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

/* Faça um programa para gerar automaticamente números entre 0 e 99
de uma cartela de bingo. Sabendo que cada cartela deverá conter 5
linhas de 5 números, gere estes dados de modo a não ter números repetidos
 dentro das cartelas. O programa deve exibir na tela a cartela gerada. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[5][5], vetor[25], i, j, k = 0, l, m;
    srand(time(NULL));
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
            vetor[k] = matriz[i][j];
            if (k > 0){
                do {
                    m = 0;
                    vetor[k] = rand() % 100;
                    for (l = 0; l < k; l++){
                        if (vetor[k] == vetor[l]){
                            m = 1;
                        }
                    }
                }while (m != 0);
                matriz[i][j] = vetor[k];
            }
            k++;
        }
    }
    printf("         CARTELA DE BINGO         \n");
    printf("----------------------------------\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("[ %2d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------\n");
    getchar();
    return 0;
}
