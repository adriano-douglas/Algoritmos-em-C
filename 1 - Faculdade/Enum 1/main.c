#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie um programa em C que realize o sorteio de um país para ser a sede da copa do mundo.
Para isso, crie uma enum com o nome de 10 países, sendo que o primeiro país receberá o número 1.
Faça um sorteio com números aleatórios entre 1 e 10 e utilize uma estrutura Switch para verificar
 através do nome qual país foi sorteado. */

 enum paises {brasil = 1, alemanha, japao, argentina, australia, belgica, colombia, franca, croacia, espanha};

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n;
    srand(time(NULL));
    n = rand() % 10 + 1;
    printf("País sorteado para ser a sede da copa do mundo: ");
    switch (n){
    case brasil:
        printf("Brasil ");
        break;
    case alemanha:
        printf("Alemanha ");
        break;
    case japao:
        printf("Japão ");
        break;
    case argentina:
        printf("Argentina ");
        break;
    case australia:
        printf("Austrália ");
        break;
    case belgica:
        printf("Bélgica ");
        break;
    case colombia:
        printf("Colômbia ");
        break;
    case franca:
        printf("França ");
        break;
    case croacia:
        printf("Croácia ");
        break;
    case espanha:
        printf("Espanha ");
        break;
    }
    getchar();
    return 0;
}
