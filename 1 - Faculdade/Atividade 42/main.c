#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo que preencha um vetor de 70 posições de forma que as
posições múltiplas de 3 devem ser preenchidas com o nº 10 e as demais devem
ser preenchidas com o nº da posição vezes 10. Ao final, imprima o conteúdo desse vetor. */

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
