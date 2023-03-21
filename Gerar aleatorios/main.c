#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Verifica(int matriz[][5],int nume){
    int c, f;
    for (f = 0; f < 5; f++){
        for (c = 0; c < 5; c++){
            if (nume == matriz[f][c]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int Matriz[5][5];
    int f, c, numE;
    srand(time(NULL));
    for (f = 0; f < 5; f++){
        for (c = 0; c < 5; c++){
            numE = 1 + rand() % 25;
            while(Verifica(Matriz, numE) == false){
                numE = 1 + rand() % 25;
            }
            Matriz[f][c] = numE;
        }
    }
    for (f = 0; f < 5; f++){
        for (c = 0; c < 5; c++){
            printf("%2d ",Matriz[f][c]);
        }
        printf("\n");
    }
    return 0;
}
