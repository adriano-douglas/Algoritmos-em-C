#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char resposta2 = 'S';
    do {
        int contador;
        printf("Quantos n�meros voc� deseja informar? ");
        scanf("%d", &contador);
        int vnumeros[contador], i, numero;
        if (contador <= 0){
            resposta2 = 'N';
            system("cls");
        }else{
            printf("\n");
            char resposta = 'n';
            for (i = 0; i < contador; i++){
                printf("Informe o %d� n�mero: ", i + 1);
                scanf("%d", &vnumeros[i]);
            }
            printf("\nInforme o n�mero a ser verificado: ");
            scanf("%d", &numero);
            for (i = 0; i < contador; i++){
                if (numero == vnumeros[i]){
                resposta = 's';
                }
            }
            system("cls");
            if (resposta == 's'){
                printf("O N�MERO %d PERTENCE AO CONJUNTO DOS N�MEROS INFORMADOS ANTERIORMENTE!\n", numero);
            }else{
                printf("O N�MERO %d N�O PERTENCE AO CONJUNTO DOS N�MEROS INFORMADOS ANTERIORMENTE!\n", numero);
            }
            printf("\nCONJUNTO DOS N�MEROS INFORMADOS");
            printf("\n-------------------------------\n");
            for (i = 0; i < contador; i++){
                if (i < contador - 1){
                    printf("%d, ", vnumeros[i]);
                }else{
                    printf("%d.\n\n", vnumeros[i]);
                }
            }
            do {
                printf("VOC� QUER CONTINUAR? [S/N]: ");
                scanf("%s", &resposta2);
                if (resposta2 != 'S' || resposta2 != 'N'){
                    if (resposta2 == 's' || resposta2 == 'n'){
                        system("cls");
                        printf("TALVEZ A TECLA CapsLk ESTEJA DESATIVADA!\n\n");
                    }else{
                        system("cls");
                        printf("OP��O INVALIDA!\n\n");
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
