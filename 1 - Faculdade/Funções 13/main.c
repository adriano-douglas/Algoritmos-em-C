#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o que receba, por par�metro, uma matriz A(5,5), calcule o fatorial de
cada um dos elementos da matriz, substitua o valor original de cada posi��o pelo valor
do fatorial e retorne a matriz alterada. Utilize a fun��o que calcula fatorial que j� foi
criada em outra atividade. Imprima a matriz no m�todo main() antes e depois de chamar a fun��o. */

int Fatorial(int numero){
    int i, fatorial = 1;
    for (i = numero; i > 0; i--){
        fatorial *= i;
    }
    return fatorial;
}

void Modifica_Matriz(int matriz[5][5]){
    int i, j;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            matriz[i][j] = Fatorial(matriz[i][j]);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, j, A[5][5];
    srand(time(NULL));
    printf("MATRIZ ORIGINAL:\n\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            A[i][j] = rand() % 13;
            printf("[ %2d ] ", A[i][j]);
        }
        printf("\n");
    }
    Modifica_Matriz(A);
    printf("\nMATRIZ COM O FATORIAL DE CADA ELEMENTO: \n\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("[%9d] ", A[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
