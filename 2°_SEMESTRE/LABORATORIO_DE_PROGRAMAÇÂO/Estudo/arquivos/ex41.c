#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 500

void sortearNumeros();
void gravarQuant();

    FILE *arq;
    int vetor[TAM], quant;
int main() {

    sortearNumeros();
    gravarQuant();
    
    return 0;
}

void sortearNumeros() {
    srand(time(NULL));
    quant = rand() % 501;
    for(int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 501; 
        //printf("%d\n", vetor[i]);
    }
}
void gravarQuant() {
    arq = fopen("ex41.lib", "wb");

    if(arq == NULL)
        printf("ERRO AO CRIAR ARQUIVO\n");
    else {
        fwrite(&quant, sizeof(int), 1, arq);
        printf("ARQUIVO GRAVADO\n");
    }

    fclose(arq);
}