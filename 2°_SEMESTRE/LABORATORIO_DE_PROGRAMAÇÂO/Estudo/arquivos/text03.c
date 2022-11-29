#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arq = fopen("file1.lab", "rb");
    char str[20];
    int t;

    if(arq == NULL)
        printf("ERRO\n");
    else {
        fread(&t, sizeof(int), 1, arq);
        fread(str, sizeof(char), t, arq);
        str[t] = '\0';
        printf("%s\n", str);
    }
    fclose(arq);
}