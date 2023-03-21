#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, m, v;
    char times[3][20];
    printf("=========================\n");
    printf("  CAMPEONATO DE FUTEBOL  \n");
    printf("=========================\n");
    for (i = 0; i < 3; i++){
        printf("Informe o nome do %dº time: ", i + 1);
        gets(times[i]);
    }
    system("cls");
    printf("==========================\n");
    printf("    TABELA DE PARTIDAS    \n");
    printf("==========================\n");
    for (m = 0; m < 3; m++){
        for (v = 0; v < 3; v++){
            if (times[m] != times[v]){
                printf("%s [] x [] %s", times[m], times[v]);
                printf("\n");
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
