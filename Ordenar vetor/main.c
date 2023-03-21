#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, j, vetor[10], aux;
    for (i = 0; i < 10; i++){
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 9; i++){
        for (j = i + 1; j < 10; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    fflush(stdin);
    printf("\nNÚMEROS EM ORDEM CRESCENTE\n\n");
    for (i = 0; i < 10; i++){
        printf("%d  ", vetor[i]);
    }
    getchar();
    return 0;
}
