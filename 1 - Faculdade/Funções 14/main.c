#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma fun��o em linguagem C chamada dado() que retorna, atrav�s de sorteio,
um n�mero de 1 at� 6. No m�todo main(), use a fun��o para lan�ar o dado 100 mil
vezes e conte quantas vezes cada n�mero saiu. Exiba a quantidade e a porcentagem
de cada n�mero (1 a 6) em rela��o ao total de lan�amentos. A probabilidade deu certo?
Ou seja, a porcentagem dos n�meros foi parecida? */

int dado(){
    return rand() % 6 + 1;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0, i, n;
    srand(time(NULL));
    for (i = 0; i < 100000; i++){
        n = dado();
        if (n == 1){
            um++;
        }else if (n == 2){
            dois++;
        }else if (n == 3){
            tres++;
        }else if (n == 4){
            quatro++;
        }else if (n == 5){
            cinco++;
        }else{
            seis++;
        }
    }
    printf("N�mero de vezes em que cada face do dado apareceu e a %% em rela��o ao total de lan�amentos: \n\n");
    n = 100000;
    printf("Face Um:       %d    %.3f%% \n", um, (float) um / n * 100);
    printf("Face Dois:     %d    %.3f%% \n", dois, (float) dois / n * 100);
    printf("Face Tr�s:     %d    %.3f%% \n", tres, (float) tres / n * 100);
    printf("Face Quatro:   %d    %.3f%% \n", quatro, (float) quatro / n * 100);
    printf("Face Cinco:    %d    %.3f%% \n", cinco, (float) cinco / n * 100);
    printf("Face Seis:     %d    %.3f%% \n", seis, (float) seis / n * 100);
    getchar();
    return 0;
}
