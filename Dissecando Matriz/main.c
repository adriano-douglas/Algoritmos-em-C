#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[4][4], i, j, opcao;
    srand(time(NULL));
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){;
            matriz[i][j] = rand() % 24 + 1;
        }
    }
    do {
        system("clear || cls");
        printf("     MENU DE OPÇÕES     \n");
        printf("========================\n");
        printf("[ 1 ] MOSTRAR A MATRIZ  \n");
        printf("[ 2 ] DIAGONAL PRINCIPAL\n");
        printf("[ 3 ] TRIÂNGULO SUPERIOR\n");
        printf("[ 4 ] TRIÂNGULO INFERIOR\n");
        printf("[ 5 ] SAIR              \n");
        printf("========================\n");
        printf(">>> ");
        scanf("%d", &opcao);
        fflush(stdin);
        printf("\n");
        switch(opcao){
            case 1:
                for (i = 0; i < 4; i++){
                    for (j = 0; j < 4; j++){
                        printf("[ %2d ] ", matriz[i][j]);
                    }
                    printf("\n");
                }
                getchar();
                break;
            case 2:
                for (i = 0; i < 4; i++){
                    for (j = 0; j < 4; j++){
                        if (i == j){
                            printf("[ %2d ] ", matriz[i][j]);
                        }else{
                            printf("       ");
                        }
                    }
                    printf("\n");
                }
                getchar();
                break;
            case 3:
                for (i = 0; i < 4; i++){
                    for (j = 0; j < 4; j++){
                        if (i < j){
                            printf("[ %2d ] ", matriz[i][j]);
                        }else{
                            printf("       ");
                        }
                    }
                    printf("\n");
                }
                getchar();
                break;
            case 4:
                for (i = 0; i < 4; i++){
                    for (j = 0; j < 4; j++){
                        if (i > j){
                            printf("[ %2d ] ", matriz[i][j]);
                        }else{
                            printf("       ");
                        }
                    }
                    printf("\n");
                }
                getchar();
                break;
            case 5:
                return 0;
            default:
                printf("OPÇÃO INVALIDA!\n");
                getchar();
                break;
        }
    }while(opcao != 5);
}
