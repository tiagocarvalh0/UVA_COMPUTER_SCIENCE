#include <stdio.h>

int ordenado(int vetor[], int tam)
{
    int vetor1[tam], vetor2[tam], i, j, aux, cont = 0;

    for(i = 0; i < tam; i++)
    {
        vetor2[i] = vetor[i];
        vetor1[i] = vetor[i];
    }


    // VETOR CRESCENTE
    for(j = 0; j < tam; j++)
    {
        for(i = 0; i < tam - 1; i++)
        {
            if(vetor1[i] > vetor1[i + 1])
            {
                aux = vetor1[i];
                vetor1[i] = vetor1[i + 1];
                vetor1[i + 1] = aux;
            }
        }
    }

    for(i = 0; i < tam; i++)
    {
        if(vetor1[i]  == vetor[i])
        cont++;
    }

    if(cont == tam)
        return -1;
    else
        cont = 0;
    // FIM VETOR CRESCENTE
    
    // VETOR DECRESCENTE
    for(j = 0; j < tam; j++)
    {
        for(i = 0; i < tam - 1; i++)
        {
            if(vetor2[i] < vetor2[i + 1])
            {
                aux = vetor2[i];
                vetor2[i] = vetor2[i + 1];
                vetor2[i + 1] = aux;
            }
        }
    }

    for(i = 0; i < tam; i++)
    {
        if(vetor2[i]  == vetor[i])
        cont++;
    }

    if(cont == tam)
        return 1;
    else
        cont = 0;
    // FIM VETOR DECRESCENTE

    return 0;

}

int main()
{
    int tam, i;

    scanf("%d", &tam);

    int vetor[tam];

    for(i = 0; i < tam; i++)
        scanf("%d", &vetor[i]);

    printf("(%d)\n",ordenado(vetor, tam));

    return 0;
}