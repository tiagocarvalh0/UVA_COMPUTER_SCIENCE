#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 7

void informarComandos(char matriz[20][TAM][2])
{
    //COMANDOS EXTENDIDOS
    strcpy(matriz[0][0], "--help");
    strcpy(matriz[1][0], "--version");
    strcpy(matriz[2][0], "--pt");
    strcpy(matriz[3][0], "--en");
    strcpy(matriz[4][0], "--es");
    strcpy(matriz[5][0], "--fr");
    strcpy(matriz[6][0], "--it");

    //COMANDOS COMPCTOS
    strcpy(matriz[0][1], "-h");
    strcpy(matriz[1][1], "-v");
    strcpy(matriz[2][1], "-1");
    strcpy(matriz[3][1], "-2");
    strcpy(matriz[4][1], "-3");
    strcpy(matriz[5][1], "-4");
    strcpy(matriz[6][1], "-5");

    for(int i = 0; i < TAM; i++)
        printf("%s || %s\n", matriz[i][0], matriz[i][1]);

}

void erroTipo01(int argc)
{
    printf("ERRO: FALTA DE COMANDOS!\n");
    printf("===== COMANDOS ACEITOS =====\n\n");
    printf("Documentacao do Software:\n --help || -h\n\n");
    printf("Versao do Software:\n --version || -v\n\n");
    printf("Idioma Portugues:\n --pt || -1\n\n");
    printf("Idioma English:\n --en || -2\n\n");
    printf("Idioma Espanhol:\n --es || -3\n\n");
    printf("Idioma Fraces:\n --fr || -4\n\n");
    printf("Idioma Italiano:\n --it || -5\n\n");
    printf("============================\n");
}

void erroTipo02(int argc)
{
    printf("ERRO: COMANDO INVALIDO!\n");
    printf("Documentacao do Software:\n --help || -h\n\n");
}

void erroTipo03(int argc)
{
    printf("ERRO: EXCESSO DE COMANDOS!\n");
    printf("Documentacao do Software:\n --help || -h\n\n");
}

int tratarErros(int argc, char comando[],char matriz[20][TAM][2])
{
    if(argc == 1)
    {
        erroTipo01(argc);
            return 1;
    }

    else if(argc > 2)
    {
        erroTipo03(argc);
            return 1;
    }
}

int main(int argc, char *argv[])
{  
    char matriz[20][TAM][2];
    char comando[20];

    if(argc > 1)
    {
        strcpy(comando, argv[1]);
        printf("(%s)\n", comando);
    }

    informarComandos(matriz);

    if((tratarErros(argc, comando, matriz)) == 1)
        exit;

    return 0;
}