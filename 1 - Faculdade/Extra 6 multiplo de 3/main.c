#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um algoritmo que preencha um vetor de 30 posições com números de 1 a 100 gerados aleatoriamente
(através da função rand()). A restrição é que os números guardados devem ser múltiplos de 3. Ou seja,
para cada novo número gerado, deve-se verificar se esse número é múltiplo de 3 antes de guardar no vetor.
Se não for múltiplo de 3, deve-se gerar um novo número e verificar novamente (até se encontrar um número
                                                                                 que seja múltiplo de 3).
Resumindo: O vetor terá 30 números múltiplos de 3 gerados aleatoriamente. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[30];
    srand(time(NULL));
    printf(" VETOR DE NÚMEROS MÚLTIPLOS DE 3 \n");
    printf("---------------------------------\n");
    for (i = 0; i < 30; i++){
        do {
            vetor[i] = rand() % 100 + 1;
        }while (vetor[i] % 3 != 0);
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
