#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Leia o valor do salário de uma pessoa e o valor de um financiamento pretendido.
Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa,
o algoritmo deverá escrever "Financiamento Concedido";
senão, ele deverá escrever "Financiamento Negado“. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    float salario, financiamento;
    printf("Informe o valor do salário: ");
    scanf("%f", &salario);
    printf("Informe o valor pretendido do financiamento: ");
    scanf("%f", &financiamento);
    if (financiamento <= salario * 5){
        printf("\nFinanciamento Concedido!\n\n");
    }else{
        printf("\nFinanciamento Negado!\n\n");
    }
    system("pause");
    return 0;
}
