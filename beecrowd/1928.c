#include <stdio.h>

int main()
{
    int tam, i, a, b, cont = 0;

    scanf("%d", &tam);

    int vetor[tam + 1];

    for(i = 1; i <= tam; i++)
        scanf("%d", &vetor[i]);
    
    for(i = 0; i < tam -1; i++)
    {
        scanf("%d %d", &a, &b);
        printf("(%d, %d)\n", vetor[a], vetor[b]);
        if(vetor[a] == vetor[b])
            cont++;
    }

    printf("%d\n", cont);

    return 0;
}