#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie uma função em C que receba um número n inteiro positivo e retorne o seu fatorial.
Faça a chamada da função e imprima o retorno no método main(). */

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
    printf("Informe um número para ver seu fatorial: ");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nFatorial de %d: %d ", numero, fatorial(numero));
    getchar();
    return 0;
}
