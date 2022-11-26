#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "drawForca.h"
#define TAM_VETOR 10
#define TAM_ALFABETO 55

void sortearPalavra();
void telaMenu();
void confeirVitoria();
void perguntarLetra();
int tratarLetra();
void excluirLetra();
void cpyLetraNaVariavelPalavraAUX();
void imprimirForca();

    const typedef enum { LETRA_DUPLICADA = -2 , NO_ERROR = 0, HEAD = 1,  BODY, LEFT_ARM, RIGHT_ARM, LEFT_LEG, RIGHT_LEG, GAME_OVER = 6} T_ERRO;
    const typedef enum { ACERTO = -1} T_ACERTO;    
    const char vetorDePalavras[TAM_VETOR][TAM_VETOR] = {"exceto", "mister", "vereda", "casual", "idiota", "anseio", "gentil", "larica", "formal", "pressa"};
    
    char alfabeto[TAM_ALFABETO]={"a-b-c-d-e-f-g-h-i-j-k-l-m-n-o-p-q-r-s-t-u-v-w-x-y-z"};  
    char palavraSorteada[TAM_VETOR];
    char palavraAUX[TAM_VETOR] = {"______"};
    char letraInformada;
    int contTentativas = 0;
    int erro = 0;

int main() {
    limparTerminal();
    sortearPalavra();
    telaMenu(); 
    return 0;
}

// SORTEIA A PALAVRA PARA ADIVINHAR
void sortearPalavra() {   
    srand(time(NULL));
    strcpy(palavraSorteada, vetorDePalavras[(rand() % 11)]);
}

// MENU PRINCIPAL 
void telaMenu() {
    while(erro != GAME_OVER) {
        confeirVitoria();
        perguntarLetra();
        tratarLetra();
        imprimirForca();    
    }   
}

// VERIFICA SE A PALAVRA SORTEADA E AUX SÂO IGUAIS 
void confeirVitoria() {
    if(strcmp(palavraSorteada, palavraAUX) == 0) {
        printf("\n!!! YOU WIN !!!\nPALAVRA: %s\nTENTATIVAS: %02d\n\n", palavraSorteada, contTentativas);
        exit(1);
    }
}

void perguntarLetra() {
    //printf("%s\n", palavraSorteada);
    printf("\nPALAVRA: %s\n", palavraAUX);
    printf("TENTATIVAS: %02d\n", contTentativas);
    printf("ALFABETO: %s\n", alfabeto);
    printf("LETRA: ");
    scanf("%c", &letraInformada);
    scanf("%*c");
    setbuf(stdin, 0);
    system("clear");
    contTentativas++;
}

int tratarLetra() {
    excluirLetra();
    for(int i = 0; i < TAM_VETOR; i++) {
        letraInformada = tolower(letraInformada);
        if(palavraAUX[i] == letraInformada) {
            printf("LETRA JA INFORMADA!!!\n");
            contTentativas--;
                return LETRA_DUPLICADA;
        }
        else if(palavraSorteada[i] == letraInformada) {
            cpyLetraNaVariavelPalavraAUX();
                return ACERTO;
        }
    }
       return erro++;
}

void excluirLetra() {
    for(int i = 0; i < TAM_ALFABETO; i++)
        if(alfabeto[i] == letraInformada)
            alfabeto[i] = '*';
}

void cpyLetraNaVariavelPalavraAUX() {
    for(int i = 0; i < TAM_VETOR; i++)
        if(palavraSorteada[i] == letraInformada)
            palavraAUX[i] = letraInformada;
}

void imprimirForca() {
    if(erro == NO_ERROR)
        forca();
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
    if(erro == RIGHT_LEG) {
        erroRIGHT_LEG();
        printf("PALAVRA: %s\n", palavraSorteada);
    }
}
