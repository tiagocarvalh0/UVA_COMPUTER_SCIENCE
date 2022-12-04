#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM_VETOR 61

void telaMenu();
void gerarNumero();

    FILE *arqHistoricoNumero;

    int vetorNumeros[TAM_VETOR];
    int numeroJogado = 0;
    int numAleatorio;
    int vetorAUX[61];
    int i = 1, j, igual;
    int opcao = 0;
    int num = 0;

int main() {
    system("clear");
    gerarNumero();
    telaMenu();
}

void telaMenu() {
    arqHistoricoNumero = fopen("dezenas.dat", "ab+");
    fwrite(&vetorAUX, sizeof(int), 61, arqHistoricoNumero);

    while(num != 9){
        if(arqHistoricoNumero == NULL)
            printf("ERRO: ARQ N CRIAR\n");
        else {
            while(!feof(arqHistoricoNumero)) {
                fread(vetorAUX, sizeof(int), 61, arqHistoricoNumero);
            }
            system("clear");
            printf("APOSTA (%d): ", vetorAUX[0]); 
            for(int x = 1; x <= (vetorAUX[0] * 6); x++)
                printf("(%d) ", vetorAUX[x]);
            printf("\n"); 
            vetorAUX[0] +=1;
            fwrite(&vetorAUX, sizeof(int), 61, arqHistoricoNumero);
            printf("SORTEAR MAUS NUEMROS:\n");
            printf("(1) = SIM.\n");
            printf("(2) = NAO.\n");
            printf("Selecione: ");
            scanf("%d", &opcao); 
            if(opcao == 1)
                num++; 
            else    
                break; 
        }
    }
    fclose(arqHistoricoNumero);
}

void gerarNumero() {
    do {
        vetorAUX[i] = (rand() % 61) + 1;
        igual = 0;
        for(j = 0; j < i; j++){ 
            if(vetorAUX[j] == vetorAUX[i])
                igual = 1;
    }
        if(igual == 0)
            i++;
    }while(i <= 61);
    vetorAUX[0] = 1;
}