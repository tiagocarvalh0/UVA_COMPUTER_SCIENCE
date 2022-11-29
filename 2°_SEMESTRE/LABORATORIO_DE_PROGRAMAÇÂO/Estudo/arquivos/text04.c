#include <stdio.h>
#include <stdlib.h>

    FILE *arq;
    int quant = 1000;

int main() {

    arq = fopen("file.lib", "ab+");

    if(arq == NULL)
        printf("ARQUINO INVALIDO\n");
    else {
        while(1) {
            if(feof(arq))
               break;
            fread(&quant, sizeof(int), 1, arq);
        }        
        quant++;
        fwrite(&quant, sizeof(int), 1, arq);  
        printf("%d\n", quant);
    }
    fclose(arq);
}