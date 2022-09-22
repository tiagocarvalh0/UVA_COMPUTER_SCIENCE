#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    srand(time(NULL));
    int matriz[TAM][TAM], i, j, soma = 0, somaDiagonal = 0;

    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            if(i + j == TAM - 1)
                somaDiagonal += matriz[i][j];
            else if(i == j)
                somaDiagonal += matriz[i][j];
            else
                soma += matriz[i][j];
        }
    }
    printf("SOMA: %d\nSOMA DIAGONAL: %d\n", soma, somaDiagonal);


    return 0;
}