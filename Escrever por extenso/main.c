#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int n, sucessor, antecessor;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe um número inteiro entre 1 e 10: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 10){
        sucessor = n + 1;
        antecessor = n - 1;
        printf("\nNúmero Informado: ");
        switch (n){
            case 1:
                printf("Um\n");
                break;
            case 2:
                printf("Dois\n");
                break;
            case 3:
                printf("Três\n");
                break;
            case 4:
                printf("Quatro\n");
                break;
            case 5:
                printf("Cinco\n");
                break;
            case 6:
                printf("Seis\n");
                break;
            case 7:
                printf("Sete\n");
                break;
            case 8:
                printf("Oito\n");
                break;
            case 9:
                printf("Nove\n");
                break;
            case 10:
                printf("Dez\n");
                break;
        }
        printf("\nSucessor: %d\n", sucessor);
        printf("\nAntecessor: %d\n\n", antecessor);
    }else{
        printf("\nNúmero Invalido!\n\n");
    }
    system("pause");
    return 0;
}
