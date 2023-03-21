#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, string[254];
    for (i = 0; i <= 254; i++){
        string[i] = i;
        printf("%.3d: %c\n", i, string[i]);
    }
    getchar();
    return 0;
}
