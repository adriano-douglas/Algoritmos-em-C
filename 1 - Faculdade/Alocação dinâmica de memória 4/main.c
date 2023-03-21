#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o que receba uma matriz do tipo int alocada
dinamicamente (no m�todo main) e dois ponteiros do tipo int (*par e
*impar). A fun��o dever� contar quantos �mpares e quantos pares a matriz
possui e incluir essa contagem nos ponteiros recebidos. No m�todo main,
crie uma matriz alocada dinamicamente com 5 linhas e 5 colunas e dois
ponteiros do tipo int (*par e *impar). Preencha a matriz com n�meros
aleat�rios, envie a matriz juntamente com os ponteiros para a fun��o e
imprima a matriz e o conte�do dos dois ponteiros. */

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
        printf("\nTotal de n�meros pares da Matriz:   %d ", *par);
        printf("\nTotal de n�meros impares da Matriz: %d ", *impar);
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
