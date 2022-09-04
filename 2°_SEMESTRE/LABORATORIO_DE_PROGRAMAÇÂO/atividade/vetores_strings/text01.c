#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    int vetor[TAM], i, j;

    for(i = 0; i < TAM; i++)
        vetor[i] = rand() % 10;  

    for(i = 0; i < TAM; i++)
    {
        printf("ELEMENTO %d\nVALOR %d\n", i, vetor[i]);
        while(vetor[i] != 0)
        {
            if(vetor[i] > 0)
            {
                printf("*");
                vetor[i]--;
            }
        }
        printf("\n");
    }

    return 0;
}