#include <stdio.h>
#include <stdlib.h>

void mensagemErroQntParametro();
void mensagemErroParametroInvalido();
void limparTela();
void mensagemHelp();

void mensagemErroQntParametro() {
    limparTela();
    printf("ERRO: QUANTIDADE DE PARAMETROS INVALIDA\n");
}

void mensagemErroParametroInvalido() {
    limparTela();
    printf("ERRO: PARAMETROS DE BASE ORIGINAL OU DE CONVERSSAO INVALIDOS.\n");
}

void mensagemHelp() {
    printf("Converter numero informado pelo usuario.\n");
    printf("Use: ./nomeDoPrograma <NumeroOriginal> <BaseOriginal> <BaseConversao> \n");
	printf("Tipos de Argumentos.\n");
	printf("--help          Mostrar Menu\n");
	printf("--b             Converter para Binario.\n");   
    printf("--o             Converter Para Octal.\n");
    printf("--d             Converter Para Decimal.\n");
    printf("--h             Converter Para Hexadecimal\n");
    printf("--all           Converter Para Todas as Bases\n");
}

void limparTela() {
    system("clear");
}
