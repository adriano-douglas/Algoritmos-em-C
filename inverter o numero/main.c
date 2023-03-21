#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, cifra;
    printf("Informe um número: ");
    scanf("%d", &n);
    if (n >= 0){
        do {
            cifra = n % 10;
            printf("%d", cifra);
            n = n / 10;
        }while (n != 0);
    }else{
        n = n * -1;
        printf("-");
        do {
            cifra = n % 10;
            printf("%d", cifra);
            n = n / 10;
        }while (n != 0);
    }
    return 0;
}
