#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba uma matriz do tipo int alocada
dinamicamente (no método main) e dois ponteiros do tipo int (*par e
*impar). A função deverá contar quantos ímpares e quantos pares a matriz
possui e incluir essa contagem nos ponteiros recebidos. No método main,
crie uma matriz alocada dinamicamente com 5 linhas e 5 colunas e dois
ponteiros do tipo int (*par e *impar). Preencha a matriz com números
aleatórios, envie a matriz juntamente com os ponteiros para a função e
imprima a matriz e o conteúdo dos dois ponteiros. */

void par_impar(int **matriz, int *par, int *impar){
    int i, j, cont_par = 0, cont_impar = 0;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (matriz[i][j] % 2 == 0){
                cont_par++;
            }else{
                cont_impar++;
            }
        }
    }
    *par = cont_par;
    *impar = cont_impar;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int **matriz, *par, *impar, i, j;
    srand(time(NULL));
    par = (int *) malloc(sizeof(int));
    impar = (int *) malloc(sizeof(int));
    matriz = (int *) malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++){
        matriz[i] = (int *) malloc(5 * sizeof(int));
    }
    if (matriz == NULL || par == NULL || impar == NULL){
        printf("Erro! ");
    }else{
        for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                matriz[i][j] = rand() % 101;
                printf("%-3d ", matriz[i][j]);
            }
            printf("\n");
        }
        par_impar(matriz, par, impar);
        printf("\nTotal de números pares da Matriz:   %d ", *par);
        printf("\nTotal de números impares da Matriz: %d ", *impar);
        free(matriz);
        matriz = NULL;
        free(par);
        par = NULL;
        free(impar);
        impar = NULL;
    }
    getchar();
    return 0;
}
