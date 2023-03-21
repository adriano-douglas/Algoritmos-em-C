#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Por exemplo: com uma troca de três posições, A seria substituído por D, B se tornaria E, e assim por diante.
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[100];
    int i, j;
    printf(" CÓDIGO DE CÉSAR \n");
    printf("-----------------\n");
    printf("Informe a frase a ser códificada: ");
    gets(string);
    for (i = 0; i < strlen(string); i++){
        j = string[i];
        if ((j >= 88 && j <= 90) || (j >= 120 && j <= 122)){
            string[i] = j - 23;
        }else if (string[i] == ' '){
            string[i] = j;
        }else{
            string[i] = j + 3;
        }
    }
    printf("\nFrase Códificada: %s", string);
    getchar();
    return 0;
}
