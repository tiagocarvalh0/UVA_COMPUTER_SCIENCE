#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int totalGravado, vetor[5] = {10,20,30,40,50};

    arquivo = fopen("file.lab", "wb");
    if(arquivo == NULL)
        printf("ERRO: ARQUIVO N CRIADO\n");
    else {
        totalGravado = fwrite(vetor, sizeof(int), 5, arquivo);
    }
    fclose(arquivo);
}