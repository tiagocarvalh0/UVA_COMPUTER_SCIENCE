#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 10
#define VERSION 1.0

void informarComandos(char matrizComandos[TAM][2][10])
{
    //COMANDOS EXTENDIDOS
    strcpy(matrizComandos[0][0], "--help");
    strcpy(matrizComandos[1][0], "--version");
    strcpy(matrizComandos[2][0], "--pt");
    strcpy(matrizComandos[3][0], "--en");
    strcpy(matrizComandos[4][0], "--es");
    strcpy(matrizComandos[5][0], "--fr");
    strcpy(matrizComandos[6][0], "--it");
    strcpy(matrizComandos[7][0], "--ru");
    strcpy(matrizComandos[8][0], "--co");
    strcpy(matrizComandos[9][0], "--ja");
    //COMANDOS COMPCTOS
    strcpy(matrizComandos[0][1], "-h");
    strcpy(matrizComandos[1][1], "-v");
    strcpy(matrizComandos[2][1], "-1");
    strcpy(matrizComandos[3][1], "-2");
    strcpy(matrizComandos[4][1], "-3");
    strcpy(matrizComandos[5][1], "-4");
    strcpy(matrizComandos[6][1], "-5");
    strcpy(matrizComandos[7][1], "-6");
    strcpy(matrizComandos[8][1], "-7");
    strcpy(matrizComandos[9][1], "-8");
}

void informarBomdia(char matrizBomdia[TAM-2][30])
{   
    strcpy(matrizBomdia[0], "Bom Dia!");
    strcpy(matrizBomdia[1], "Good morning");
    strcpy(matrizBomdia[2], "Buenos días");
    strcpy(matrizBomdia[3], "Bonjour");
    strcpy(matrizBomdia[4], "Buongiorno");
    strcpy(matrizBomdia[5], "Доброе утрo");
    strcpy(matrizBomdia[6], "안녕하세요");
    strcpy(matrizBomdia[7], "おはようございます");
}

//PRINTAR ERRO APENAS UM ARGUMENTO INFORMADO
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
    printf("Idioma Russo:\n --ru || -6\n\n");
    printf("Idioma Coreano:\n --co || -7\n\n");
    printf("Idioma Japones:\n --ja || -8\n\n");
    printf("============================\n");
}

//PRINTAR ERRO ARGUNTO INVALIDO
void erroTipo02(int argc)
{
    printf("ERRO: COMANDO INVALIDO!\n");
    printf("Documentacao do Software:\n --help || -h\n\n");
}

//PRINTAR ERRO MAIS DE UM ARGUMENTO
void erroTipo03(int argc)
{
    printf("ERRO: EXCESSO DE COMANDOS!\n");
    printf("Documentacao do Software:\n --help || -h\n\n");
}

//VERIFICAR SE HA ALGUM ERRO
int tratarErros(int argc, char cpyComando[],char matrizComandos[TAM][2][10])
{
    if(argc == 1)
    {
        erroTipo01(argc);
            return 1;
    }

    else if(argc == 2)
    {
        for(int i = 0; i < TAM; i++)
        {
            if(strcmp(matrizComandos[i][0], cpyComando) == 0)
                return 0;
            if(strcmp(matrizComandos[i][1], cpyComando) == 0)
                return 0;
        }

        erroTipo02(argc);
            return 1;
    }

    else if(argc > 2)
    {
        erroTipo03(argc);
            return 1;
    }
}

//VERIFICAR QUAL COMANDO INFROMADO
int tipoComando(char matrizComandos[TAM][2][10], char cpyComando[10], int comando)
{
    for(int i = 0; i < TAM; i++)
    {
        if((strcmp(matrizComandos[i][0], cpyComando) == 0) || (strcmp(matrizComandos[i][1], cpyComando) == 0))
            return i;
    }
}

//MOSTRAR COMANDO NA TELA
void mostrarComando(int comando, char matrizBomdia[TAM-2][30])
{
    if(comando == 0)
    {
        printf("Bom dia em diferentes idiomas.\n\n");
        printf("===== COMANDOS ACEITOS =====\n\n");
        printf("Documentacao do Software:\n --help || -h\n\n");
        printf("Versao do Software:\n --version || -v\n\n");
        printf("Idioma Portugues:\n --pt || -1\n\n");
        printf("Idioma English:\n --en || -2\n\n");
        printf("Idioma Espanhol:\n --es || -3\n\n");
        printf("Idioma Fraces:\n --fr || -4\n\n");
        printf("Idioma Italiano:\n --it || -5\n\n");
        printf("Idioma Russo:\n --ru || -6\n\n");
        printf("Idioma Coreano:\n --co || -7\n\n");
        printf("Idioma Japones:\n --ja || -8\n\n");
        printf("============================\n");
    }  

    else if(comando == 1)
    {
        printf("NOME: Bom dia\nVERSAO: %.1f\nCopyright (C) 2022 Tiago Carvalho.\n", VERSION);
    }

    else
        printf("%s\n", matrizBomdia[comando-2]);
}

int main(int argc, char *argv[])
{  
    char matrizComandos[TAM][2][10];
    char matrizBomdia[TAM-2][30];
    char cpyComando[10];
    int comando = 0;

    if(argc > 1)
        strcpy(cpyComando, argv[1]);

    informarComandos(matrizComandos);
    informarBomdia(matrizBomdia);

    if((tratarErros(argc, cpyComando, matrizComandos)) == 1)
        exit;
    else
    {
        comando = tipoComando(matrizComandos, cpyComando, comando);
        mostrarComando(comando, matrizBomdia);
    }

    return 0;
}