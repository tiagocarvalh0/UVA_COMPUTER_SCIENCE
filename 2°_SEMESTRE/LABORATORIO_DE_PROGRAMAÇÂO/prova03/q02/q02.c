#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_STRING 30

void encriptadoArquivo();
void decriptadoArquivo();
void limparBuffer();

    FILE *arqTexto;
    FILE *arqEncriptado;
    FILE *arqDecriptado;

    char nomeDoArquivo[TAM_STRING];
    char stringInicial[TAM_STRING] = {"sejam fortes"};

int main() {

    arqTexto = fopen("texto.bin", "wb");
    if(arqTexto == NULL)
        printf("!!! ERRO: ARQ N CRIAR !!!\n");
    else
        fwrite(stringInicial, sizeof(char), TAM_STRING, arqTexto);
    fclose(arqTexto);
    printf("Escolha: encriptado.txt || decriptado.txt\n");
    printf("Nome: ");
    scanf("%30[^\n]", nomeDoArquivo);
    if(strcmp(nomeDoArquivo, "encriptado.txt") == 0)
        encriptadoArquivo();
    else if(strcmp(nomeDoArquivo, "decriptado.txt") == 0)
        decriptadoArquivo();
    else    
        printf("!!! ERRO: NOME INVALIDO !!!\n");
}

// CODIFICA STRING DO ARQ_TEXTO
void encriptadoArquivo() {
    arqEncriptado = fopen("encriptado.txt", "wb");
    arqTexto = fopen("texto.bin", "rb");

    system("clear");
    if(arqEncriptado == NULL)
        printf("encriptado.txt N CRIADO\n");
    else {
        fread(stringInicial, sizeof(char), TAM_STRING, arqTexto);
        for(int i = 0; i < TAM_STRING; i++)
        {
            if(stringInicial[i] == 'a')
                stringInicial[i] = 'y';

            else if(stringInicial[i] == 'e')
                stringInicial[i] = ' ';

            else if(stringInicial[i] == 'o')
                stringInicial[i] = 'k';

            else if(stringInicial[i] == 's')
                stringInicial[i] = 'x';

            else if(stringInicial[i] == 'r')
                stringInicial[i] = 'j';

            else if(stringInicial[i] == ' ')
                stringInicial[i] = 'a';  
        }
        stringInicial[8] = 'r';
        fwrite(stringInicial, sizeof(char), TAM_STRING, arqEncriptado);
        printf("ENCRIPTADO: %s\n", stringInicial);
    }
    fclose(arqTexto);
    fclose(arqEncriptado);
}

// DESCODIFICA STRING DO ARQ_ENCRIPTADO
void decriptadoArquivo() {
    arqDecriptado = fopen("decriptado.txt", "wb");
    arqEncriptado = fopen("encriptado.txt", "rb");

    system("clear");
     if(arqEncriptado == NULL)
        printf("encriptado.txt N CRIADO\n");
    else if(arqDecriptado == NULL)
        printf("decriptado.txt N CRIADO\n");
    else {
        fread(stringInicial, sizeof(char), TAM_STRING, arqEncriptado);
        for(int i = 0; i < TAM_STRING; i++)
        {
            if(stringInicial[i] == 'y')
                stringInicial[i] = 'a';

            else if(stringInicial[i] == ' ')
                stringInicial[i] = 'e';

            else if(stringInicial[i] == 'k')
                stringInicial[i] = 'o';

            else if(stringInicial[i] == 'x')
                stringInicial[i] = 's';

            else if(stringInicial[i] == 'a')
                stringInicial[i] = ' ';  
        }
        fwrite(stringInicial, sizeof(char), TAM_STRING, arqDecriptado); 
        printf("DECRIPTADO: %s\n", stringInicial);
    }
    fclose(arqDecriptado);
    fclose(arqEncriptado);
}
