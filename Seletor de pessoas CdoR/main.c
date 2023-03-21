#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escrever um algoritmo que leia o nome e o sexo de 5 pessoas e informe o
nome e se ela é homem ou mulher. No final informe total de homens e de mulheres. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    char nomes[5][40], sexos[5][2], totalH = 0, totalM = 0;
    for (i = 0; i < 5; i++){
        printf(" %dª PESSOA \n", i + 1);
        printf("------------\n");
        printf("Nome: ");
        gets(nomes[i]);
        printf("Sexo de %s: [M/F] ", nomes[i]);
        gets(sexos[i]);
        if (strcmp(sexos[i], "f") && strcmp(sexos[i], "F")){
            totalH++;
        }else{
            totalM++;
        }
        system("cls");
    }
    printf("|    RESULTADO DA PESQUISA    |\n");
    printf("-------------------------------\n");
    for (i = 0; i < 5; i++){
        if (strcmp(sexos[i], "f") && strcmp(sexos[i], "F")){
            printf("| %-18s-  Homem  |\n", nomes[i]);
        }else{
            printf("| %-18s-  Mulher |\n", nomes[i]);
        }
    }
    printf("-------------------------------");
    printf("\n| Total de homens   -  %d      |", totalH);
    printf("\n| Total de mulheres -  %d      |\n", totalM);
    printf("-------------------------------\n");
    system("pause");
    return 0;
}
