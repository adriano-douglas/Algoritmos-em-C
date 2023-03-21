#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char data[11], resp;
    int dia, mes, ano;
    do {
        system("clear || cls");
        printf("INFORME UMA DATA NO FORMATO DD/MM/AAAA: ");
        gets(data);
        fflush(stdin);
        if (data[2] != '/' || data[5] != '/'){
            printf("\nERRO: AS BARRAS DE SEPARAÇÃO NÃO FORAM ENCONTRADAS NO LOCAL CORRETO! ");
            printf("\n\nVocê quer tentar novamente? [S/N] ");
            scanf("%c", &resp);
            fflush(stdin);
        }else{
            resp = 'n';
            dia = (data[0] - 48) * 10 + data[1] - 48;
            mes = (data[3] - 48) * 10 + data[4] - 48;
            ano = (data[6] - 48) * 1000 + (data[7] - 48) * 100 + (data[8] - 48) * 10 + data[9] - 48;
            printf("\nDia: %.2d\nMês: %.2d\nAno: %d ", dia, mes, ano);
            getchar();
        }
    }while (resp != 'N' && resp != 'n');
    return 0;
}
