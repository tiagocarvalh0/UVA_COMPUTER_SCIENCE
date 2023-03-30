#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {

    srand(time(NULL));

    int N = -1;

    while(N <= 0)
        scanf("%d", &N);

    int *vetor = calloc(N, sizeof(int));

    for(int i = 0; i < N; i++){
        while(vetor[i] <= 2) {
            vetor[i] = rand() % 100;
        }
        printf("[%d] ", vetor[i]);
    }

    free(vetor);

    return 0;
}