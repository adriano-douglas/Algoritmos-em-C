#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float nota1, nota2, media;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
        media = (nota1 + nota2) / 2;
        printf("\nMédia: %.2f\n\n", media);
    }else if (nota2 >= 0 && nota2 <= 10){
        printf("\nMédia: %.2f\n\n", nota2 / 2);
        printf("A primeira nota informada é invalida!\n\n");
    }else if (nota1 >= 0 && nota1 <= 10){
        printf("\nMédia: %.2f\n\n", nota1 / 2);
        printf("A segunda nota informada é invalida!\n\n");
    }else{
        printf("\nNotas Invalidas!\n\n");
    }
    system("pause");
    return 0;
}
