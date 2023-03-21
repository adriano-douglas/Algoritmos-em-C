#include <stdio.h>
#include <stdlib.h>

/* Crie uma função recursiva que receba um número n e retorne a soma de todos os anteriores
incluindo o próprio número. Ex.: Se o n for 5, o retorno será 15 (5 + 4 + 3 + 2 + 1) */

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
