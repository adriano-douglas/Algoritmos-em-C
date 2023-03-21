#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int validar_jogada(int matriz[][3], int l, int c){
    if (matriz[l][c] == 0 || matriz[l][c] == -1){
        return 1;
    }
    return 0;
}

int verificar_resultado(int matriz[][3], int l, int c){
    int n = matriz[l][c];
    if (matriz[l][0] == n && matriz[l][1] == n && matriz[l][2] == n){
        return 1;
    }
    if (matriz[0][c] == n && matriz[1][c] == n && matriz[2][c] == n){
        return 1;
    }
    if (matriz[0][0] == n && matriz[1][1] == n && matriz[2][2] == n){
        return 1;
    }
    if (matriz[0][2] == n && matriz[1][1] == n && matriz[2][0] == n){
        return 1;
    }
    return 0;
}

void localizar_tabuleiro(int matriz[][3], int jogada, int *l, int *c){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] == jogada){
                *l = i;
                *c = j;
                break;
            }
        }
    }
}

void mostrar_tabuleiro(int matriz[][3]){
    system("clear || cls");
    for (int i = 0; i < 3; i++){
        printf("+-----+-----+-----+\n");
        printf("|");
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] == -1){
                printf("  X  |");
            }else if (matriz[i][j] == 0){
                printf("  O  |");
            }else{
                printf("  %d  |", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("+-----+-----+-----+\n\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int tabuleiro[3][3], i, j, jogada = 0, l, c, cont = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            tabuleiro[i][j] = ++jogada;
        }
    }
    for (i = 1; i <= 5; i++){
        mostrar_tabuleiro(tabuleiro);
        if (i >= 4 && verificar_resultado(tabuleiro, l, c) == 1){
            break;
        }
        for (j = 0; j < 1; j++){
            printf("Vai jogar [ X ] em qual posição? ");
            scanf("%d", &jogada);
            localizar_tabuleiro(tabuleiro, jogada, &l, &c);
            if (validar_jogada(tabuleiro, l, c) == 1){
                printf("\nJOGADA INVALIDA!\n\n");
                j--;
            }
        }
        tabuleiro[l][c] = -1;
        mostrar_tabuleiro(tabuleiro);
        if (i >= 3 && verificar_resultado(tabuleiro, l, c) == 1 || i == 5){
            break;
        }
        for (j = 0; j < 1; j++){
            printf("Vai jogar [ O ] em qual posição? ");
            scanf("%d", &jogada);
            localizar_tabuleiro(tabuleiro, jogada, &l, &c);
            if (validar_jogada(tabuleiro, l, c) == 1){
                printf("\nJOGADA INVALIDA!\n\n");
                j--;
            }
        }
        tabuleiro[l][c] = 0;
    }
    printf("JOGO FINALIZADO! ");
    fflush(stdin);
    getchar();
    return 0;
}
