#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*  Crie uma fun��o que receba um valor e informe se ele � positivo ou n�o. */

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
    printf("Informe um n�mero: ");
    scanf("%d", &numero);
    fflush(stdin);
    if (par_impar(numero)){
        printf("\nO n�mero %d � par!\n", numero);
    }else{
        printf("\nO n�mero %d � �mpar!\n", numero);
    }
    getchar();
    return 0;
}
