#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "drawForca.h"
#define TAM 10

void sortearPalavra();
void telaMenu();
void imprimirForca();
int imformarErro();

    const char vetorDePalavras[TAM][10] = {"exceto", "mister", "vereda", "casual", "idiota", "anseio", "gentil", "larica", "formal", "pressa"};
    const char palavra[TAM];
    char cpyPalavra[TAM] = {"______"};
    char letra;
    int erro = 0;

int main() {
    sortearPalavra(palavra);
    telaMenu(); 
    return 0;
}

void sortearPalavra(char palavra[]) {   
    srand(time(NULL));
    strcpy(palavra, vetorDePalavras[(rand() % 11)]);
}

void telaMenu() {
    while(erro < 6) {
        printf("\n%s\n%s\n", cpyPalavra, palavra);
        printf("LETRA: ");
        scanf("%c", &letra);
        scanf("%*c");

        imformarErro();
        system("clear");
        imprimirForca();    
    }   
}

int imformarErro() {
    for(int j = 0; j < TAM; j++) {
        if(cpyPalavra[j] == letra) {
            printf("LETRA JA INFORMADA\n");
                return 0;
        }
        else if(palavra[j] == letra) {
            cpyPalavra[j] = letra;
                return 0;
        }
    }
       return erro++;
}

void imprimirForca() {
    if(erro == 1)
        erro01();
    if(erro == 2)
        erro02();
    if(erro == 3)
        erro03();
    if(erro == 4)
        erro04();
    if(erro == 5)
        erro05();
    if(erro == 6)
        erro06();
}