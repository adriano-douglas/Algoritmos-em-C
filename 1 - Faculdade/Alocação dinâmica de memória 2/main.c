#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o que receba um vetor e calcule a m�dia de uma
quantidade qualquer de n�meros informada pelo usu�rio. O programa
(main) deve armazenar esses n�meros em um vetor alocado
dinamicamente, enviar para a fun��o e exibir o resultado. N�o esque�a de
liberar a mem�ria ap�s o uso. */

float media_vetor(int vetor[], int tamanho){
    int i, soma = 0;
    for (i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return (float) soma / tamanho;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, *vetor;
    vetor = (int *) malloc(5 * sizeof(int));
    if (vetor == NULL){
        printf("Erro! ");
        return 1;
    }
    for (i = 0; i < 5; i++){
        printf("Informe o %d� n�mero do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nM�dia dos elementos do vetor: %.2f ", media_vetor(vetor, 5));
    free(vetor);
    vetor = NULL;
    fflush(stdin);
    getchar();
    return 0;
}
