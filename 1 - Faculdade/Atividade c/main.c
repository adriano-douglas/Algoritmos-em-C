#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float salario;
    printf("Informe o valor do sal�rio do funcion�rio: R$");
    scanf("%f", &salario);
    printf("\nValor das f�rias: R$%.2f\n", salario + salario/3);
    return 0;
}
