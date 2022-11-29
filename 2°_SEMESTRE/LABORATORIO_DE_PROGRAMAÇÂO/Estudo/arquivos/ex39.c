#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int main() {

    FILE *arq = fopen("ex39.lib", "wb");
    int vetor[TAM], i, t = TAM;

    if(arq == NULL) {
        printf("ERRO!\n");
            exit(1);
    } 
    else {
        for(i = 0; i < TAM; i++)
            vetor[i] = (i + 1);
        fwrite(&t, sizeof(int), 1, arq);
        fwrite(vetor, sizeof(int), TAM, arq);
        printf("GRAVADO\n");
    }
    fclose(arq);
}