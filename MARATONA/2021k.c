#include <stdio.h>
#include <stdlib.h>

int main() {

    int tempoDescanso, tempoVoo, qntRefeicao;

    scanf("%d %d %d", &tempoDescanso, &tempoVoo, &qntRefeicao);

    int qntIntervalo = qntRefeicao+2;

    if(qntRefeicao){
        int tempoComida[qntIntervalo];
        for(int i = 1; i <= qntRefeicao; i++) {
            scanf("%d", &tempoComida[i]);
        }
        tempoComida[0] = 0;
        tempoComida[qntIntervalo-1] = tempoVoo;

        for(int i = 0; i < qntIntervalo-1; i++) {
            int x = tempoComida[i+1] - tempoComida[i];
            if(x >= tempoDescanso) {
                printf("Y\n");
                    exit(1);
            }
        }
        printf("N\n");
    }

    else {
        if(tempoDescanso <= tempoVoo)
            printf("Y\n");
        else
            printf("N\n");
    }

    return  0;
}