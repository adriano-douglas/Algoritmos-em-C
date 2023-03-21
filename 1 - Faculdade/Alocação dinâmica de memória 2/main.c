#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que receba um vetor e calcule a média de uma
quantidade qualquer de números informada pelo usuário. O programa
(main) deve armazenar esses números em um vetor alocado
dinamicamente, enviar para a função e exibir o resultado. Não esqueça de
liberar a memória após o uso. */

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
        printf("Informe o %dº número do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nMédia dos elementos do vetor: %.2f ", media_vetor(vetor, 5));
    free(vetor);
    vetor = NULL;
    fflush(stdin);
    getchar();
    return 0;
}
