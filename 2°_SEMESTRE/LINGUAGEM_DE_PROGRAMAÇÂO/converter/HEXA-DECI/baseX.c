#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bibliotecaFuncoes.h"

void executar();
void mostraNumeros();

int main(int argc, char *argv[]) {

    limparTela();
    executar(argc, argv);

    return 0;
}

void executar(int argc, char *argv[]) {

    if(tratarOpcaoHelp(argc, argv))
        mensagemHelp();
    else {
        if(!tratarErro(argc, argv)) {
            converterNumerosBaseDecimal(argc, argv);
            mostraNumeros(argc, argv, numBaseConversao);
        }
    }
}

void mostraNumeros(int argc, char *argv[], int numBaseConversao) {
    if(argc > 6)
        argc = 6;
    for(int i = 3; i < argc; i++) {
        if(strcmp(argv[i], comandosValidos[4]) == 0) {
            converterDeciBin(numBaseConversao);
            converterDeciOcta(numBaseConversao);
            if(numBaseConversao >= 0)
                printf("DECIMAL: %d\n", numBaseConversao); 
            converterDeciHexa(numBaseConversao);
            break;
       }
        if(strcmp(argv[i], comandosValidos[0]) == 0)
            converterDeciBin(numBaseConversao);
        if(strcmp(argv[i], comandosValidos[1]) == 0)
            converterDeciOcta(numBaseConversao);
        if(strcmp(argv[i], comandosValidos[2]) == 0) 
            printf("DECIMAL: %d\n", numBaseConversao);
        if(strcmp(argv[i], comandosValidos[3]) == 0)
            converterDeciHexa(numBaseConversao);
    }
}