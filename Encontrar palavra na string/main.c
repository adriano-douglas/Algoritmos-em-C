#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int comparar(char string[], char palavra[], int indice){
    for (int i = indice + 1, j = 1; j < strlen(palavra) - 1; i++, j++){
        if (string[i] != palavra[j]){
            return 0;
        }
    }
    return 1;
}

int procurar_palavra(char string[], char palavra[]){
    int i, cont = 0;
    if (strlen(string) >= strlen(palavra)){
        for (i = 0; i < strlen(string) - strlen(palavra) + 1; i++){
            if (palavra[0] == string[i] && comparar(string, palavra, i) == 1){
                cont++;
                i += strlen(palavra) - 2;
            }
        }
    }
    palavra[strlen(palavra) - 1] = '\0';
    string[strlen(string) - 1] = '\0';
    return cont;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[1000], palavra[25];
    int cont;
    printf("Informe uma frase: ");
    fgets(string, 1000, stdin);
    printf("\nInforme a palavra a ser buscada: ");
    fgets(palavra, 25, stdin);
    cont = procurar_palavra(string, palavra);
    if (cont != 0){
        printf("\nTotal de vezes que a palavra \"%s\" foi encontrada na frase: %d ", palavra, cont);
    }else{
        printf("\nA palavra \"%s\" não foi encontrada na frase! ", palavra);
    }
    getchar();
    return 0;
}
