#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "drawForca.h"
#define TAM 10

void sortearPalavra();

const char vetorDePalavras[TAM][10] = {"exceto", "mister", "vereda", "casual", "idiota", "anseio", "gentil", "larica", "formal", "pressa"};

const char palavra[TAM];

const char cpyPalavra[TAM] = {"******"};

char letra;

int main() {
    sortearPalavra(palavra);
    for(int i = 0; i < 6; i++) {
        scanf("%c", &letra);
        for(int j = 0; i < 10; i++) {
            printf("%d\n", palavra[j]);
        }
    } 
    return 0;
}

void sortearPalavra(char palavra[]) {   
    srand(time(NULL));
    strcpy(palavra, vetorDePalavras[(rand() % 11)]);
    printf("%s\n%s\n", cpyPalavra, palavra);
}