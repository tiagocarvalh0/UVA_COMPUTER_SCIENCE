#include <stdio.h>
#include <stdlib.h>

int main() {
    int i ;

    scanf("%d", &i);

    int *vetor = calloc(i , sizeof(int));

    for(int x = 0; x < i; x++)
        printf("%d ", vetor[x]);
    printf("\n");

    return 0;
}