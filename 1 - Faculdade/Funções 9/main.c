#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o que receba duas vari�veis por refer�ncia e troque o valor
das vari�veis dentro da fun��o. No m�todo main() solicite ao usu�rio os valores
das duas vari�veis, imprima os valores, fa�a a chamada da fun��o e imprima
novamente os valores. Importante: A fun��o n�o tem retorno, j� que vai receber
as vari�veis por refer�ncia e n�o por valor. */

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
    printf("Informe o 1� n�mero: ");
    scanf("%d", &n1);
    printf("Informe o 2� n�mero: ");
    scanf("%d", &n2);
    fflush(stdin);
    printf("\nPrimeiro n�mero: %d \nSegundo n�mero:  %d", n1, n2);
    Trocar_Valores(&n1, &n2);
    printf("\n\nPrimeiro n�mero: %d \nSegundo n�mero:  %d ", n1, n2);
    getchar();
    return 0;
}
