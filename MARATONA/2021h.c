#include <stdio.h>
#include <stdlib.h>

int main() {
    int qntBloco, qntCor;

    scanf("%d %d", &qntBloco, &qntCor);

    int vetorBloco[qntBloco], vetorCor[qntBloco], vetorOrdenado[qntBloco];

    for(int i = 0; i < qntBloco; i++) {
        scanf("%d %d", &vetorBloco[i], &vetorCor[i]);
        vetorOrdenado[i] = vetorBloco[i];
    }

    for(int i = 0; i < qntBloco; i++) {
        for(int j = 0; j < qntBloco; j++) {
            if(vetorOrdenado[i] < vetorOrdenado[j]) {
                int auxOrde;
                auxOrde = vetorOrdenado[i];
                vetorOrdenado[i] = vetorOrdenado[j];
                vetorOrdenado[j] = auxOrde;
            }
            if(vetorCor[i] == vetorCor[j]) {
                if(vetorBloco[i] < vetorBloco[j]) {
                    int aux;
                    int auxCor;
                    aux = vetorBloco[i];
                    auxCor = vetorCor[i];
                    vetorBloco[i] = vetorBloco[j];
                    vetorCor[i] = vetorCor[j];
                    vetorBloco[j] = aux;
                    vetorCor[j] = auxCor;
                }
            }
        }
    }

    for(int i = 0; i < qntBloco; i++) {
            if(vetorOrdenado[i] != vetorBloco[i]) {
                printf("N\n");
                    exit(1);
            }
    }

    printf("Y\n");

    return 0;
}