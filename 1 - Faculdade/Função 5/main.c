#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie uma fun��o em C que receba um n�mero n inteiro positivo e retorne a soma de todos
os seus antecessores. Fa�a a chamada da fun��o e imprima o retorno no m�todo main(). */

int SomaAntecessor(int numero){
    int i, soma = 0;
    for (i = numero; i > 0; i--){
        soma += i;
    }
    return soma;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Informe um n�mero: ");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nSoma de todos os antecessores de %d: %d ", numero, SomaAntecessor(numero));
    getchar();
    return 0;
}
