#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba um vetor de tamanho 30 (gerado randomicamente)
com números de 1 a 100 e um valor inteiro. Retorne quantas vezes o número inteiro
está presente no vetor. Exiba o retorno no método main(). */

int Verifica_Vetor(int vetor[], int tamanho, int numero){
    int i, soma = 0;
    for (i = 0; i < tamanho; i++){
        if (vetor[i] == numero){
            soma++;
        }
    }
    return soma;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[30], i, numero;
    srand(time(NULL));
    printf("Informe um número para ser verificado no vetor: ");
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nVetor: ");
    for (i = 0; i < 30; i++){
        vetor[i] = rand() % 100 + 1;
        printf("%d ", vetor[i]);
    }
    if (Verifica_Vetor(vetor, 30, numero) == 0){
        printf("\n\nO número %d não foi encontrado no vetor! ", numero);
    }else if (Verifica_Vetor(vetor , 30, numero) == 1){
        printf("\n\nO número %d foi encontrado 1 vez no vetor! ", numero);
    }else{
        printf("\n\nO número %d foi encontrado %d vezes no vetor! ", numero, Verifica_Vetor(vetor, 30, numero));
    }
    getchar();
    return 0;
}
