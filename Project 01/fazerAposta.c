#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "var.h"
#include "menuTela.h"

void fazerAposta();
void dataAtual();
void escolherHorarioDaAposta();
void salvarArquivoAtual();
void salvarArquivoNoHistorico();

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
    arqApostaAtual = fopen("APOSTA_RECENTE.txt", "w");
    arqHistoricoAposta = fopen("HISTORICO_APOSTA.lib", "ab");
    arqHistoricoApostaTXT = fopen("HISTORICO_APOSTA_EXCEL.txt", "a");
    arqNumeroBilhete = fopen("NUMERO_BILHETE.lib", "ab+");

    if((arqApostaAtual == NULL) || (arqHistoricoAposta == NULL) || (arqNumeroBilhete == NULL)) {
        printf("ERRO ARQ N CRIADO!\n");
    }
    else {
        while(1) {
            if(feof(arqNumeroBilhete))
                break;
            //fseek(numeroBilhete, 0, SEEK_CUR);
            fread(&numBilhete, sizeof(int), 1, arqNumeroBilhete);
        }
        numBilhete++;
        fwrite(&numBilhete, sizeof(int), 1, arqNumeroBilhete);

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

        fwrite(&cadastro, sizeof(t_cadastro), 1, arqHistoricoAposta);
        salvarArquivoAtual();
        salvarArquivoNoHistorico();
        printf("APOSTA FEITA\n");
        fclose(arqApostaAtual);
        fclose(arqHistoricoAposta);
        fclose(arqHistoricoApostaTXT);
        fclose(arqNumeroBilhete);
        system("APOSTA_RECENTE.txt");
    }
} 

void escolherHorarioDaAposta() {
    if(cadastro.localAposta == RJ)
        turnoApostaRJ();
    else 
        turnoApostaCE();
}

void salvarArquivoAtual() {
    fprintf(arqApostaAtual, "%s\n", barra);
    fprintf(arqApostaAtual, "BILHETE: %04d\n", cadastro.numBilhete1);
    fprintf(arqApostaAtual, "DATA: %02d/%02d/%02d\n", cadastro.diaAposta1, cadastro.mesAposta1, cadastro.anoAposta1);
    fprintf(arqApostaAtual, "EMITIDO: %02d:%02d\n", cadastro.horaAposta1, cadastro.minAposta1);
    fprintf(arqApostaAtual, "LOCAL: %s\n", local[cadastro.localAposta - 1]);
    if(cadastro.localAposta == 1)
        fprintf(arqApostaAtual, "HORARIO: %s\n", horarioLocalRJ[cadastro.horarioAposta - 1]);
    else    
        fprintf(arqApostaAtual, "HORARIO: %s\n", horarioLocalCE[cadastro.horarioAposta - 1]);
    fprintf(arqApostaAtual, "VALOR:R$ %.02f\n", cadastro.valorAposta);
    fprintf(arqApostaAtual, "ANIMAL: %s\n", animal[cadastro.animalAposta - 1]);
    fprintf(arqApostaAtual, "%s\n", barra);
}

void salvarArquivoNoHistorico() {
    /*fprintf(arqHistoricoApostaTXT, "%d, %02d/%02d/%02d, %02d:%02d, %s, ", cadastro.numBilhete1, cadastro.diaAposta1, cadastro.mesAposta1, cadastro.anoAposta1, );
    if(cadastro.localAposta == 1)
        fprintf(arqApostaAtual, "%s,", horarioLocalRJ[cadastro.horarioAposta - 1]);
    else    
        fprintf(arqApostaAtual, "%s,", horarioLocalCE[cadastro.horarioAposta - 1]);
    fprintf(arqHistoricoApostaTXT, "R$ %.02f, %s\n")*/
    fprintf(arqHistoricoApostaTXT, "%04d,", cadastro.numBilhete1);
    fprintf(arqHistoricoApostaTXT,"%02d/%02d/%02d,", cadastro.diaAposta1, cadastro.mesAposta1, cadastro.anoAposta1);
    fprintf(arqHistoricoApostaTXT, "%02d:%02d,", cadastro.horaAposta1, cadastro.minAposta1);
    fprintf(arqHistoricoApostaTXT, "%s,", local[cadastro.localAposta - 1]);
    if(cadastro.localAposta == 1)
        fprintf(arqHistoricoApostaTXT, "%s,", horarioLocalRJ[cadastro.horarioAposta - 1]);
    else    
        fprintf(arqHistoricoApostaTXT, "%s,", horarioLocalCE[cadastro.horarioAposta - 1]);
    fprintf(arqHistoricoApostaTXT, "R$ %.02f,", cadastro.valorAposta);
    fprintf(arqHistoricoApostaTXT, "%s\n", animal[cadastro.animalAposta - 1]);
}
