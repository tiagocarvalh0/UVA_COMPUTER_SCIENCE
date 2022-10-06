#include <stdio.h>

int main()
{
    int vetor[4], i, soma = 0;

    for(i = 0; i < 4; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("%d\n", soma - 3);

    return 0;
}