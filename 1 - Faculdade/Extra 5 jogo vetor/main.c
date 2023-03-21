#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  O jogo consiste em um vetor de 5 posi��es preenchidos automaticamente
com n�meros rand�micos de 1 a 10. O usu�rio ter� que acertar 3 n�meros
presentes no vetor e ter� uma �nica chance. Ou seja, se o usu�rio errar
um dos n�meros ele j� perdeu. Ap�s informar os 3 n�meros o programa dever�
informar se o usu�rio ganhou ou perdeu. */

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
        printf("Informe o %d� n�mero: ", i + 1);
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
        printf("\nGanhou! Voc� acertou os 3 n�meros.\n\n");
    }else{
        printf("\nPerdeu! Acertos: %d\n\n", total);
    }
    system("pause");
    return 0;
}
