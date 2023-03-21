#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n0 = 0, n1 = 1, i, aux, contador;
    printf("Informe quantos números da Sequência de Fibonacci você quer ver: ");
    scanf("%d", &contador);
    printf("\nSequência de Fibonacci: %d, %d", n0, n1);
    for (i = 1; i <= contador - 2; i++){
        aux = n0 + n1;
        n0 = n1;
        n1 = aux;
        printf(", %d", aux);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
