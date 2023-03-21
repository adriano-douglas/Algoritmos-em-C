#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[4][4], i, j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (j <= i){
                matriz[i][j] = (i + 1) * (j + 1);
            }else{
                matriz[i][j] = 0;
            }
            printf("[ %2d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
