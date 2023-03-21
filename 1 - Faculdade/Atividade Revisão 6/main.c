#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o que receba 2 vetores de inteiros A e B com com
capacidade para 10 inteiros cada. A fun��o dever� calcular o fatorial de
cada n�mero de A e incluir o resultado na mesma posi��o de B. No m�todo
main, crie os dois vetores, preencha o vetor A com n�meros aleat�rios de
1 a 7, envie os dois vetores para a fun��o e ap�s o retorno imprima o
conte�do dos dois vetores. */

void fatorial_vetores(int vetor1[], int vetor2[]){
    int i, j, fatorial;
    for (i = 0; i < 10; i++){
        fatorial = 1;
        for (j = vetor1[i]; j >= 1; j--){
            fatorial *= j;
        }
        vetor2[i] = fatorial;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor1[10], vetor2[10];
    srand(time(NULL));
    printf("Vetor:    ");
    for (i = 0; i < 10; i++){
        vetor1[i] = rand() % 7 + 1;
        printf("%-6d", vetor1[i]);
    }
    printf("\n\nFatorial: ");
    fatorial_vetores(vetor1, vetor2);
    for (i = 0; i < 10; i++){
        printf("%-6d", vetor2[i]);
    }
    getchar();
    return 0;
}
