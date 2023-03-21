#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um algoritmo que preencha um vetor de 30 posi��es com n�meros de 1 a 100 gerados aleatoriamente
(atrav�s da fun��o rand()). A restri��o � que os n�meros guardados devem ser m�ltiplos de 3. Ou seja,
para cada novo n�mero gerado, deve-se verificar se esse n�mero � m�ltiplo de 3 antes de guardar no vetor.
Se n�o for m�ltiplo de 3, deve-se gerar um novo n�mero e verificar novamente (at� se encontrar um n�mero
                                                                                 que seja m�ltiplo de 3).
Resumindo: O vetor ter� 30 n�meros m�ltiplos de 3 gerados aleatoriamente. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[30];
    srand(time(NULL));
    printf(" VETOR DE N�MEROS M�LTIPLOS DE 3 \n");
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
