#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função em linguagem C chamada dado() que retorna, através de sorteio,
um número de 1 até 6. No método main(), use a função para lançar o dado 100 mil
vezes e conte quantas vezes cada número saiu. Exiba a quantidade e a porcentagem
de cada número (1 a 6) em relação ao total de lançamentos. A probabilidade deu certo?
Ou seja, a porcentagem dos números foi parecida? */

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
    printf("Número de vezes em que cada face do dado apareceu e a %% em relação ao total de lançamentos: \n\n");
    n = 100000;
    printf("Face Um:       %d    %.3f%% \n", um, (float) um / n * 100);
    printf("Face Dois:     %d    %.3f%% \n", dois, (float) dois / n * 100);
    printf("Face Três:     %d    %.3f%% \n", tres, (float) tres / n * 100);
    printf("Face Quatro:   %d    %.3f%% \n", quatro, (float) quatro / n * 100);
    printf("Face Cinco:    %d    %.3f%% \n", cinco, (float) cinco / n * 100);
    printf("Face Seis:     %d    %.3f%% \n", seis, (float) seis / n * 100);
    getchar();
    return 0;
}
