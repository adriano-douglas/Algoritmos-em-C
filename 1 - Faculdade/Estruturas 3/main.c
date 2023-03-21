#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Escreva uma função que receba um número inteiro que representa um intervalo de
tempo medido em minutos e devolva o correspondente do número em horas e minutos
(por exemplo, converte 131 minutos em 2 horas e 11 minutos). Use uma struct como a seguinte:

typedef struct{
int horas;
int minutos;
}hm; */

typedef struct {
    int horas;
    int minutos;
}hm;

hm converte(int minutos)
{
    hm conversao;
    conversao.horas = minutos / 60;
    conversao.minutos = minutos % 60;
    return conversao;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int segundos;
    printf("Informe um valor em minutos: ");
    scanf("%d", &segundos);
    printf("\nValor em hh:mm : %.2d:%.2d ", converte(segundos));
    fflush(stdin);
    getchar();
    return 0;
}
