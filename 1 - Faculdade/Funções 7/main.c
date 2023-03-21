#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Crie uma função que receba um número real passado como parâmetro (por valor),
retorne a parte inteira e a parte fracionária desse número por referência. Nesse
caso, a função receberá 3 variáveis, o número real por valor, uma variável por
referência para receber a parte inteira e uma variável por referência para receber
a parte decimal. No método main() faça a chamada da função e imprima a parte inteira
 e a parte fracionária separadas. */

 void SepararNumero(float numero, int *real, float *fracionaria){
     *real = numero;
     *fracionaria = numero - *real;
 }

int main()
{
    setlocale(LC_ALL, "portuguese");
    int real;
    float fracioanria, numero;
    printf("Informe um número decimal: ");
    scanf("%f", &numero);
    fflush(stdin);
    SepararNumero(numero, &real, &fracioanria);
    printf("\nParte real: %d \n\nParte fracionária: %f ", real, fracioanria);
    getchar();
    return 0;
}
