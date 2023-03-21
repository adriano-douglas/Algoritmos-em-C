#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Leia uma matriz 4 x 4, imprima a matriz e retorne
a localização (linha e a coluna) do maior valor. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[4][4], i, j, k = 0, maior, linha, coluna;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            k++;
            printf("Informe o %dº número: ", k);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }
    printf("\nNÚMEROS INFORMADOS\n\n");
    maior = matriz[0][0];
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("[ %.3d ] ", matriz[i][j]);
            if (maior <= matriz[i][j]){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
        printf("\n");
    }
    printf("\nPosição do maior número informado: Linha %d, Coluna %d\n", linha + 1, coluna + 1);
    getchar();
    return 0;
}
