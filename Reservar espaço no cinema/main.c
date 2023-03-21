#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int validar_escolha(char escolha[]){
    if (strlen(escolha) - 1 == 1 && escolha[0] >= '1' && escolha[0] <= '9'){
        return escolha[0] - '0';
    }else if (strlen(escolha) - 1 == 2 && escolha[0] == '1' && escolha[1] == '0'){
        return 10;
    }else if (strlen(escolha) - 1 == 2 && escolha[0] == ' ' && escolha[1] >= '1' && escolha[1] <= '9'){
        return escolha[1] - '0';
    }else{
        return 0;
    }
}

void modificar_saida(int cadeiras[], int escolhida){
    if (cadeiras[escolhida - 1] == escolhida){
        cadeiras[escolhida - 1] = -1;
    }
}

void saida(int cadeiras[]){
    system("clear || cls");
    for (int i = 0; i < 10; i++){
        if (cadeiras[i] != -1){
            printf("[ B%2d ] ", cadeiras[i]);
        }else{
            printf("[ --- ] ");
        }
    }
    printf("\n\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int cadeiras[10], i, escolhida;
    char resp = 's', escolha[4];
    for (i = 0; i < 10; i++){
        cadeiras[i] = i + 1;
    }
    do{
        saida(cadeiras);
        do{
            printf("Reservar a cadeira: B");
            fgets(escolha, 5, stdin);
            fflush(stdin);
            escolhida = validar_escolha(escolha);
            if (escolhida == 0){
                printf("\nCadeira inexistente! Tente novamente:\n\n");
            }
        }while (escolhida == 0);
        if (cadeiras[escolhida - 1] == -1){
            printf("\nErro: A cadeira B%d já foi reservada!\n\n", escolhida);
        }else{
            printf("\nA cadeira B%d foi reservada!\n\n", escolhida);
        }
        printf("Você quer reservar outra cadeira? [S/N] ");
        scanf("%c", &resp);
        fflush(stdin);
        modificar_saida(cadeiras, escolhida);
    }while (resp != 'N' && resp != 'n');
    getchar();
    return 0;
}
