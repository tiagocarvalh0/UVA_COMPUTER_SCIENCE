#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void paresPrimeiro(int vetor[], int tam)
{
    int i, j = 0, aux;

    for(i = 0; i < tam; i++)
    {
        if(vetor[i] % 2 == 0)
            aux = vetor[i];
            
    }

}

int main()
{
    srand(time(NULL));
    int tam = -1, i;

    scanf("%d", &tam);

    int vetor[tam];

    for(i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 101;
        printf("%d, ", vetor[i]);
    }

    paresPrimeiro(vetor, tam);

    for(i = 0; i < tam; i++)
    {
        if(vetor[i] % 2 != 0)
            break;
        printf("(%d), ", vetor[i]);
    }

    return 0;
}