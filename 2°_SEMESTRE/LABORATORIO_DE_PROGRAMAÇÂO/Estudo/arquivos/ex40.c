#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *arq = fopen("ex39.lib", "rb");
    int vetor[100], t, i, soma = 0;

    if(arq == NULL) {
        printf("ERRO\n");
            exit(1);
    }
    else {
        fread(&t, sizeof(int), 1, arq);
        fread(vetor, sizeof(int), 100, arq);
        for(i = 0; i < 100; i++) {
            printf("Vetor[%d]\n", vetor[i]);
            printf("SOMA: %d\n", (soma += vetor[i]));
        }
        //printf("TOTAL %d\n", soma);
    }
    fclose(arq);
}