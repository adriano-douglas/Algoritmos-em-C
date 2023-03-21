#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Implemente um algoritmo leia 20 números digitados e apresente sua média. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador;
    float media, soma = 0, numero;
    for (contador = 1; contador <= 20; contador++){
        printf("Informe o %dº número: ", contador);
        scanf("%f", &numero);
        soma = soma + numero;
    }
    media = soma / 20;
    printf("\nMédia dos números informados: %.2f\n\n", media);
    system("pause");
    return 0;
}
