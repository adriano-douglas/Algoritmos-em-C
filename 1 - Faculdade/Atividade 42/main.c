#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo que preencha um vetor de 70 posi��es de forma que as
posi��es m�ltiplas de 3 devem ser preenchidas com o n� 10 e as demais devem
ser preenchidas com o n� da posi��o vezes 10. Ao final, imprima o conte�do desse vetor. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[70], i;
    for (i = 0; i < 70; i++){
        vetor[i] = i;
        if (vetor[i] % 3 == 0){
            vetor[i] = 10;
        }else{
            vetor[i] = i * 10;
        }
    }
    for (i = 0; i < 70; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}
