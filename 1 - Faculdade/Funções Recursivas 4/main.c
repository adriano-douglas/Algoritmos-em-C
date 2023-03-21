#include <stdio.h>
#include <stdlib.h>

/* A função fatorial duplo é definida como o produto de todos os números naturais
ímpares de 1 até algum número natural ímpar N. Assim, o fatorial duplo de 5 é 5!! =
1 * 3 * 5 = 15. Faça uma função recursiva que receba um número inteiro positivo impar
 N e retorne o fatorial duplo desse número. */

int fatorial_duplo(int numero)
{
        if (numero == 1){
            return 1;
        }else{
            return numero * fatorial_duplo(numero - 2);
        }
}

int main()
{
    int n;
    printf("Informe um numero impar para ver seu fatorial duplo: ");
    scanf("%d", &n);
    printf("\nFatorial duplo de %d: %d ", n, fatorial_duplo(n));
    fflush(stdin);
    getchar();
    return 0;
}
