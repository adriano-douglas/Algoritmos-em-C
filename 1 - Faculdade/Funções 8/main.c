#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o que receba um n�mero inteiro de 100 a 999 e retorne esse n�mero
inteiro invertido. Por exemplo, se o n�mero informado for 123, a fun��o dever�
retornar o n�mero 321. No m�todo main() solicite ao usu�rio um n�mero inteiro,
passe esse n�mero para a fun��o e imprima o n�mero invertido retornado pela fun��o.
Importante: A fun��o receber� um n�mero inteiro e dever� retornar tamb�m um n�mero inteiro. */

int Inverter_numero(int numero)
{
    int a, b, c, invertido;
    a = (int) numero / 100;
    b = ((int) numero / 10) - (10 * a);
    c = numero % 10;
    invertido = c * 100 + b * 10 + a;
    return invertido;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Informe um n�mero inteiro de tr�s digitos: ");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nN�mero Invertido: %.3d ", Inverter_numero(numero));
    getchar();
    return 0;
}
