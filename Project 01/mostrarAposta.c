#include <stdio.h>
#include "var.h"

int main() {
    system("cls");
    historicoAposta = fopen("HISTORICO_APOSTA.lib", "ab+");

    if(historicoAposta == NULL)
        printf("ERRO: HISTORICO\n");
    else {
    	
        while(!feof(historicoAposta)) {
			fread(&cadastro, sizeof(t_cadastro), 1, historicoAposta);
            if(cadastro.valido == 0) {
                printf("================\n");
                printf("BILHETE: %04d\n", cadastro.numBilhete1);
                printf("DATA: %02d/%02d/%02d\n", cadastro.diaAposta1, cadastro.mesAposta1, cadastro.anoAposta1);
                printf("EMITIDO: %02d:%02d\n", cadastro.horaAposta1, cadastro.minAposta1);
                printf("LOCAL: %s\n", local[cadastro.localAposta - 1]);
                if(cadastro.localAposta == 1)
                    printf("HORARIO: %s\n", horarioLocalRJ[cadastro.horarioAposta - 1]);
                else    
                    printf("HORARIO: %s\n", horarioLocalCE[cadastro.horarioAposta - 1]);
                printf("VALOR:R$ %.02f\n", cadastro.valorAposta);
                printf("ANIMAL: %s\n", animal[cadastro.animalAposta - 1]);
            }
        }
    }
    fclose(historicoAposta);
    system("pause");
}
