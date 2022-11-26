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
void ();
void cpyLetraNaVariavelAux();
void confeirVitoria();
void imprimirForca();
void declararVariaveis();
int tratarLetra();

    const typedef enum { LETRA_DUPLICADA = -2 ,HEAD = 1,  BODY, LEFT_ARM, RIGHT_ARM, LEFT_LEG, RIGHT_LEG, GAME_OVER = 6} T_ERRO;
    const typedef enum { ACERTO = -1} T_ACERTO;    
    const char vetorDePalavras[TAM_VETOR][TAM_VETOR] = {"exceto", "mister", "vereda", "casual", "idiota", "anseio", "gentil", "larica", "formal", "pressa"};
    
    char alfabeto[55]={"A-B-C-E-F-G-H-I-J-K-L-M-N-O-P-Q-R-S-T-U-V-W-X-Y-Z"};  
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
    while(erro != GAME_OVER) {
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
    setbuf(stdin, NULL);
    system("clear");
    contTentativas++;
}

int tratarLetra() {
    excluirLetra();
    for(int i = 0; i < TAM_VETOR; i++) {
        letraInformada = tolower(letraInformada);
        if(CPY_palavraSorteada[i] == letraInformada) {
            printf("LETRA JA INFORMADA!!!\n");
            contTentativas--;
                return LETRA_DUPLICADA;
        }
        else if(palavraSorteada[i] == letraInformada) {
            cpyLetraNaVariavelAux();
                return ACERTO;
        }
    }
       return erro++;
}

void excluirLetra() {
    
}

void cpyLetraNaVariavelAux() {
    for(int i = 0; i < TAM_VETOR; i++)
        if(palavraSorteada[i] == letraInformada)
            CPY_palavraSorteada[i] = letraInformada;
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
