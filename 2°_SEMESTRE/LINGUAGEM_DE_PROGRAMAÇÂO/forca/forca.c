#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "drawForca.h"
#define TAM_VETOR 10

void sortearPalavra();
void telaMenu();
void perguntarLetra();
void passarLetra();
void confeirVitoria();
void imprimirForca();
void declararVariaveis();
int tratarLetra();

    const typedef enum { HEAD = 1,  BODY, LEFT_ARM, RIGHT_ARM, LEFT_LEG, RIGHT_LEG} CORPO;
    const char vetorDePalavras[TAM_VETOR][TAM_VETOR] = {"exceto", "mister", "vereda", "casual", "idiota", "anseio", "gentil", "larica", "formal", "pressa"};
    typedef enum { LETRA_DUPLICADA = -2 } T_ERRO;
    typedef enum { ACERTO = -1} T_ACERTO;  
    char palavraSorteada[TAM_VETOR];
    char CPY_palavraSorteada[TAM_VETOR] = {"______"};
    char letraInformada;
    int contTentativas = 0;
    int erro = 0;

int main() {
    limparTerminal();
    sortearPalavra();
    telaMenu(); 
    return 0;
}

void sortearPalavra() {   
    srand(time(NULL));
    strcpy(palavraSorteada, vetorDePalavras[(rand() % 11)]);
}

void telaMenu() {
    while(erro < 6) {
        confeirVitoria();
        perguntarLetra();
        tratarLetra();
        imprimirForca();    
    }   
}

void confeirVitoria() {
    if(strcmp(palavraSorteada, CPY_palavraSorteada) == 0) {
        printf("\n!!! YOU WIN !!!\nPALAVRA: %s\nTENTATIVAS: %02d\n\n", palavraSorteada, contTentativas);
        exit(1);
    }
}

void perguntarLetra() {
    //printf("%s\n", palavraSorteada);
    printf("\nPALAVRA: %s\n", CPY_palavraSorteada);
    printf("TENTATIVAS: %02d\nLETRA: ", contTentativas);
    scanf("%c", &letraInformada);
    scanf("%*c");
    system("clear");
    contTentativas++;
}

int tratarLetra() {
    for(int j = 0; j < TAM_VETOR; j++) {
        letraInformada = tolower(letraInformada);
        if(CPY_palavraSorteada[j] == letraInformada) {
            printf("LETRA JA INFORMADA!!!\n");
            contTentativas--;
                return LETRA_DUPLICADA;
        }
        else if(palavraSorteada[j] == letraInformada) {
            passarLetra();
                return ACERTO;
        }
    }
       return erro++;
}

void passarLetra() {
    for(int j = 0; j < TAM_VETOR; j++)
        if(palavraSorteada[j] == letraInformada)
            CPY_palavraSorteada[j] = letraInformada;
}

void imprimirForca() {
    if(erro == HEAD)
        erroHEAD();
    if(erro == BODY)
        erroBODY();
    if(erro == LEFT_ARM)
        erroLEFT_ARM();
    if(erro == RIGHT_ARM)
        erroRIGHT_ARM();
    if(erro == LEFT_LEG)
        erroLEFT_LEG();
    if(erro == RIGHT_LEG)
        erroRIGHT_LEG();
}
