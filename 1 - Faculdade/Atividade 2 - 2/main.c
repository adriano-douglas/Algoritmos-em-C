#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Exemplo:
String s informada pelo usuário: ESTE TEXTO AQUI
chAtual = E
chNovo = U
Saída do algoritmo:
USTU TUXTO AQUI
Número de substituições: 3 */

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[100], atual[2], novo[2];
    int i, tamanho, substituicoes = 0;
    printf("Informe uma frase: ");
    gets(string);
    tamanho = strlen(string);
    printf("Informe o caractere a ser substituido: ");
    gets(atual);
    printf("Informe o caractere substituto: ");
    gets(novo);
    for (i = 0; i < tamanho; i++){
        if (string[i] == atual[0]){
            string[i] = novo[0];
            substituicoes++;
        }
    }
    printf("\nNova frase: %s", string);
    printf("\n\nNúmero de substituições: %d", substituicoes);
    getchar();
    return 0;
}
