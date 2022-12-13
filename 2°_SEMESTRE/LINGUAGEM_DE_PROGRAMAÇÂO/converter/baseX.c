#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define TAM_STRING 15
#include "variaveis.h"

void tratarErros();
void verificarNumeroInformado();
int quantDeArgumentosValida();

int main(int argc, char *argv[]) {

    if(quantDeArgumentosValida(argc) == TRUE)
        verificarNumeroInformado(argv);

    return 0;
}

int quantDeArgumentosValida() {
    if(argc > )
}

void verificarNumeroInformado(char *argv) {
    for(int i = 0; i < strlen(argv[NUMERO_INFORMADO]); i++)
}