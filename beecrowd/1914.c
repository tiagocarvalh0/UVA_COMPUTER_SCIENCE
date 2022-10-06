#include <stdio.h>
#include <string.h>

void vencedor(char nomes[][100], int vetor[])
{
    int i, soma = 0;
    char resultado[10];

    for(i = 0; i < 2; i++)
        soma += vetor[i];
    
    if(soma % 2 == 0)
        strcpy(resultado, "PAR");
    else    
        strcpy(resultado, "IMPAR");

    for(i = 0; i < 4; i++)
    {
        if(strcmp(nomes[i], resultado) == 0)
            printf("%s\n", nomes[i - 1]);
    }
}

int main()
{
    int tam, i, j, k;
    int vetor[2];
    char nomes[4][100];

    scanf("%d", &tam);

    for(i = 0; i < tam; i++)
    {
            scanf("%s %s %s %s", nomes[0], nomes[1],nomes[2], nomes[3]);
            scanf("%d %d", &vetor[0], &vetor[1]);  
        vencedor(nomes, vetor);
    }

    return 0;
}