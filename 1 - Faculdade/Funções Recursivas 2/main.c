#include <stdio.h>
#include <stdlib.h>

/* Crie uma fun��o recursiva que receba um n�mero n e retorne a soma de todos os anteriores
incluindo o pr�prio n�mero. Ex.: Se o n for 5, o retorno ser� 15 (5 + 4 + 3 + 2 + 1) */

int soma_anteriores(int numero)
{
    if (numero == 1){
        return 1;
    }else{
        return numero + soma_anteriores(numero - 1);
    }
}

int main()
{
    printf("%d ", soma_anteriores(5));
    getchar();
    return 0;
}
