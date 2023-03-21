#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um algoritmo que leia o sal�rio de 100 funcion�rios e escreva:
a) quantos funcion�rios recebem mais de R$2.000,00;
b) quanto a empresa gasta com estes funcion�rios.
c) quanto a empresa gastaria se fosse dar um aumento de 7,5% aos funcion�rios que recebem menos que R$2.000,00. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador, contMais = 0;
    float salario, salarioTotal = 0, salarioMenos = 0;
    for (contador = 1; contador <= 100; contador++){
        printf("Informe o sal�rio do %d� funcion�rio: R$", contador);
        scanf("%f", &salario);
        salarioTotal += salario;
        if (salario > 2000){
            contMais += 1;
        }else{
            salarioMenos += salario;
        }
    }
    printf("\nTotal de funcion�rios que recebem mais de R$2000,00: %d\n", contMais);
    printf("\nGasto total da empresa com os funcionarios: R$%.2f\n", salarioTotal);
    printf("\nCom um aumento de 7,5%% aos funcion�rios que recebem R$2000,00 ou menos a empresa gastaria: R$%.2f\n\n", (salarioTotal - salarioMenos) + (salarioMenos * 1.075));
    system("pause");
    return 0;
}
