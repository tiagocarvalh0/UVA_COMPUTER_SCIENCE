#include <stdio.h>
#include <stdlib.h>

int main() {

    // Verifica se o arquivo existe
    FILE* file = fopen("arquivo.xlsx", "r");
    if (file != NULL) {
        // Se o arquivo existe, fecha-o e exclui-o
        fclose(file);
        remove("arquivo.xlsx"); 
    } else {
        printf("Arquivo nao encontrado.\n");
    }

    return 0;
}
