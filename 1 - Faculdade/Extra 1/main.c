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
    printf("[1] - SOMA\n");
    printf("[2] - SUBTRAÇÃO\n");
    printf("[3] - MULTIPLICAÇÃO\n");
    printf("[4] - DIVISÃO\n");
    printf("\nESCOLHA UMA OPÇÃO >> ");
    scanf("%d", &opcao);
    if (opcao > 0 && opcao <= 4){
        printf("\nINFORME O 1º NÚMERO: ");
        scanf("%f", &n1);
        printf("INFORME O 2º NÚMERO: ");
        scanf("%f", &n2);
        switch (opcao){
            case 1:
                operacao = n1 + n2;
                break;
            case 2:
                operacao = n1 - n2;
                break;
            case 3:
                operacao = n1 * n2;
                break;
            case 4:
                operacao = n1 / n2;
                break;
        }
        printf("\nRESULTADO: %.2f\n\n", operacao);
    }else{
        printf("\nOPCÃO INVALIDA!\n\n");
    }
    system("pause");
    return 0;
}
