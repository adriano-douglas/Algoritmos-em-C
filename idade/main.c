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
        printf("%s � jovem!\n", nome);
    }else{
        if ((idade > 17)&&(idade < 60)){
            printf("%s est� na meia-idade!\n", nome);
        }else{
            printf("%s � idoso(a)!\n", nome);
        }
    }
    system("pause");
    return 0;
}
