#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// OBS: EXECUTAR  APOS O q04.c GERAR O ARQUIVO

void telaMenu();
void ordenarLista();
void pesquisarLista();

    FILE *arqHistoricoNumero;

    int vetorAUX[61];
    int opcaoSelecionda;
    int aux;

int main() {
    system("clear");
    telaMenu();
}

void telaMenu() {
    arqHistoricoNumero = fopen("dezenas.dat", "rb");

    printf("===== MENU =====\n");
    printf("(1) = Ordenar\n");
    printf("(2) = Pesquisar.\n");
    printf("(3) = SAIR.\n");
    printf("Selecione: ");
    scanf("%d", &opcaoSelecionda);
    if(opcaoSelecionda == 1)
        ordenarLista();
    if(opcaoSelecionda == 2)
        pesquisarLista();
    if(opcaoSelecionda == 3)
        exit(1);
}

void ordenarLista() {
    while(!feof(arqHistoricoNumero)) {
        fread(vetorAUX, sizeof(int), 61, arqHistoricoNumero);
        aux = vetorAUX[0];
    }
    if(aux == 1) 
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
    else if(aux == 2){
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
    }
    else if(aux == 3){
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
    }
    else if(aux == 4) {
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
    }
    else if(aux == 5) {
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
        printf("APOSTA 5: %d,%d,%d,%d,%d,%d\n", vetorAUX[25],vetorAUX[26],vetorAUX[27],vetorAUX[28],vetorAUX[29],vetorAUX[30]);
    }
    else if(aux == 6) {
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
        printf("APOSTA 5: %d,%d,%d,%d,%d,%d\n", vetorAUX[25],vetorAUX[26],vetorAUX[27],vetorAUX[28],vetorAUX[29],vetorAUX[30]);
        printf("APOSTA 6: %d,%d,%d,%d,%d,%d\n", vetorAUX[31],vetorAUX[32],vetorAUX[33],vetorAUX[34],vetorAUX[35],vetorAUX[36]);
    }
    else if(aux == 7) {
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
        printf("APOSTA 5: %d,%d,%d,%d,%d,%d\n", vetorAUX[25],vetorAUX[26],vetorAUX[27],vetorAUX[28],vetorAUX[29],vetorAUX[30]);
        printf("APOSTA 6: %d,%d,%d,%d,%d,%d\n", vetorAUX[31],vetorAUX[32],vetorAUX[33],vetorAUX[34],vetorAUX[35],vetorAUX[36]);
        printf("APOSTA 7: %d,%d,%d,%d,%d,%d\n", vetorAUX[37],vetorAUX[38],vetorAUX[39],vetorAUX[40],vetorAUX[41],vetorAUX[42]);
    }
    else if(aux == 8) {
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
        printf("APOSTA 5: %d,%d,%d,%d,%d,%d\n", vetorAUX[25],vetorAUX[26],vetorAUX[27],vetorAUX[28],vetorAUX[29],vetorAUX[30]);
        printf("APOSTA 6: %d,%d,%d,%d,%d,%d\n", vetorAUX[31],vetorAUX[32],vetorAUX[33],vetorAUX[34],vetorAUX[35],vetorAUX[36]);
        printf("APOSTA 7: %d,%d,%d,%d,%d,%d\n", vetorAUX[37],vetorAUX[38],vetorAUX[39],vetorAUX[40],vetorAUX[41],vetorAUX[42]);
        printf("APOSTA 8: %d,%d,%d,%d,%d,%d\n", vetorAUX[43],vetorAUX[44],vetorAUX[45],vetorAUX[46],vetorAUX[47],vetorAUX[48]);
    }
    else if(aux == 9) {
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
        printf("APOSTA 5: %d,%d,%d,%d,%d,%d\n", vetorAUX[25],vetorAUX[26],vetorAUX[27],vetorAUX[28],vetorAUX[29],vetorAUX[30]);
        printf("APOSTA 6: %d,%d,%d,%d,%d,%d\n", vetorAUX[31],vetorAUX[32],vetorAUX[33],vetorAUX[34],vetorAUX[35],vetorAUX[36]);
        printf("APOSTA 7: %d,%d,%d,%d,%d,%d\n", vetorAUX[37],vetorAUX[38],vetorAUX[39],vetorAUX[40],vetorAUX[41],vetorAUX[42]);
        printf("APOSTA 8: %d,%d,%d,%d,%d,%d\n", vetorAUX[43],vetorAUX[44],vetorAUX[45],vetorAUX[46],vetorAUX[47],vetorAUX[48]);
        printf("APOSTA 9: %d,%d,%d,%d,%d,%d\n", vetorAUX[49],vetorAUX[50],vetorAUX[51],vetorAUX[52],vetorAUX[53],vetorAUX[54]);
    }
    else {
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
        printf("APOSTA 5: %d,%d,%d,%d,%d,%d\n", vetorAUX[25],vetorAUX[26],vetorAUX[27],vetorAUX[28],vetorAUX[29],vetorAUX[30]);
        printf("APOSTA 6: %d,%d,%d,%d,%d,%d\n", vetorAUX[31],vetorAUX[32],vetorAUX[33],vetorAUX[34],vetorAUX[35],vetorAUX[36]);
        printf("APOSTA 7: %d,%d,%d,%d,%d,%d\n", vetorAUX[37],vetorAUX[38],vetorAUX[39],vetorAUX[40],vetorAUX[41],vetorAUX[42]);
        printf("APOSTA 8: %d,%d,%d,%d,%d,%d\n", vetorAUX[43],vetorAUX[44],vetorAUX[45],vetorAUX[46],vetorAUX[47],vetorAUX[48]);
        printf("APOSTA 9: %d,%d,%d,%d,%d,%d\n", vetorAUX[49],vetorAUX[50],vetorAUX[51],vetorAUX[52],vetorAUX[53],vetorAUX[54]);
        printf("APOSTA 10: %d,%d,%d,%d,%d,%d\n", vetorAUX[55],vetorAUX[56],vetorAUX[57],vetorAUX[58],vetorAUX[59],vetorAUX[60]);
    }
    fclose(arqHistoricoNumero);
}
    
void pesquisarLista() {
    printf("Informe o Numero: ");
    scanf("%d", &opcaoSelecionda);

    while(!feof(arqHistoricoNumero)) {
        fread(vetorAUX, sizeof(int), 61, arqHistoricoNumero);
        if(vetorAUX[0] == opcaoSelecionda)
            aux = vetorAUX[0];
    }
        if(aux == 1) 
        printf("APOSTA 1: %d,%d,%d,%d,%d,%d\n", vetorAUX[1],vetorAUX[2],vetorAUX[3],vetorAUX[4],vetorAUX[5],vetorAUX[6]);
    else if(aux == 2){
        printf("APOSTA 2: %d,%d,%d,%d,%d,%d\n", vetorAUX[7],vetorAUX[8],vetorAUX[9],vetorAUX[10],vetorAUX[11],vetorAUX[12]);
    }
    else if(aux == 3){
        printf("APOSTA 3: %d,%d,%d,%d,%d,%d\n", vetorAUX[13],vetorAUX[14],vetorAUX[15],vetorAUX[16],vetorAUX[17],vetorAUX[18]);
    }
    else if(aux == 4) {
        printf("APOSTA 4: %d,%d,%d,%d,%d,%d\n", vetorAUX[19],vetorAUX[20],vetorAUX[21],vetorAUX[22],vetorAUX[23],vetorAUX[24]);
    }
    else if(aux == 5) {
        printf("APOSTA 5: %d,%d,%d,%d,%d,%d\n", vetorAUX[25],vetorAUX[26],vetorAUX[27],vetorAUX[28],vetorAUX[29],vetorAUX[30]);
    }
    else if(aux == 6) {
        printf("APOSTA 6: %d,%d,%d,%d,%d,%d\n", vetorAUX[31],vetorAUX[32],vetorAUX[33],vetorAUX[34],vetorAUX[35],vetorAUX[36]);
    }
    else if(aux == 7) {
        printf("APOSTA 7: %d,%d,%d,%d,%d,%d\n", vetorAUX[37],vetorAUX[38],vetorAUX[39],vetorAUX[40],vetorAUX[41],vetorAUX[42]);
    }
    else if(aux == 8) {
        printf("APOSTA 8: %d,%d,%d,%d,%d,%d\n", vetorAUX[43],vetorAUX[44],vetorAUX[45],vetorAUX[46],vetorAUX[47],vetorAUX[48]);
    }
    else if(aux == 9) {
        printf("APOSTA 9: %d,%d,%d,%d,%d,%d\n", vetorAUX[49],vetorAUX[50],vetorAUX[51],vetorAUX[52],vetorAUX[53],vetorAUX[54]);
    }
    else {
        printf("APOSTA 10: %d,%d,%d,%d,%d,%d\n", vetorAUX[55],vetorAUX[56],vetorAUX[57],vetorAUX[58],vetorAUX[59],vetorAUX[60]);
    }
    fclose(arqHistoricoNumero);
}