#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int idade;

    printf("Nome: ");
    gets(nome);
    printf("Idade: ");
    scanf("%d", &idade);
    if (idade <= 17){
        printf("%s é jovem!\n", nome);
    }else{
        if ((idade > 17)&&(idade < 60)){
            printf("%s está na meia-idade!\n", nome);
        }else{
            printf("%s é idoso(a)!\n", nome);
        }
    }
    system("pause");
    return 0;
}
