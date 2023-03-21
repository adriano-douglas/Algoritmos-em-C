#include <stdio.h>
#include <stdlib.h>

/* A fun��o fatorial duplo � definida como o produto de todos os n�meros naturais
�mpares de 1 at� algum n�mero natural �mpar N. Assim, o fatorial duplo de 5 � 5!! =
1 * 3 * 5 = 15. Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo impar
 N e retorne o fatorial duplo desse n�mero. */

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
