#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bibliotecaMensagens.h"
#define TRUE 1
#define FALSE 0
#define ERRO -1

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

    const typedef enum {TAM_COMANDOS = 6, QNT_COMANDOS = 7}T_TAM_COMANDOS;

    const typedef enum {NUMERO_INFORMADO = 1, BASE_NUMERO_INFORMADO = 2, BASE_BIN = 0, BASE_OCTA, BASE_DECI, BASE_HEXA, BASE_ALL, HELP}T_PARAMETRO;
    const char comandosValidos [TAM_COMANDOS][QNT_COMANDOS] = {"--b", "--o", "--d", "--h", "--all", "--help"};

    char binary[17];
    char octal[17];
    char deci[17];
    char hex[17];
    int tipoErro = 0;
    int OK_CHECK = 0;
    int numBaseConversao = 0;

// VERIFICA COMANDO IMFORMADO == "--help"
int tratarOpcaoHelp(int argc, char *argv[]) {
    if(argc == 1)
        return FALSE;
    if(strcmp(argv[1], comandosValidos[HELP]) == 0)
        return TRUE;
    else
        return FALSE;
}

// VERIFICA SE A ALGUM ERRO NA LINHA DE COMANDO
int tratarErro(int argc, char *argv[], char cpyArgvBase[]) {
    
    // VERIFICA SE BASE_NUMERO_INFORMADO == comandosValidos
    for (int i = 0; i < 4; i++) {
         if(strcmp(cpyArgvBase, comandosValidos[i]) == 0) 
            return FALSE;
    }

    // VERIFICA SE QNT DE ARGUMENTOS E VALIDA
    if(argc == 1 || argc == 3) {
        mensagemErroQntParametro();
        return TRUE;
    }

    return FALSE;
}

// VERIFICA BASE_NUMERO_INFORMADA E CONVERTE PARA DECIMAL
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

// CONVERTE NUMERO "--b" PARA NUM_BASE
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

// CONVERTE NUMERO "--o" PARA NUM_BASE
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

// CONVERTER NUMERO "--d" PARA NUM_BASE
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

// CONVERTE NUMERO "--h" PARA NUM_BASE
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

// CONVERTE NUM_BASE PARA "--b"
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

// CONVERTE NUM_BASE PARA "--o"
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

// CONVERTE NUM_BASE PARA "--h"
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