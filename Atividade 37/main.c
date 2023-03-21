#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um algoritmo que determine o valor de S, em que:
 S = 1/1 – 2/4 + 3/9 – 4/16 + 5/25 – 6/36 … - 10/100 */

int main()
{
    setlocale(LC_ALL, "portuguese");
    float D, D2, n1, n2, soma = 0, soma2 = 0;
    for (n1 = 1; n1 <= 9; n1 = n1 + 2){
        D = n1 / (n1 * n1);
        soma = D + soma;
    }
    for (n2 = 2; n2 <= 10; n2 = n2 + 2){
        D2 = n2 / (n2 * n2);
        soma2 = D2 + soma2;
    }
    printf("Resultado: %f\n\n", soma - soma2);
    system("pause");
    return 0;
}
