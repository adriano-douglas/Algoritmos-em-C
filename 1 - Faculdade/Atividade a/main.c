#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, n3;
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Infome o segundo n�mero: ");
    scanf("%d", &n2);
    printf("Infome o terceiro n�mero: ");
    scanf("%d", &n3);
    printf("\nResultado de %d x %d - %d = %d\n", n1, n2, n3, n1 * n2 - n3);
    return 0;
}
