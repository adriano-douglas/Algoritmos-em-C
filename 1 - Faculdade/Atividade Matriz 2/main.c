#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Leia uma matriz 4 x 4 (dados fornecidos pelo usu�rio),
conte e informe quantos valores maiores que 10 ela possui. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[4][4], i, j, k = 0, maiores = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            k++;
            printf("Informe o %d� n�mero: ", k);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
            if (matriz[i][j] > 10){
                maiores++;
            }
        }
    }
    printf("\nTotal de n�meros maiores que 10: %d\n", maiores);
    getchar();
    return 0;
}
