#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Criar um algoritmo que receba a idade e o peso de 20 pessoas.
Calcular e imprimir as médias dos pesos das pessoas da mesma faixa
etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de
21 a 30 anos e maiores de 30 anos. */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contador, cont1=0, cont2=0, cont3=0, cont4=0, idade;
    float peso, soma1=0, soma2=0, soma3=0, soma4=0;
    printf("ISNTITUTO DE PESQUISA\n");
    printf("---------------------\n\n");
    for (contador = 1; contador <= 5; contador++){
        printf("%dª PESSOA\n", contador);
        printf("----------\n");
        printf("IDADE: ");
        scanf("%d", &idade);
        printf("PESO: ");
        scanf("%f", &peso);
        printf("\n");
        if (idade >= 1 && idade <= 10){
            soma1 = soma1 + peso;
            cont1++;
        }else if (idade > 10 && idade <= 20){
                soma2 = soma2 + peso;
                cont2++;
        }else if (idade > 20 && idade <= 30){
                soma3 = soma3 + peso;
                cont3++;
        }else if (idade > 30){
                soma4 = soma4 + peso;
                cont4++;
        }
    }
    printf("MÉDIAS DE PESO\n");
    printf("--------------");
    if (cont1!=0){
        printf("\nIDADE ENTRE  1 A 10 ANOS: %.2f KG", soma1/cont1);
    }
    if (cont2!=0){
        printf("\nIDADE ENTRE 11 A 20 ANOS: %.2f KG", soma2/cont2);
    }
    if (cont3!=0){
        printf("\nIDADE ENTRE 21 A 30 ANOS: %.2f KG", soma3/cont3);
    }
    if (cont4!=0){
        printf("\nIDADE ACIMA DE 30 ANOS: %.2f KG", soma4/cont4);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
