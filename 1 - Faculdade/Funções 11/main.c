#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba um vetor de 10 elementos (gerados randomicamente) com
números de 1 a 10 e um valor inteiro. Altere todos os elementos do vetor multiplicando
o valor da posição pelo número informado. Imprima o vetor alterado no método main(). */

void Alterar_Vetor(int vetor[], int tamanho, int numero){
    int i;
    for (i = 0; i < tamanho; i++){
        vetor[i] *= numero;
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10], i, numero;
    srand(time(NULL));
    printf("Vetor: ");
    for (i = 0; i < 10; i++){
        vetor[i] = rand() % 10 + 1;
        printf("%d ", vetor[i]);
    }
    printf("\n\nInforme um número para múltiplicar todas as posições do vetor: ");
    scanf("%d", &numero);
    fflush(stdin);
    Alterar_Vetor(vetor, 10, numero);
    printf("\nVetor Alterado: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}
