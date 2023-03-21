#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao, contador;
    do{
        printf("===================\n");
        printf("|      MENU       |\n");
        printf("===================\n");
        printf("|  [1] De 1 a 10  |\n");
        printf("|  [2] De 10 a 1  |\n");
        printf("|  [3] Sair       |\n");
        printf("===================\n");
        printf(">>> ");
        scanf("%d", &opcao);
        printf("\n");
        if (opcao != 3){
            switch (opcao){
                case 1:
                    contador = 1;
                    do {
                        printf("%d.. ", contador);
                        contador++;
                    }while (contador <= 10);
                    break;
                case 2:
                    contador = 10;
                    do {
                        printf("%d.. ", contador);
                        contador--;
                    }while (contador >= 1);
                    break;
                default:
                    printf("Opção Invalida!");
                    break;
            }
            printf("\n\n");
    }
    }while(opcao != 3);
    printf("SAINDO. . .\n\n");
    system("pause");
    return 0;
}
