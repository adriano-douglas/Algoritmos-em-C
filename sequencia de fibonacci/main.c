#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n0 = 0, n1 = 1, i, aux, contador;
    printf("Informe quantos n�meros da Sequ�ncia de Fibonacci voc� quer ver: ");
    scanf("%d", &contador);
    printf("\nSequ�ncia de Fibonacci: %d, %d", n0, n1);
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
