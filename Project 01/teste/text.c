#include <stdio.h>
#include "var.h"

int main() {
    arqApostaAtual = fopen("texte.csv", "w");

    if(arqApostaAtual == NULL)
        printf("ERRO\n");
    else {
    for(int i = 0; i < 10; i++) {
        fprintf(arqApostaAtual, "%04d,", cadastro.numBilhete1+i);
        fprintf(arqApostaAtual,"%02d/%02d/%02d\n", cadastro.diaAposta1+i, cadastro.mesAposta1+i, cadastro.anoAposta1+i);
    }}
}