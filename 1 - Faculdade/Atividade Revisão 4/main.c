#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um algoritmo que leia uma data no formato “DD/MM/AAAA”, armazene em
uma string e copie o dia, mês e ano para 3 variáveis inteiras. Porém, antes
de copiar é preciso verificar se as barras estão no lugar correto. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    char string[11], resp;
    int i, d = 0, m = 0, a = 0, dia[3], mes[3], ano[5];
    do {
        system("clear || cls");
        printf("INFORME UMA DATA NO FORMATO DD/MM/AAAA: ");
        gets(string);
        fflush(stdin);
        if (string[2] != '/' || string[5] != '/'){
            printf("\nERRO: AS BARRAS DE SEPARAÇÃO NÃO FORAM ENCONTRADAS NO LOCAL CORRETO! ");
            printf("\n\nVocê que tentar novamente? [S/N] ");
            scanf("%c", &resp);
            fflush(stdin);
        }else{
            resp = 'n';
            for (i = 0; i <= strlen(string); i++){
                if (i <= 1){
                    dia[d] = string[i];
                    d++;
                }else if (i >= 3 && i <= 4){
                    mes[m] = string[i];
                    m++;
                }else if (i >= 6){
                    ano[a] = string[i];
                    a++;
                }
            }
            d = (dia[0] - 48) * 10 + dia[1] - 48;
            m = (mes[0] - 48) * 10 + mes[1] - 48;
            a = (ano[0] - 48) * 1000 + (ano[1] - 48) * 100 + (ano[2] - 48) * 10 + ano[3] - 48;
            printf("\nDia: %.2d\nMês: %.2d\nAno: %d ", d, m, a);
        }
    }while (resp != 'N' && resp != 'n');
    getchar();
    return 0;
}
