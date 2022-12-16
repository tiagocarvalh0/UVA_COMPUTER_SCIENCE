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

    char cpyArgvBase[100];

    strcpy(cpyArgvBase, argv[1]);

    // VERIFICA SE A OPCAO "--help" FOI INFORMADA
    if(tratarOpcaoHelp(argc, argv))
        mensagemHelp();
    else {
        if(tratarErro(argc, argv, cpyArgvBase)) {
              mensagemErroQntParametro();
        } else {
            converterNumerosBaseDecimal(argc, argv);
            mostraNumeros(argc, argv, numBaseConversao);
        }
    }
}


// VERIFICA BASE DE CONVERSAO INFORMADA PELO USUARIO E INICIA A CONVERSAO FINAL
void mostraNumeros(int argc, char *argv[], int numBaseConversao) {
    printf("NUMERO INFORMADO: %s(""%s"")\n", argv[NUMERO_INFORMADO], argv[BASE_NUMERO_INFORMADO]);
    if(argc > 6)
        argc = 6;
    for(int i = 3; i < argc; i++) {
        if(strcmp(argv[i], comandosValidos[BASE_ALL]) == 0) {
            converterDeciBin(numBaseConversao);
            converterDeciOcta(numBaseConversao);
            if(numBaseConversao >= 0)
                printf("DECIMAL: %d\n", numBaseConversao); 
            converterDeciHexa(numBaseConversao);
                break;
       }
        if(strcmp(argv[i], comandosValidos[BASE_BIN]) == 0)
            converterDeciBin(numBaseConversao);
        if(strcmp(argv[i], comandosValidos[BASE_OCTA]) == 0)
            converterDeciOcta(numBaseConversao);
        if(strcmp(argv[i], comandosValidos[BASE_DECI]) == 0)  {
            if(numBaseConversao >= 0)
                printf("DECIMAL: %d\n", numBaseConversao);
        }
        if(strcmp(argv[i], comandosValidos[BASE_HEXA]) == 0)
            converterDeciHexa(numBaseConversao);
    }
}