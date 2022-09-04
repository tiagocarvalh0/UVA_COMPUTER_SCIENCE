#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15], vetor1[15], i, cont = 0, cont1 = 0;

    for(i = 0; i < 15; i++)
        vetor[i] = rand() % 100;
    for(i = 0; i < 15; i++)
    {
        printf("P = %d\n", vetor[i]);
        for(int j = 1; j < vetor[i] + 1; j++)
        {   
            if(vetor[i] % j == 0)
                cont++;
        }
        if(cont == 2)
        {
            vetor1[i] = vetor[i];
            cont1++;
            cont = 0;
        }
    }
    for(i = 0; i < cont1; i++)
        printf("PRIMO = %d\n", vetor1[i]);
    
}