#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba duas variáveis por referência e troque o valor
das variáveis dentro da função. No método main() solicite ao usuário os valores
das duas variáveis, imprima os valores, faça a chamada da função e imprima
novamente os valores. Importante: A função não tem retorno, já que vai receber
as variáveis por referência e não por valor. */

void Trocar_Valores(int *n1, int *n2)
{
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    printf("Informe o 1º número: ");
    scanf("%d", &n1);
    printf("Informe o 2º número: ");
    scanf("%d", &n2);
    fflush(stdin);
    printf("\nPrimeiro número: %d \nSegundo número:  %d", n1, n2);
    Trocar_Valores(&n1, &n2);
    printf("\n\nPrimeiro número: %d \nSegundo número:  %d ", n1, n2);
    getchar();
    return 0;
}
