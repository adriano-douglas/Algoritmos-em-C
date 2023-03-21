#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

void corrige_palavra(char palvra[]){
    int i = 0;
    while(palvra[i] != '\0'){
        if(palvra[i] == '\n'){
            palvra[i] = '\0';
            break;
        }
        i++;
    }
}

void inicia_palavra(char palavra[], char palavra_aux[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(palavra[i] != ' '){
            palavra_aux[i] = '*';
        }else{
            palavra_aux[i] = palavra[i];
        }
    }
    palavra_aux[i] = '\0';
}

void imprimir_palavra(char palavra_aux[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(palavra_aux[i] == '*'){
            printf("__ ");
        }else if(palavra_aux[i] == ' '){
            printf("  ");
        }else{
            printf("%c ", palavra_aux[i]);
        }
    }
}

int altera_palavra_aux(char palavra[], char palavra_aux[], char letra, int tam){
    int i, existe = 0;
    for(i = 0; i < tam; i++){
        if(palavra[i] == letra){
            palavra_aux[i] = letra;
            existe = 1;
        }
    }
    return existe;
}

int acertou(char palavra_aux[], int tam){
    for(int i = 0; i < tam; i++){
        if(palavra_aux[i] == '*'){
            return 0;
        }
    }
    return 1;
}

int verifica_palpite(char palavra[], char palpite[], int tam){
    for(int i = 0; i < tam + 1; i++){
        if(palavra[i] != palpite[i]){
            return 0;
        }
    }
    return 1;
}

void desenho(int tentativas){
    system("cls");
    printf(" ----------------    \n");
    printf(" |              |    \n");
    if(tentativas > 1){
        printf(" |              O    \n");
    }else{
        printf(" |\n");
    }
    if(tentativas == 3){
        printf(" |             /|    \n");
    }else if(tentativas < 4){
        printf(" |\n");
    }
    if(tentativas >= 4){
        printf(" |             /|\\  \n");
        printf(" |              |    \n");
    }else{
        printf(" |\n");
    }
    if(tentativas == 5){
        printf(" |             /     \n");
    }else if(tentativas < 6){
        printf(" |\n");
    }
    if(tentativas == 6){
        printf(" |             / \\  \n");
    }else{
        printf(" |\n");
    }
    printf(" |                   \n");
    printf(" |                   \n");
    printf(" |                   \n");
    printf("---                  \n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char opcao, palavra[51], palavra_aux[51], letra, sabe, palpite[51], dica[100];
    int tam, tentativas, existe, ganhou;
    do {
        system("cls");
        printf("Informe a palavra secreta: ");
        fgets(palavra, 51, stdin);
        fflush(stdin);
        printf("\nInforme a dica: ");
        fgets(dica, 100, stdin);
        fflush(stdin);
        corrige_palavra(palavra);
        tam = strlen(palavra);

        inicia_palavra(palavra, palavra_aux, tam);

        tentativas = 1;

        do{
            desenho(tentativas);

            printf("\nVocê ainda pode errar %d vezes\n\n", 5 - tentativas);
            printf("\nDica: %s\n\n", dica);

            imprimir_palavra(palavra_aux, tam);

            printf("\n\n\nJá sabe a resposta e quer fazer uma tentativa perigosa? [S / N] ");
            scanf("%c", &sabe);
            fflush(stdin);

            if(sabe == 's'){
                printf("\n\nInforme seu palpite: ");
                fgets(palpite, 51, stdin);
                fflush(stdin);
                corrige_palavra(palpite);
                if(verifica_palpite(palavra, palpite, tam)){
                    ganhou = 1;
                    break;
                }else{
                    ganhou = 0;
                    break;
                }
            }else{
                printf("\nInforme uma letra: ");
                scanf("%c", &letra);
                fflush(stdin);

                existe = altera_palavra_aux(palavra, palavra_aux, letra, tam);

                if(!existe){
                    tentativas++;
                }
            }
        }while(!acertou(palavra_aux, tam) && tentativas < 6);

        tentativas = (!ganhou) ? 6 : tentativas;

        desenho(tentativas);

        printf("\nPalavra correta: %s", palavra);

        if(tentativas == 6 || !ganhou){
            printf("\n\nVocê perdeu!\n\n");
        }else{
            printf("\n\nParabéns! Você acertou!\n\n");
        }

        printf("Você deseja jogar novamente? [S / N] ");
        scanf("%c", &opcao);
        fflush(stdin);

    }while(opcao != 'n');
    return 0;
}
