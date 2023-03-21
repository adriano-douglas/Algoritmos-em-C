#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, n3;
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    printf("Informe o terceiro número: ");
    scanf("%d", &n3);
    printf("\nOrdem crescente: ");
    if (n1 > n2 && n1 > n3){
        if (n2 > n3){
            printf("%d %d %d\n\n", n3, n2, n1);
        }else{
            printf("%d %d %d\n\n", n2, n3, n1);
        }
    }
    if (n2 > n1 && n2 > n3){
        if (n1 > n3){
            printf("%d %d %d\n\n", n3, n1, n2);
        }else{
            printf("%d %d %d\n\n", n1, n3, n2);
        }
    }
    if (n3 > n1 && n3 > n2){
        if (n1 > n2){
            printf("%d %d %d\n\n", n2, n1, n3);
        }else{
            printf("%d %d %d\n\n", n1, n2, n3);
        }
    }
    if (n1 == n3 && n1 == n2){
        printf("%d %d %d\n\n", n1, n2, n3);
    }
    if (n1 < n2 && n1 < n3){
        if (n2 == n3){
            printf("%d %d %d\n\n", n1, n2, n3);
        }
    }
    if (n3 < n2 && n3 < n1){
        if (n2 == n1){
            printf("%d %d %d\n\n", n3, n2, n1);
        }
    }
    if (n2 < n1 && n2 < n3){
        if (n1 == n3){
            printf("%d %d %d\n\n", n2, n1, n3);
        }
    }
    system("pause");
    return 0;
}
