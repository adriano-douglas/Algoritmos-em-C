#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie uma fun��o que receba um n�mero real passado como par�metro (por valor),
retorne a parte inteira e a parte fracion�ria desse n�mero por refer�ncia. Nesse
caso, a fun��o receber� 3 vari�veis, o n�mero real por valor, uma vari�vel por
refer�ncia para receber a parte inteira e uma vari�vel por refer�ncia para receber
a parte decimal. No m�todo main() fa�a a chamada da fun��o e imprima a parte inteira
 e a parte fracion�ria separadas. */

 void SepararNumero(float numero, int *real, float *fracionaria){
     *real = numero;
     *fracionaria = numero - *real;
 }

int main()
{
    setlocale(LC_ALL, "portuguese");
    int real;
    float fracioanria, numero;
    printf("Informe um n�mero decimal: ");
    scanf("%f", &numero);
    fflush(stdin);
    SepararNumero(numero, &real, &fracioanria);
    printf("\nParte real: %d \n\nParte fracion�ria: %f ", real, fracioanria);
    getchar();
    return 0;
}
