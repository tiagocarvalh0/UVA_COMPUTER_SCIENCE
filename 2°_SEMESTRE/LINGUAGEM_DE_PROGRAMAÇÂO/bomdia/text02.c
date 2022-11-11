#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char matriz[7][10];

    //COMANDOS EXTENDIDOS
    strcpy(matriz[0], "--help");
    strcpy(matriz[1], "--version");
    strcpy(matriz[2], "--pt");
    strcpy(matriz[3], "--en");
    strcpy(matriz[4], "--es");
    strcpy(matriz[5], "--fr");
    strcpy(matriz[6], "--it");

    /*//COMANDOS COMPCTOS
    strcpy(matriz[0][1], "-h");
    strcpy(matriz[1][1], "-v");
    strcpy(matriz[2][1], "-1");
    strcpy(matriz[3][1], "-2");
    strcpy(matriz[4][1], "-3");
    strcpy(matriz[5][1], "-4");
    strcpy(matriz[6][1], "-5");*/

    for(int i = 0; i < 7; i++)
        printf("%s || %s\n", matriz[i][], matriz[i][]);

}