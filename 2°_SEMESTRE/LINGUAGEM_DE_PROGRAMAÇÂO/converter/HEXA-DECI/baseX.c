#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bibliotecaFuncoes.h"

void executar();

int main(int argc, char *argv[]) {

    limparTela();
    executar(argc, argv);

    return 0;
}

void executar(int argc, char argv[]) {
    if(checarQntParametro(argc))
        tratarOpcao(argc, argv);
    else    
        mensagemErroQntParametro();
}