#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20

int main() {
    
    FILE *arq = fopen("file1.lab", "wb");
    char str[TAM] = {"Hello Word!"};
    int t = TAM;
    if(arq == NULL)
        printf("ERRO: ARQUINO N EXISTE\n");
    else {
        fwrite(&t, sizeof(int), 1, arq);
        fwrite(str, sizeof(char), t, arq);
        fclose(arq);
        return 0;
    }
}