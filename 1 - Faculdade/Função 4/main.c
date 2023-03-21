#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie uma fun��o em C que receba um n�mero n inteiro positivo e retorne o seu fatorial.
Fa�a a chamada da fun��o e imprima o retorno no m�todo main(). */

int fatorial(int numero){
    int i, fatorial = 1;
    for (i = numero; i >= 1; i--){
        fatorial *= i;
    }
    return fatorial;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Informe um n�mero para ver seu fatorial: ");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nFatorial de %d: %d ", numero, fatorial(numero));
    getchar();
    return 0;
}
