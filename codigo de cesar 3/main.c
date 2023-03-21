#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[100], resposta;
    int i, j, opcao;
    do {
        system("cls");
        system("color F");
        printf("  C�DIGO DE C�SAR  \n");
        printf("===================\n");
        printf("[ 1 ] C�DIFICAR    \n");
        printf("[ 2 ] DESC�DIFICAR \n");
        printf("===================\n");
        printf(">>> ");
        scanf("%d", &opcao);
        fflush(stdin);
        printf("-------------------\n");
        switch (opcao){
            case 1:
                system("color A");
                printf("Informe uma frase:  ");
                gets(string);
                for (i = 0; i < strlen(string); i++){
                    j = string[i];
                    if ((j >= 88 && j <= 90) || (j >= 120 && j <= 122)){
                        string[i] = j - 23;
                    }else if (string[i] == ' '){
                        string[i] = j;
                    }else{
                        string[i] = j + 3;
                    }
                }
                printf("\nFrase C�dificada:   %s", string);
            break;
            case 2:
                system("color B");
                printf("Informe uma frase:   ");
                gets(string);
                for (i = 0; i < strlen(string); i++){
                    j = string[i];
                    if ((j >= 65 && j <= 67) || (j >= 97 && j <= 99)){
                        string[i] = j + 23;
                    }else if (string[i] == ' '){
                        string[i] = j;
                    }else{
                        string[i] = j - 3;
                    }
                }
                printf("\nFrase Desc�dificada: %s", string);
            break;
            default:
                system("color D");
                printf("Op��o Invalida!");
            break;
        }
        printf("\n\nVoc� quer continuar? [S/N]: ");
        scanf("%c", &resposta);
    } while (resposta != 'n' && resposta != 'N');
    getchar();
    return 0;
}
