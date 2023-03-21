#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Elabore um algoritmo que seja capaz de calcular o fatorial de qualquer número.
O fatorial de um número é a multiplicação desse número por todos os anteriores dele.
Por exemplo:
5! = 5*4*3*2*1 = 120 */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero, i, fatorial = 1;
    printf("Informe um número para ver seu fatorial: ");
    scanf("%d", &numero);
    fflush(stdin);
    for (i = numero; i >= 1; i--){
        fatorial = fatorial * i;
    }
    printf("\nFatorial de %d: %d ", numero, fatorial);
    getchar();
    return 0;
}
