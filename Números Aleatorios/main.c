#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool Verifica(int vetor[], int tamanhoAtual, int valor){
    int i;
    for (i = 0; i < tamanhoAtual; i++){
        if (vetor[i] == valor){
            return true;
        }
    }
    return false;
}

void GerarAleatorios(int vetor[], int tamanho, int limite){
    srand(time(NULL));
    int i, valor;
    for (i = 0; i < tamanho; i++){
        do {
            valor = rand() % limite + 1;
            vetor[i] = valor;
        }while (Verifica(vetor, i, valor) == true);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, vetor[20];
    GerarAleatorios(vetor, 20, 20);
    for (i = 0; i < 20; i++){
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}
