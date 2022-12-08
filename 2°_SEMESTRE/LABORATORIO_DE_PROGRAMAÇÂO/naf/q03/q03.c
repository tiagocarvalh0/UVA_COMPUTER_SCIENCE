#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerPrimos1a100();
void ordenarVetorPrimos100a1();
void gravarPrimos100a1();

    FILE *arqPrimos1a100;
    FILE *arqPrimos100a1;

    int primosAux;
    int vetorNumerosPrimos[5];
    int numerosPrimos100a1[101];
    int numeroSelecioando;

int main() {

    printf("Numero Primo: ");
    scanf("%d", &numeroSelecioando);

    lerPrimos1a100();
    ordenarVetorPrimos100a1();
    gravarPrimos100a1();

    return 0;
}

//Usando apenas uma variável inteira para carregar informação do aquivo, busque o n-ésimo primo do aquivo (de acordo com o número fornecido pelo usuário) e o mostre no terminal.
void lerPrimos1a100() {
    arqPrimos1a100 = fopen("primos1a100.bin", "rb");


    if(arqPrimos1a100 == NULL)
        printf("!!! ERRO ARQ !!! \n");
    else {
        fseek(arqPrimos1a100, sizeof(int) * --numeroSelecioando, SEEK_SET);
        fread(&primosAux, sizeof(int), 1, arqPrimos1a100);
        printf("%dº Primos = %d\n ", ++numeroSelecioando, primosAux);

        //Usando um vetor de 5 posições carregue uma sequência de cinco números primos começando na posição indicada pelo usuário.
        fseek(arqPrimos1a100, sizeof(int) * --numeroSelecioando, SEEK_SET);
        printf("Vetor = ");
        for(int i = 0; i < 5; i++) {
            fread(&vetorNumerosPrimos[i], sizeof(int), 1, arqPrimos1a100);
            if(feof(arqPrimos1a100))
                break;
            printf("%d ", vetorNumerosPrimos[i]);
        }
        printf("\n");

        rewind(arqPrimos1a100);
        for(int i = 0; i < 101; i++)
            fread(&numerosPrimos100a1[i], sizeof(int), 1, arqPrimos1a100);
    }
    fclose(arqPrimos1a100);
}

void ordenarVetorPrimos100a1() {
    for(int j = 0; j < 100; j++)
        for(int i = 0; i < 99; i++) {
            if(numerosPrimos100a1[i] < numerosPrimos100a1[i+1]) {
                primosAux = numerosPrimos100a1[i+1];
                numerosPrimos100a1[i+1] = numerosPrimos100a1[i];
                numerosPrimos100a1[i] = primosAux;
            }
        }
}

// Crie um aquivo binário primos100a1.bin com os números do arquivo primos1a100.bin na ordem inversa 
void gravarPrimos100a1() {
    arqPrimos100a1 = fopen("primos100a1.bin", "ab");

    if(arqPrimos100a1 == NULL)
        printf("!!! ERRO ARQ !!!\n");
    else {
        fwrite(&numerosPrimos100a1, sizeof(int), 100, arqPrimos1a100);
    }
    fclose(arqPrimos100a1);

    // Em seguida abra o aquivo e mostre seu conteúdo.
    arqPrimos100a1 = fopen("primos100a1.bin", "rb");

    if(arqPrimos100a1 == NULL)
        printf("!!! ERRO ARQ !!!\n");
    else {
        fread(&numerosPrimos100a1, sizeof(int), 100, arqPrimos1a100);
        for(int i = 0; i < 100; i++)
            printf("%d ", numerosPrimos100a1[i]);
        printf("\n");
    }
    fclose(arqPrimos100a1);
}