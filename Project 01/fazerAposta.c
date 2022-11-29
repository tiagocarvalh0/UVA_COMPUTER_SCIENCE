#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "var.h"
#include "menuTela.h"

void fazerAposta();
void dataAtual();
void escolherHorarioDaAposta();
void salvarArquivo();

    const char barra[20] = {"================"};

int main() {
    system("cls");
    dataAtual();
    fazerAposta(); 
}

void dataAtual() {
    struct tm *dataHoraAtual;
    time_t segundos;
    time(&segundos);
    dataHoraAtual = localtime(&segundos);

    dia_aposta  = dataHoraAtual->tm_mday;
	mes_aposta  = (dataHoraAtual->tm_mon) + 1;
	ano_aposta  = (dataHoraAtual->tm_year) - 100;
	hora_aposta = dataHoraAtual->tm_hour;
	min_aposta  = dataHoraAtual->tm_min;
}

void fazerAposta() {
    apostaAtual = fopen("APOSTA_RECENTE.txt", "w");
    historicoAposta = fopen("HISTORICO_APOSTA.lib", "ab");
    numeroBilhete = fopen("NUMERO_BILHETE.lib", "ab+");

    if((apostaAtual == NULL) || (historicoAposta == NULL) || (numeroBilhete == NULL)) {
        printf("ERRO ARQ N CRIADO!\n");
    }
    else {
        while(1) {
            if(feof(numeroBilhete))
                break;
            //fseek(numeroBilhete, 0, SEEK_CUR);
            fread(&numBilhete, sizeof(int), 1, numeroBilhete);
        }
        numBilhete++;
        fwrite(&numBilhete, sizeof(int), 1, numeroBilhete);

        cadastro.numBilhete1 = numBilhete;
        cadastro.diaAposta1 = dia_aposta;
        cadastro.mesAposta1 = mes_aposta;
        cadastro.anoAposta1 = ano_aposta;
        cadastro.horaAposta1 = hora_aposta;
        cadastro.minAposta1 = min_aposta;

        printf("================\n");
        printf("BILHETE: %04d\n", cadastro.numBilhete1);
        printf("DATA: %02d/%02d/%02d\n", cadastro.diaAposta1, cadastro.mesAposta1, cadastro.anoAposta1);
        printf("EMITIDO: %02d:%02d\n", cadastro.horaAposta1, cadastro.minAposta1);
        printf("(1) = RJ.\n");
        printf("(2) = CE.\n");
        printf("LOCAL: ");
        scanf("%d", &cadastro.localAposta);
        system("cls");
        escolherHorarioDaAposta();
        printf("HORARIO: ");
        scanf("%d", &cadastro.horarioAposta);
        system("cls");
        printf("VALOR:R$ ");
        scanf("%f", &cadastro.valorAposta);
        system("cls");
        menuAnimal();
        printf("ANIMAL: ");
        scanf("%d", &cadastro.animalAposta);
        system("cls");
        cadastro.valido = 0;
        cadastro.ganhadorAposta = 0;

        fwrite(&cadastro, sizeof(t_cadastro), 1, historicoAposta);
        salvarArquivo();
        printf("APOSTA FEITA\n");
        fclose(apostaAtual);
        fclose(historicoAposta);
        fclose(numeroBilhete);
        system("APOSTA_RECENTE.txt");
    }
} 

void escolherHorarioDaAposta() {
    if(cadastro.localAposta == RJ)
        turnoApostaRJ();
    else 
        turnoApostaCE();
}

void salvarArquivo() {
    fprintf(apostaAtual, "%s\n", barra);
    fprintf(apostaAtual, "BILHETE: %04d\n", cadastro.numBilhete1);
    fprintf(apostaAtual, "DATA: %02d/%02d/%02d\n", cadastro.diaAposta1, cadastro.mesAposta1, cadastro.anoAposta1);
    fprintf(apostaAtual, "EMITIDO: %02d:%02d\n", cadastro.horaAposta1, cadastro.minAposta1);
    fprintf(apostaAtual, "LOCAL: %s\n", local[cadastro.localAposta - 1]);
    if(cadastro.localAposta == 1)
        fprintf(apostaAtual, "HORARIO: %s\n", horarioLocalRJ[cadastro.horarioAposta - 1]);
    else    
        fprintf(apostaAtual, "HORARIO: %s\n", horarioLocalCE[cadastro.horarioAposta - 1]);
    fprintf(apostaAtual, "VALOR:R$ %.02f\n", cadastro.valorAposta);
    fprintf(apostaAtual, "ANIMAL: %s\n", animal[cadastro.animalAposta - 1]);
    fprintf(apostaAtual, "%s\n", barra);
}
