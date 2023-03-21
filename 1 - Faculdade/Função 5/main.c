#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie uma função em C que receba um número n inteiro positivo e retorne a soma de todos
os seus antecessores. Faça a chamada da função e imprima o retorno no método main(). */

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
    printf("Informe um número: ");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nSoma de todos os antecessores de %d: %d ", numero, SomaAntecessor(numero));
    getchar();
    return 0;
}
