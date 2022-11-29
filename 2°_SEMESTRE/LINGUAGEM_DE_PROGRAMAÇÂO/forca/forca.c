#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "drawForca.h"
#include "var.h"
#define TAM_VETOR 10
#define TAM_ALFABETO 55

void sortearPalavra();
void telaMenu();
void confeirVitoria();
void perguntarLetra();
int tratarLetra();
void excluirLetraDoAlfabeto();
void cpyLetraNaVariavelPalavraAUX();
void imprimirForca();
void limparBuffer();

int main() {
    limparTerminal();
    sortearPalavra();
    telaMenu(); 
    return 0;
}

// SELECIONAR UMA PALAVRA DO VETOR DE PALAVRAS
void sortearPalavra() {   
    srand(time(NULL));
    strcpy(palavraSorteada, vetorDePalavras[(rand() % 10)]);
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
        printf("\033[9;1H!!! YOU WIN !!!\nPALAVRA: %s\nTENTATIVAS: %02d\n\n", palavraSorteada, contTentativas);
        exit(1);
    }
}

// USUARIO INFORMA A LETRA
void perguntarLetra() {
    printf("\033[9;1HPALAVRA: %s\n", palavraAUX);
    printf("TENTATIVAS: %02d\n", contTentativas);
    printf("ALFABETO: %s\n", alfabeto);  
    printf("LETRA: ");
    scanf("%c", &letraInformada);
    limparBuffer();
    system("clear");
    contTentativas++;
}

// LIMPAR BUFFER DO TECLADO
void limparBuffer() {
    char c;
    while((c = getchar()) !='\n' && c != EOF);
}

// TRATAR ERRO OU ACERTO DA LETRA INFORMADA
int tratarLetra() {
    excluirLetraDoAlfabeto();
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

// APAGAR LETRA JA INFORMADA PELO USUARIO
void excluirLetraDoAlfabeto() {
    for(int i = 0; i < TAM_ALFABETO; i++)
        if(alfabeto[i] == letraInformada)
            alfabeto[i] = ' ';
}

// SUBSTITUIR "_" PELA LETRA INFORMADA
void cpyLetraNaVariavelPalavraAUX() {
    for(int i = 0; i < TAM_VETOR; i++)
        if(palavraSorteada[i] == letraInformada)
            palavraAUX[i] = letraInformada;
}

// DESENHO DA FORCA  
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