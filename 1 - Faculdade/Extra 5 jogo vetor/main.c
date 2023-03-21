#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  O jogo consiste em um vetor de 5 posições preenchidos automaticamente
com números randômicos de 1 a 10. O usuário terá que acertar 3 números
presentes no vetor e terá uma única chance. Ou seja, se o usuário errar
um dos números ele já perdeu. Após informar os 3 números o programa deverá
informar se o usuário ganhou ou perdeu. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, j, contador, vetor[5], numeros[3], resultado[3], total = 0;
    srand(time(NULL));
    for (i = 0; i < 5; i++){
        vetor[i] = rand()%10 + 1;
        printf("[ %d ] ", vetor[i]);
    }
    printf("\n\n");
    for (i = 0; i < 3; i++){
        contador = 0;
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        for (j = 0; j < 5; j++){
            if (vetor[j] == numeros[i]){
                contador = 1;
            }
        }
        resultado[i] = contador;
        total += resultado[i];
    }
    if (total >= 3){
        printf("\nGanhou! Você acertou os 3 números.\n\n");
    }else{
        printf("\nPerdeu! Acertos: %d\n\n", total);
    }
    system("pause");
    return 0;
}
