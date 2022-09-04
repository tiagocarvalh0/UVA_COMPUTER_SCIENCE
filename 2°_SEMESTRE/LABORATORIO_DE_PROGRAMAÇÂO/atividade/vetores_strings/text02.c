#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define RESUL 20

int main()
{
    int vetor1[TAM], vetor2[TAM], resultado[RESUL], i, j, aux;

    for(i = 0; i < TAM; i++)
    {
        vetor1[i] = rand() % 100;
        vetor2[i] = (rand() % 100) - 1;
        resultado[i] = vetor1[i];
        resultado[i + 10] = vetor2[i];
    }

    for(i = 0; i < RESUL; i++)
        for(j = 0; j < RESUL -1; j++)
            if(resultado[j] > resultado[j + 1])
            {
                aux = resultado[j];
                resultado[j] = resultado[j + 1];
                resultado[j + 1] = aux;
            }
    
    for(i = 0; i < RESUL; i++)
        printf("ELEMNETO (%d) = %d\n", i,  resultado[i]);


    return 0;
}