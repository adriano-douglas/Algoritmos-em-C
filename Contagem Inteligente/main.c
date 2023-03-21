#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int inicio, fim, contador;
    system("color B");
    printf("----------------------\n");
    printf(" CONTAGEM INTELIGENTE \n");
    printf("----------------------\n");
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
            contador++;
        }
    }else{
        contador = inicio;
        while (contador >= fim){
            printf("%d.. ", contador);
            contador--;
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
