#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa para ler 5 valores inteiros, armazená-los em um vetor e, em seguida,
mostre na tela os valores lidos na ordem inversa. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[5];
    for (i = 0; i < 5; i++){
        printf("Informe o %dº número do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nVETOR NA ORDEM INVERSA:\n\n");
    for (i = 4; i >= 0; i--){
        printf("[ %d ] ", vetor[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
