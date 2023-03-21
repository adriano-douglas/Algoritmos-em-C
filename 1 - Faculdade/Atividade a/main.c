#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, n3;
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Infome o segundo número: ");
    scanf("%d", &n2);
    printf("Infome o terceiro número: ");
    scanf("%d", &n3);
    printf("\nResultado de %d x %d - %d = %d\n", n1, n2, n3, n1 * n2 - n3);
    return 0;
}
