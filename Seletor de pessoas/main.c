#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char resposta;
    int mulheres = 0, homens = 0, idade, cabelo, sexo;
    do {
        printf("========================\n");
        printf("   SELETOR DE PESSOAS   \n");
        printf("========================\n");
        printf("Informe o sexo [M/F]: ");
        scanf("%s", &sexo);
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe a cor do cabelo:\n");
        printf("------------------------\n");
        printf("[1] PRETO\n");
        printf("[2] CASTANHO\n");
        printf("[3] LOIRO\n");
        printf("[4] RUIVO\n\n");
        printf(">>> ");
        scanf("%d", &cabelo);
        printf("------------------------\n");
        if (sexo == 'F' && idade >= 25 && idade <= 30 && cabelo == 3){
            mulheres++;
        }
        if (sexo == 'M' && idade > 18 && cabelo == 2){
            homens++;
        }
        printf("\nVocê quer continuar? [S/N]: ");
        scanf("%s", &resposta);
        system("cls");
    }while (resposta != 'N');
    printf("=======================\n");
    printf(" RESULTADO DA PESQUISA \n");
    printf("=======================\n\n");
    printf("Total de Homens maiores de 18 anos com cabelo castanho: %d\n\n", homens);
    printf("Total de Mulheres entre 25 e 30 anos com cabelo loiro: %d\n\n", mulheres);
    system("pause");
    return 0;
}
