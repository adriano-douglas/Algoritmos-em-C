#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float r, h, area;
    printf("Informe o valor em metros do raio do cilindro: ");
    scanf("%f", &r),
    printf("Informe o valor em metros da altura do cilindro: ");
    scanf("%f", &h);
    area = 2 * 3.14 * r * (r + h);
    printf("\n¡rea do cilindro: %.2f\n", area);
    return 0;
}
