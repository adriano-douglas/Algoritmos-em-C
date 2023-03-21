#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Digitar 5 valores e mostrar: soma dos valores, m�dia entre os valores,
quantos s�o divisiveis por 5, quantos s�o nulos, soma dos pares. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, n, somapar = 0, nulos = 0, divisiveis = 0, valores;
    float soma = 0;
    printf("Informe a quantidade de valores que voc� deseja analisar: ");
    scanf("%d", &valores);
    printf("\n");
    for (i = 1; i <= valores; i++){
        printf("Informe o %d� n�mero: ", i);
        scanf("%d", &n);
        soma += n;
        if (n % 5 == 0){
            divisiveis += 1;
        }
        if (n == 0){
            nulos += 1;
        }
        if (n % 2 == 0){
            somapar += n;
        }
    }
    printf("\nSoma dos n�meros informados: %.0f", soma);
    printf("\nM�dia dos n�meros informados: %.2f", soma / valores);
    printf("\nN�meros divisiveis por 5: %d", divisiveis);
    printf("\nN�meros nulos: %d", nulos);
    printf("\nSoma dos n�meros pares informados: %d\n\n", somapar);
    system("pause");
    return 0;
}
