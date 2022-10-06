#include <stdio.h>

void ordena(int vetor[])
{
    int aux, i, j;

    for(j = 0; j < 4; j++)
    {
        for(i = 0; i < 3; i++)
        {
            if(vetor[i] < vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }

}

int formaTriangulo(int vetor[])
{
    if(vetor[1] + vetor[2] > vetor[0])
        return 1;
    else if(vetor[2] + vetor[3] > vetor[1])
        return 1;
    else 
        return 0;   
}

int main()
{
    int vetor[4], i;

    for(i = 0; i < 4; i++)
        scanf("%d", &vetor[i]);

    ordena(vetor);
    if(formaTriangulo(vetor) == 1)
        printf("S\n");
    else    
        printf("N\n");
  
    return 0;
}