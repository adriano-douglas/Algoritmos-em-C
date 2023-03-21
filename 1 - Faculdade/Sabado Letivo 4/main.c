#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um algoritmo que receba do usuário um número de 1 a 10 e imprima a tabuada
dele de 1 a 10. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, i;
    char resposta;
    do {
        system("cls");
        printf("Informe um número para ver sua tabuada: ");
        scanf("%d", &n);
        system("cls");
        printf("===============\n");
        printf(" TABUADA DE %d \n", n);
        printf("===============\n");
        for (i = 1; i <= 10; i++){
            printf("%d x %2d = %d\n", n, i, n*i);
        }
        printf("===============\n");
        printf("Você quer continuar? [S/N]: ");
        scanf("%s", &resposta);
    }while (resposta != 'N' && resposta != 'n');
    printf("\nSAINDO. . .\n\n");
    system("pause");
    return 0;
}
