#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie um programa em C que realize o sorteio de um pa�s para ser a sede da copa do mundo.
Para isso, crie uma enum com o nome de 10 pa�ses, sendo que o primeiro pa�s receber� o n�mero 1.
Fa�a um sorteio com n�meros aleat�rios entre 1 e 10 e utilize uma estrutura Switch para verificar
 atrav�s do nome qual pa�s foi sorteado. */

 enum paises {brasil = 1, alemanha, japao, argentina, australia, belgica, colombia, franca, croacia, espanha};

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n;
    srand(time(NULL));
    n = rand() % 10 + 1;
    printf("Pa�s sorteado para ser a sede da copa do mundo: ");
    switch (n){
    case brasil:
        printf("Brasil ");
        break;
    case alemanha:
        printf("Alemanha ");
        break;
    case japao:
        printf("Jap�o ");
        break;
    case argentina:
        printf("Argentina ");
        break;
    case australia:
        printf("Austr�lia ");
        break;
    case belgica:
        printf("B�lgica ");
        break;
    case colombia:
        printf("Col�mbia ");
        break;
    case franca:
        printf("Fran�a ");
        break;
    case croacia:
        printf("Cro�cia ");
        break;
    case espanha:
        printf("Espanha ");
        break;
    }
    getchar();
    return 0;
}
