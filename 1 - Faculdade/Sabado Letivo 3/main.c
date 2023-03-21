#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na
tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a
contagem terminar. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador = 10;
    while (contador >= 0){
        if (contador >= 1){
            printf("%d, ", contador);
        }else{
            printf("%d.", contador);
        }
        contador--;
    }
    printf("\n\nFIM!\n\n");
    system("pause");
    return 0;
}
