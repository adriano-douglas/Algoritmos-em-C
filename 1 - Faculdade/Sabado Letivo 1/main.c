#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa na linguagem C que atrav�s do n�mero de horas
trabalhadas, o valor do sal�rio m�nimo e o n�mero de horas extras trabalhadas,
calcule e mostre o sal�rio a receber seguindo as regras abaixo:
 A hora trabalhada vale 1/8 do sal�rio m�nimo;
 A hora extra vale 1/4 do sal�rio m�nimo;
 O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 A quantia a receber pelas horas extras equivale ao n�mero de horas extras trabalhadas, multiplicado pelo valor da hora extra;
 O sal�rio a receber equivale ao sal�rio bruto mais a quantia a receber pelas horas extras. */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salarioM, horasT, horasE, salariobruto, quantiaextra;
    printf("Informe o valor do sal�rio minimo: R$");
    scanf("%f", &salarioM);
    printf("Informe quantas horas foram trabalhadas: ");
    scanf("%f", &horasT);
    printf("Informe quantas horas extras foram trabalhadas: ");
    scanf("%f", &horasE);
    salariobruto = horasT * (salarioM / 8);
    quantiaextra = horasE * (salarioM / 4);
    printf("\nSal�rio a receber: R$%.2f\n\n", salariobruto + quantiaextra);
    system("pause");
    return 0;
}
