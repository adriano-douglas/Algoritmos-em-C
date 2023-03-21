#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer um programa que leia duas sequ�ncias de 10 inteiros em dois vetores distintos
 e verifique se um vetor � uma permuta��o do outro, isto �, eles t�m os mesmos elementos,
 mas em ordens diferentes. N�o vale orden�-los previamente. */

int verifica(int vetor[], int numero)
{
    int i;
    for (i = 0; i < 10; i++){
        if (vetor[i] == numero){
            vetor[i] = -1;
            return 1;
        }
    }
    return 0;
}

int verifica_vetores(int vetor[], int vetor2[])
{
    int i;
    for (i = 0; i < 10; i++){
        if (verifica(vetor2, vetor[i]) == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10], vetor2[10], i;
    for (i = 0; i < 10; i++){
        printf("Informe o %d� n�mero do vetor 1: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++){
        printf("Informe o %d� n�mero do vetor 2: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    printf("\nVetor 1: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\nVetor 2: ");
    for (i = 0; i < 10; i++){
        printf("%d ", vetor2[i]);
    }

    if (verifica_vetores(vetor, vetor2) == 1){
        printf("\n\nOs vetores informados s�o iguais! ");
    }else{
        printf("\n\nOs vetores informados s�o diferentes! ");
    }
    fflush(stdin);
    getchar();
    return 0;
}
