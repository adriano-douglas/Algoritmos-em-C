#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int inicio, fim, contador, intervalo;
    system("color B");
    printf("----------------------\n");
    printf(" CONTAGEM INTELIGENTE \n");
    printf("----------------------\n");
    printf("Qual o intervalo da contagem: ");
    scanf("%d", &intervalo);
    printf("Inicio: ");
    scanf("%d", &inicio);
    printf("Fim: ");
    scanf("%d", &fim);
    printf("----------\n");
    printf(" CONTANDO \n");
    printf("----------\n");
    printf(">>> ");
    if (inicio < fim){
        contador = inicio;
        while (contador <= fim){
            printf("%d.. ", contador);
            contador = contador + intervalo;
        }
    }else{
        contador = inicio;
        while (contador >= fim){
            printf("%d.. ", contador);
            contador = contador - intervalo;
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
