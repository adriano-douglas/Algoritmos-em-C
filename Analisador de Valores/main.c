#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Digitar 5 valores e mostrar: soma dos valores, média entre os valores,
quantos são divisiveis por 5, quantos são nulos, soma dos pares. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, n, somapar = 0, nulos = 0, divisiveis = 0, valores;
    float soma = 0;
    printf("Informe a quantidade de valores que você deseja analisar: ");
    scanf("%d", &valores);
    printf("\n");
    for (i = 1; i <= valores; i++){
        printf("Informe o %dº número: ", i);
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
    printf("\nSoma dos números informados: %.0f", soma);
    printf("\nMédia dos números informados: %.2f", soma / valores);
    printf("\nNúmeros divisiveis por 5: %d", divisiveis);
    printf("\nNúmeros nulos: %d", nulos);
    printf("\nSoma dos números pares informados: %d\n\n", somapar);
    system("pause");
    return 0;
}
