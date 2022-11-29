#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int i, totalLido, vetor[5];
    arquivo = fopen("file.lab", "rb");
    if(arquivo == NULL)
        printf("ERRO: ARQUIVO INVALIDO!\n");
    else {
        totalLido = fread(vetor, sizeof(int), 5, arquivo);
        if(totalLido != 5)
            printf("ERRO TOTAL LIDO\n");
        else {
            for(i = 0; i < 5; i++)
                printf("Vetor[%d]\n", vetor[i]);
        }
    }
    fclose(arquivo);
}