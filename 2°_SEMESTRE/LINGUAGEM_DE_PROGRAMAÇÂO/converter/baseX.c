#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define TAM_STRING 15

void tratarErros();

int main(int argc, char *argv[]) {

    //tratarErros(argc, argv);
    for(int i = 0; i < TAM_STRING; i++)
        printf("%c, ", tabelaCaracteresHexadecimal[i]);

    return 0;
}

void tratarErros(int argc, char *argv[]) {
    if(argv[BASE] == )
}