#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que simule uma calculadora, fornecendo as op��es de soma,
subtra��o, multiplica��o e divis�o. Neste programa, ter� um menu onde o usu�rio
escolher� a op��o desejada e a seguir fornecer� os dois n�meros para o c�lculo
(conforme a opera��o selecionada). A sa�da do seu programa ser� o c�lculo correto.
Utilize a instru��o switch case para controlar o menu do seu programa. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao;
    float n1, n2, operacao;
    printf("CALCULADORA\n\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRA��O\n");
    printf("3 - MULTIPLICA��O\n");
    printf("4 - DIVIS�O\n");
    printf("\nESCOLHA UMA OP��O >> ");
    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            printf("\nINFORME O 1� N�MERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2� N�MERO: ");
            scanf("%f", &n2);
            operacao = n1 + n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        case 2:
            printf("\nINFORME O 1� N�MERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2� N�MERO: ");
            scanf("%f", &n2);
            operacao = n1 - n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        case 3:
            printf("\nINFORME O 1� N�MERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2� N�MERO: ");
            scanf("%f", &n2);
            operacao = n1 * n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        case 4:
            printf("\nINFORME O 1� N�MERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2� N�MERO: ");
            scanf("%f", &n2);
            operacao = n1 / n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        default:
            printf("\nOP��O INVALIDA!\n\n");
    }
    system("pause");
    return 0;
}
