#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa na linguagem C que através do número de horas
trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas,
calcule e mostre o salário a receber seguindo as regras abaixo:
 A hora trabalhada vale 1/8 do salário mínimo;
 A hora extra vale 1/4 do salário mínimo;
 O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas, multiplicado pelo valor da hora extra;
 O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras. */

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salarioM, horasT, horasE, salariobruto, quantiaextra;
    printf("Informe o valor do salário minimo: R$");
    scanf("%f", &salarioM);
    printf("Informe quantas horas foram trabalhadas: ");
    scanf("%f", &horasT);
    printf("Informe quantas horas extras foram trabalhadas: ");
    scanf("%f", &horasE);
    salariobruto = horasT * (salarioM / 8);
    quantiaextra = horasE * (salarioM / 4);
    printf("\nSalário a receber: R$%.2f\n\n", salariobruto + quantiaextra);
    system("pause");
    return 0;
}
