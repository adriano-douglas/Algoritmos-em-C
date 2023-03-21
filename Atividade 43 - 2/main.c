#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char resposta2 = 'S';
    do {
        int contador;
        printf("Quantos números você deseja informar? ");
        scanf("%d", &contador);
        int vnumeros[contador], i, numero;
        if (contador <= 0){
            resposta2 = 'N';
            system("cls");
        }else{
            printf("\n");
            char resposta = 'n';
            for (i = 0; i < contador; i++){
                printf("Informe o %dº número: ", i + 1);
                scanf("%d", &vnumeros[i]);
            }
            printf("\nInforme o número a ser verificado: ");
            scanf("%d", &numero);
            for (i = 0; i < contador; i++){
                if (numero == vnumeros[i]){
                resposta = 's';
                }
            }
            system("cls");
            if (resposta == 's'){
                printf("O NÚMERO %d PERTENCE AO CONJUNTO DOS NÚMEROS INFORMADOS ANTERIORMENTE!\n", numero);
            }else{
                printf("O NÚMERO %d NÃO PERTENCE AO CONJUNTO DOS NÚMEROS INFORMADOS ANTERIORMENTE!\n", numero);
            }
            printf("\nCONJUNTO DOS NÚMEROS INFORMADOS");
            printf("\n-------------------------------\n");
            for (i = 0; i < contador; i++){
                if (i < contador - 1){
                    printf("%d, ", vnumeros[i]);
                }else{
                    printf("%d.\n\n", vnumeros[i]);
                }
            }
            do {
                printf("VOCÊ QUER CONTINUAR? [S/N]: ");
                scanf("%s", &resposta2);
                if (resposta2 != 'S' || resposta2 != 'N'){
                    if (resposta2 == 's' || resposta2 == 'n'){
                        system("cls");
                        printf("TALVEZ A TECLA CapsLk ESTEJA DESATIVADA!\n\n");
                    }else{
                        system("cls");
                        printf("OPÇÃO INVALIDA!\n\n");
                    }
                }
            }while (resposta2 != 'N' && resposta2 != 'S');
            system("cls");
        }
    }while (resposta2 != 'N');
    printf("SAINDO. . .\n\n");
    system("pause");
    return 0;
}
