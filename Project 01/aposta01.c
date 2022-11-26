#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "menuTela.h"

void dataAtual();
void telaMenu();
void selecionarOpcao();
void tratarOpacao();

    const typedef enum {FAZER_APOSTA = 1, MOSTRAR_APOSTA, INFORMAR_GANHADOR, MOSTRAR_APOSTA_GANHADORA, EXCLUIR_APOSTA, MOSTRAR_APOSTA_ANTIGAS, SAIR} TIPO_OPCAO;
    int opcaoSelecionada = 0;
    int dia_aposta;
	int mes_aposta;
	int ano_aposta;
	int hora_aposta;
	int min_aposta;

int main() {
    dataAtual();
    telaMenu();
}

void dataAtual() {
    struct tm *dataHoraAtual;
    time_t segundos;
    time(&segundos);
    dataHoraAtual = localtime(&segundos);

    dia_aposta  = dataHoraAtual->tm_mday;
	mes_aposta  = (dataHoraAtual->tm_mon) + 1;
	ano_aposta  = (dataHoraAtual->tm_year) + 1900;
	hora_aposta = dataHoraAtual->tm_hour;
	min_aposta  = dataHoraAtual->tm_min;
}

void telaMenu() {
    while(opcaoSelecionada < SAIR) {
        menuInicial();
        selecionarOpcao();
        tratarOpacao();
        system("clear");
    }
}

void selecionarOpcao() {
    scanf("%d", &opcaoSelecionada);
    scanf("%*c");
}

void tratarOpacao() {
    if(opcaoSelecionada == FAZER_APOSTA)
    if(opcaoSelecionada == MOSTRAR_APOSTA)
    if(opcaoSelecionada == INFORMAR_GANHADOR)
    if(opcaoSelecionada == MOSTRAR_APOSTA_GANHADORA)
    if(opcaoSelecionada == EXCLUIR_APOSTA)
    if(opcaoSelecionada == MOSTRAR_APOSTA_ANTIGAS)
}