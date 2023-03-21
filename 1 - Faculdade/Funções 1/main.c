#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*  Crie uma função que receba um valor e informe se ele é positivo ou não. */

bool par_impar(int numero){
    if (numero % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);
    fflush(stdin);
    if (par_impar(numero)){
        printf("\nO número %d é par!\n", numero);
    }else{
        printf("\nO número %d é ímpar!\n", numero);
    }
    getchar();
    return 0;
}
