#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que simule uma calculadora, fornecendo as opções de soma,
subtração, multiplicação e divisão. Neste programa, terá um menu onde o usuário
escolherá a opção desejada e a seguir fornecerá os dois números para o cálculo
(conforme a operação selecionada). A saída do seu programa será o cálculo correto.
Utilize a instrução switch case para controlar o menu do seu programa. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao;
    float n1, n2, operacao;
    printf("CALCULADORA\n\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRAÇÃO\n");
    printf("3 - MULTIPLICAÇÃO\n");
    printf("4 - DIVISÃO\n");
    printf("\nESCOLHA UMA OPÇÃO >> ");
    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            printf("\nINFORME O 1º NÚMERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2º NÚMERO: ");
            scanf("%f", &n2);
            operacao = n1 + n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        case 2:
            printf("\nINFORME O 1º NÚMERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2º NÚMERO: ");
            scanf("%f", &n2);
            operacao = n1 - n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        case 3:
            printf("\nINFORME O 1º NÚMERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2º NÚMERO: ");
            scanf("%f", &n2);
            operacao = n1 * n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        case 4:
            printf("\nINFORME O 1º NÚMERO: ");
            scanf("%f", &n1);
            printf("INFORME O 2º NÚMERO: ");
            scanf("%f", &n2);
            operacao = n1 / n2;
            printf("\nRESULTADO: %.2f\n\n", operacao);
            break;
        default:
            printf("\nOPÇÃO INVALIDA!\n\n");
    }
    system("pause");
    return 0;
}
