#include <stdio.h>

int main() {
    FILE *fp;

    // Abrir o arquivo para escrita
    fp = freopen("saida.txt", "a+", stdout);

    // Exibir algo na tela
    printf("Hello!ff\n");

    // Fechar o arquivo
    fclose(fp);

    return 0;
}
