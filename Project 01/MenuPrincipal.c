#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "var.h"
#include "menuTela.h"

void telaMenu();
void selecionarOpcao();
void tratarOpacao();

int main () {
    telaMenu();
}

void telaMenu() {
    while(opcaoSelecionada != SAIR) {
        system("cls");
        menuInicial();
        selecionarOpcao();
        tratarOpacao();
    }
}

void selecionarOpcao() {
    scanf("%d", &opcaoSelecionada);
    scanf("%*c");
}

void tratarOpacao() {
    if(opcaoSelecionada == FAZER_APOSTA)
        system("fazerAposta.exe");
    if(opcaoSelecionada == MOSTRAR_APOSTA)
        system("mostrarAposta.exe");
    //if(opcaoSelecionada == INFORMAR_GANHADOR)
    //if(opcaoSelecionada == MOSTRAR_APOSTA_GANHADORA)
    //if(opcaoSelecionada == EXCLUIR_APOSTA)
    //if(opcaoSelecionada == MOSTRAR_APOSTA_ANTIGAS)
}
