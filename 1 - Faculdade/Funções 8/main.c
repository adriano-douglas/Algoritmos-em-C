#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba um número inteiro de 100 a 999 e retorne esse número
inteiro invertido. Por exemplo, se o número informado for 123, a função deverá
retornar o número 321. No método main() solicite ao usuário um número inteiro,
passe esse número para a função e imprima o número invertido retornado pela função.
Importante: A função receberá um número inteiro e deverá retornar também um número inteiro. */

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
    printf("Informe um número inteiro de três digitos: ");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nNúmero Invertido: %.3d ", Inverter_numero(numero));
    getchar();
    return 0;
}
