#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[1000], stringCodificada[1000], resp;
    int i, j, tamanho, diferenca, opcao;
    do {
        system("cls");
        printf("  CÓDIGO DE CÉSAR  \n");
        printf("===================\n");
        printf("[ 1 ] CÓDIFICAR    \n");
        printf("[ 2 ] DESCÓDIFICAR \n");
        printf("===================\n");
        printf(">>> ");
        scanf("%d", &opcao);
        printf("-------------------\n");
        fflush(stdin);
        switch (opcao){
            case 1:
                printf("Informe uma frase:  ");
                fgets(string, sizeof(string), stdin);
                tamanho = strlen(string);
                for (i = 0; i <= tamanho; i++){
                    stringCodificada[i] = string[i];
                    for (j = 97; j < 123; j++){
                        if (string[i] == j){
                            if (j < 120){
                                stringCodificada[i] = j + 3;
                            }else{
                                diferenca = j - 120;
                                stringCodificada[i] = 97 + diferenca;
                            }
                        }
                    }
                    for (j = 65; j < 91; j++){
                        if (string[i] == j){
                            if (j < 88){
                                stringCodificada[i] = j + 3;
                            }else{
                                diferenca = j - 88;
                                stringCodificada[i] = 65 + diferenca;
                            }
                        }
                    }
                }
                printf("\nFrase Códificada:   %s", stringCodificada);
            break;
            case 2:
                printf("Informe uma frase:   ");
                fgets(string, sizeof(string), stdin);
                tamanho = strlen(string);
                for (i = 0; i <= tamanho; i++){
                    stringCodificada[i] = string[i];
                    for (j = 97; j < 123; j++){
                        if (string[i] == j){
                            if (j > 99){
                                stringCodificada[i] = j - 3;
                            }else{
                                diferenca = j - 97;
                                stringCodificada[i] = 120 + diferenca;
                            }
                        }
                    }
                    for (j = 65; j < 91; j++){
                        if (string[i] == j){
                            if (j > 67){
                                stringCodificada[i] = j - 3;
                            }else{
                                diferenca = j - 65;
                                stringCodificada[i] = 88 + diferenca;
                            }
                        }
                    }
                }
                printf("\nFrase Descódificada: %s", stringCodificada);
            break;
            default:
                printf("Opção Invalida!\n");
            break;
        }
    printf("\nVocê quer continuar? [S/N]: ");
    scanf("%c", &resp);
    } while (resp != 'n' && resp != 'N');
    getchar();
    return 0;
}
