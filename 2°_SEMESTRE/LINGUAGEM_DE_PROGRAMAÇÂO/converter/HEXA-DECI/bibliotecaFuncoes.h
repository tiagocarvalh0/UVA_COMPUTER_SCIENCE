#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
#define OPCAO_VALIDA 1
#define HELP 1
#define ERRO -1

int checarQntParametro();
int tratarOpcaoHelp();
int tratarErro();

void converterNumerosBaseDecimal();
int converterBinDeci();
int converterOctaDeci();
int converterDeciDeci();
int converterHexaDeci();

void converterDeciBin();
void converterDeciOcta();
void converterDeciHexa();

void mensagemErroQntParametro();
void mensagemErroParametroInvalido();
void limparTela();
void mensagemHelp();

    const typedef enum {TAM_COMANDOS = 6, QNT_COMANDOS = 7}T_TAM_COMANDOS;
    const typedef enum {BASE_BIN = 0, BASE_OCTA, BASE_DECI, BASE_HEXA}TT;

    const char comandosValidos [TAM_COMANDOS][QNT_COMANDOS] = {"--b", "--o", "--d", "--h", "--all", "--help"};


    const typedef enum {NUMERO_INFORMADO = 1, BASE_NUMERO_INFORMADO, BASE_CONVER_01, BASE_CONVER_02, BASE_CONVER_03, BASE_CONVER_04} T_PARAMETRO;

    char binary[17];
    char octal[17];
    char deci[17];
    char hex[17];
    int tipoErro = 0;
    int OK_CHECK = 0;
    int numBaseConversao = 0;

int checarQntParametro(int argc, char *argv[]) {
    if(!(strcmp(argv[1], comandosValidos[5]) == 0) && (argc <= 3)) return FALSE;
}

int tratarOpcaoHelp(int argc, char *argv[]) {
    if(argc == 1)
        return FALSE;
    if(strcmp(argv[1], comandosValidos[5]) == 0)
        return TRUE;
    else
        return FALSE;
}

// VERIFICA SE A ALGUM ERRO NA LINHA DE COMANDO
int tratarErro(int argc, char *argv[]) {

    /*if(argc == 2) {
        if(strcmp(argv[1], comandosValidos[5]) == 0)
            return TRUE;
        else    
            return FALSE;
    }*/

    // VERIFICA SE QNT DE ARGUMENTOS E VALIDA
    /*if(argc == 1 || argc == 3) {
        mensagemErroQntParametro();
        return TRUE;
    }*/

    // VERIFICA SE BASE_NUMERO_INFORMADO == comandosValidos
    for (int i = 0; i < 4; i++) {
         if(strcmp(argv[i], comandosValidos[i]) == 0) 
            return FALSE;
    }

    return TRUE;
}

// VERIFICA QUAL BASE INFORMADA PARA CONVERTSÃO
void converterNumerosBaseDecimal(int argc, char *argv[]) {
    if(strcmp(argv[BASE_NUMERO_INFORMADO], comandosValidos[BASE_BIN]) == 0) 
        numBaseConversao = converterBinDeci(argc, argv);
    else if(strcmp(argv[BASE_NUMERO_INFORMADO], comandosValidos[BASE_OCTA]) == 0) 
        numBaseConversao = converterOctaDeci(argc, argv);
    else if(strcmp(argv[BASE_NUMERO_INFORMADO], comandosValidos[BASE_DECI]) == 0)
        numBaseConversao = converterDeciDeci(argc, argv);
    else if(strcmp(argv[BASE_NUMERO_INFORMADO], comandosValidos[BASE_HEXA]) == 0)
        numBaseConversao = converterHexaDeci(argc, argv);
    else {
        numBaseConversao = ERRO;
        mensagemErroParametroInvalido();
    }
}

// CONVERTER O "--b" PARA NUM_BASE
int converterBinDeci(int argc, char *argv[]) {
    int decimal = 0;
    strcpy(binary, argv[1]);
    int len = strlen(binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] >= '0' && binary[i] <= '1') {
            decimal += (binary[i] - 48) * pow(2, len - i - 1);
            OK_CHECK++;
        }
    }

    if(OK_CHECK == len)
        return decimal;
    else {
        OK_CHECK = 0;
        mensagemErroParametroInvalido();
        return ERRO;
    } 
}

// CONVERTE O NUMERO "--o" PARA NUM_BASE
int converterOctaDeci(int argc, char *argv[]) {
    int decimal = 0;
    strcpy(octal, argv[1]);
    int len = strlen(octal);

    for (int i = 0; octal[i] != '\0'; i++) {
        if (octal[i] >= '0' && octal[i] <= '8') {
            decimal += (octal[i] - 48) * pow(8, len - i - 1);
            OK_CHECK++;
        }
    }

    if(OK_CHECK == len)
        return decimal;
    else {
        OK_CHECK = 0;
        mensagemErroParametroInvalido();
        return ERRO;
    } 
}

// CONVERTER O NUMERO "--d" PARA NUM_BASE
int converterDeciDeci(int argc, char *argv[]) {
    int decimal = 0;
    strcpy(deci, argv[1]);
    int len = strlen(deci);

    for (int i = 0; deci[i] != '\0'; i++) {
        if (deci[i] >= '0' && deci[i] <= '8') {
            decimal += (deci[i] - 48) * pow(10, len - i - 1);
            OK_CHECK++;
        }
    }

    if(OK_CHECK == len)
        return decimal;
    else {
        OK_CHECK = 0;
        mensagemErroParametroInvalido();
        return ERRO;
    } 
}

//CONVERTE O NUMEMO "--h" PARA NUM_BASE
int converterHexaDeci(int argc, char *argv[]) {
    int decimal = 0;
    strcpy(hex, argv[1]);
    int len = strlen(hex);

    for (int i = 0; hex[i] != '\0'; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - 48) * pow(16, len - i - 1);
            OK_CHECK++;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 55) * pow(16, len - i - 1);
            OK_CHECK++;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 87) * pow(16, len - i - 1);
            OK_CHECK++;
        }
    }
    if(OK_CHECK == len)
        return decimal;
    else {
        OK_CHECK = 0;
        mensagemErroParametroInvalido();
        return ERRO;
    } 
}

// CONVERTE O NUM_BASE PARA "--b"
void converterDeciBin(int numBaseConversao) {
    int binaryNum[32];
    int i = 0;
    if(numBaseConversao > 0) {
        while (numBaseConversao != 0) {
            binaryNum[i] = numBaseConversao % 2;
            numBaseConversao = numBaseConversao / 2;
            i++;
        }
        printf("BINARIO: ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", binaryNum[j]);
        printf("\n");
    }
    else if(numBaseConversao == 0)
        printf("BINARIO: 0\n");
}

// CONVERTE O NUM_BASE PARA "--o"
void converterDeciOcta(int numBaseConversao) {
    int octalNum[100];
    int i = 0;

    if(numBaseConversao > 0) {
        while (numBaseConversao != 0) {
            octalNum[i] = numBaseConversao % 8;
            numBaseConversao = numBaseConversao / 8;
            i++;
        }
        printf("OCTAL: ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", octalNum[j]);
        printf("\n");
    }
    else if(numBaseConversao == 0)
        printf("OCTAL: 0\n");
}

// CONVERTE O NUM_BASE PARA "--h"
void converterDeciHexa(int numBaseConversao) {
    char hexaDeciNum[100];
    int i = 0;

    if(numBaseConversao > 0) {
        while (numBaseConversao != 0) {
            int temp  = 0;
            temp = numBaseConversao % 16;
            if (temp < 10) {
                hexaDeciNum[i] = temp + 48;
                i++;
            } else {
                hexaDeciNum[i] = temp + 55;
                i++;
            }
            numBaseConversao = numBaseConversao/16;
        }
        printf("HAXADECIMAL: ");
        for (int j=i-1; j>=0; j--)
            printf("%c", hexaDeciNum[j]);
        printf("\n");
    }
    else if(numBaseConversao == 0)
        printf("HAXADECIMAL: 0\n");
}




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
