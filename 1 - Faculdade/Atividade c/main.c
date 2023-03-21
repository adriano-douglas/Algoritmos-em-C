#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float salario;
    printf("Informe o valor do salário do funcionário: R$");
    scanf("%f", &salario);
    printf("\nValor das férias: R$%.2f\n", salario + salario/3);
    return 0;
}
