#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Elaborar um algoritmo que lê do usuário uma matriz M(6,6)
e um valor A e multiplica cada uma das posições da matriz M
pelo valor A. Ao final, exiba a matriz para o usuário. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz [6][6], i, j, k = 0, numero;
    printf("Informe o valor que vai múltiplicar os outros números: ");
    scanf("%d", &numero);
    printf("\n");
    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            k++;
            printf("Informe o %dº número: ", k);
            scanf("%d", &matriz[i][j]);
            fflush(stdin);
        }
    }
    printf("\nRESULTADO FINAL\n\n");
    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            printf("[ %.3d ]  ", matriz[i][j] * numero);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
