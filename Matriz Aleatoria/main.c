#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Gerar_Matriz_Aleatoria(int matriz[][3], int limite)
{
    bool Verifica_Repetidos(int matriz[][3], int valor);
    int i, j, valor;
    srand(time(NULL));
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            do {
                valor = rand() % limite + 1;
            }while(Verifica_Repetidos(matriz, valor) == true);
            matriz[i][j] = valor;
        }
    }
}

bool Verifica_Repetidos(int matriz[][3], int valor)
{
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (matriz[i][j] == valor){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int i, j, Matriz[3][3];
    Gerar_Matriz_Aleatoria(Matriz, 9);
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d  ", Matriz[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
