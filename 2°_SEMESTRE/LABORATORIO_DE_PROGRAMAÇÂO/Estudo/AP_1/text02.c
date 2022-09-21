#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

void verificarPrimo(int vetorA[], int vetorB[])
{
    int i, j, cont = 0, position = 0;

    for(i = 0; i < TAM; i++)
    {
        for(j = 1; j <= vetorA[i]; j++)
        {
            if(vetorA[i] % j == 0)
                cont++;
        }
        if(cont == 2)
            vetorB[position++] = vetorA[i];
        else    
            cont = 0;
    }

}

int main()
{
    srand(time(NULL));

    int vetorA[TAM], vetorB[TAM] = {0}, i;

    for(i = 0; i < TAM; i++)
        vetorA[i] = rand() % 100;

    verificarPrimo(vetorA, vetorB);

    for(i = 0; i < TAM; i++)
    {
        if(vetorB[i] == 0)
            break;
        printf("%d, ", vetorB[i]);
    }
    printf("\n");

    return 0;
}