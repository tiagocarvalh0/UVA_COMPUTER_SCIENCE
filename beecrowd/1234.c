#include <stdio.h>

int main()
{
    char nome[51];

    scanf("%51[^\n]", nome);

    int vetor[51], i;

    for(i = 0; i < 51; i++)
    {
        vetor[i] = 64;
    }

    for(i = 0; i < 51; i++)
    {
        if(nome[i] == 64)
            break;
        vetor[i] = nome[i];
    }

    for(i = 0; i < 51; i++)
    {
        if(vetor[i] == 64)
            break;
        printf("(%c = %d)\n", vetor[i], vetor[i]);
    }

    return 0;
}