#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n0 = 0, n1 = 1, contador;
    for (contador = 1; contador <= 8; contador++){
        if (contador <= 7){
            printf("%d, %d, ", n0, n1);
        }else{
            printf("%d.", n0);
        }
        n0 = n0 + n1;
        n1 = n1 + n0;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
