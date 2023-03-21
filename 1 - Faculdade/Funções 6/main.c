#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie uma função que recebe a média final de um aluno por parâmetro (por valor)
e retorna o seu conceito, conforme a tabela abaixo:
Nota Conceito de 0,0 a 4,9 D de 5,0 a 6,9 C de 7,0 a 8,9 B de 9,0 a 10,0 A */

char Nota_Conceito(float notamedia){
    if (notamedia >= 0 && notamedia < 5){
        return 'D';
    }else if (notamedia >= 5 && notamedia < 7){
        return 'C';
    }else if (notamedia >= 7 && notamedia < 9){
        return 'B';
    }else if (notamedia >= 9 && notamedia <= 10){
        return 'A';
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float nota;
    printf("Informe sua nota média: ");
    scanf("%f", &nota);
    fflush(stdin);
    printf("\nNota Conceito: %c ", Nota_Conceito(nota));
    getchar();
    return 0;
}
