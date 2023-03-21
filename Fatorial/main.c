#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, contador;
    printf("Informe um número para ver seu fatorial: ");
    scanf("%d", &n);
    for (contador = 1; n >= 1; n--){
        contador = contador * n;
    }
    printf("%d", contador);
    return 0;
}

