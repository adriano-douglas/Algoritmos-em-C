#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma fun��o que receba uma string como par�metro e retorne
quantas vogais essa string possui. No m�todo main(), crie uma string,
solicite ao usu�rio o preenchimento da string, envie para a fun��o e
imprima o retorno contendo o n�mero de vogais da string. */

int conta_vogais(char string[]){
    int i, vogais = 0;
    for (i = 0; i < strlen(string); i++){
        switch (string[i]){
            case 'A': vogais++; break;
            case 'a': vogais++; break;
            case 'E': vogais++; break;
            case 'e': vogais++; break;
            case 'I': vogais++; break;
            case 'i': vogais++; break;
            case 'O': vogais++; break;
            case 'o': vogais++; break;
            case 'U': vogais++; break;
            case 'u': vogais++; break;
        }
    }
    return vogais;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[150];
    printf("Informe uma frase: ");
    fgets(string, 150, stdin);
    printf("\n%s\n", string);
    printf("N�mero de vogais: %d ", conta_vogais(string));
    fflush(stdin);
    getchar();
    return 0;
}
