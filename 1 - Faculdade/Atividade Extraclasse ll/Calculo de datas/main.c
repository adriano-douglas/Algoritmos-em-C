#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}data;

int verifica_bissexto(int ano){
    if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
        return 1;
    }else if (ano % 4 == 0 && ano % 100 != 0){
        return 1;
    }else{
        return 0;
    }
}

int retorna_mes(int mes, int ano){
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        return 31;
    }else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        return 30;
    }else if (mes == 2){
        if (verifica_bissexto(ano) == 1){
            return 29;
        }else{
            return 28;
        }
    }
}

int retorna_ano(int ano){
    if (verifica_bissexto(ano) == 1){
        return 366;
    }else{
        return 365;
    }
}

int calcular_dias(data data1, data data2){
    int i, d1, m1 = 0, d2, m2 = 0, a = 0;
    d1 = retorna_mes(data1.mes, data1.ano) - data1.dia;
    for (i = data1.mes + 1; i <= 12; i++){
        m1 += retorna_mes(i, data1.ano);
    }
    d2 = data2.dia;
    for (i = data2.mes - 1; i >= 1; i--){
        m2 += retorna_mes(i, data2.ano);
    }
    if (data1.ano == data2.ano){
        return (d2 + m2) - (retorna_ano(data2.ano) - (d1 + m1));
    }
    for (i = data2.ano - 1; i >= data1.ano + 1; i--){
        a += retorna_ano(i);
    }
    return d1 + m1 + d2 + m2 + a;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    data data1, data2;
    printf("DATA INICIAL:\n");
    printf("-------------\n");
    printf("Dia: ");
    scanf("%d", &data1.dia);
    printf("Mês: ");
    scanf("%d", &data1.mes);
    printf("Ano: ");
    scanf("%d", &data1.ano);
    printf("\nDATA FINAL:\n");
    printf("-----------  \n");
    printf("Dia: ");
    scanf("%d", &data2.dia);
    printf("Mês: ");
    scanf("%d", &data2.mes);
    printf("Ano: ");
    scanf("%d", &data2.ano);
    printf("\nTotal de dias decorridos entre as duas datas: %d ", calcular_dias(data1, data2));
    fflush(stdin);
    getchar();
    return 0;
}
