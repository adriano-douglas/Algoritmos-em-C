#include <stdio.h>
#include <stdlib.h>

// Quais são os valores de F(3), F(7) e F(8)?
// F(3) = 9, F(7) = 23, F(8) = 15

int f(int n)
{
    if (n < 4){
        return 3 * n;
    }else{
        return 2 * f(n - 4) + 5;
    }
}

int main()
{
    printf("%d  %d  %d ", f(3), f(7), f(8));
    getchar();
    return 0;
}
