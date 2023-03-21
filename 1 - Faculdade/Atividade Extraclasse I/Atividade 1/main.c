#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Fa�a um algoritmo para calcular o imposto de renda a ser pago por um contribuinte, considerando:

a. Ser� fornecido o CPF, o n� de dependentes, renda anual.
b. Ser� feito um desconto de R$ 1.500,00 por dependente.
c. Os valores da al�quota para o c�lculo do imposto s�o:

Renda L�quida
Al�quota at� R$ 28.000,00     isento
de R$ 28.000,01 a 40.000,00   15%
de R$ 40.000,01 a 50.000,00   10%
acima de R$ 50.000,00         27,5%
Renda l�quida= renda anual � desconto por dependente.

d. Imprimir o CPF e o Imposto a ser pago pelo contribuinte. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n_dependentes;
    float renda_a, imposto, liquida;
    char cpf[12];
    printf("Informe o CPF: ");
    gets(cpf);
    printf("Informe o n� de dependentes: ");
    scanf("%d", &n_dependentes);
    printf("Informe a renda anual: ");
    scanf("%f", &renda_a);
    liquida = renda_a - (n_dependentes * 1500);
    if (liquida <= 28000){
        imposto = 0;
    }else if (liquida > 28000 && liquida <= 40000){
        imposto = liquida * 0.15;
    }else if (liquida > 40000 && liquida <= 50000){
        imposto = liquida * 0.1;
    }else{
        imposto = liquida * 0.275;
    }
    printf("\nCPF INFORMADO: %s\n\n", cpf);
    if (imposto != 0){
        printf("VALOR DO IMPOSTO: R$ %.2f\n", imposto);
    }else{
        printf("ISENTO DE PAGAR IMPOSTO DE RENDA!\n");
    }
    fflush(stdin);
    getchar();
    return 0;
}
