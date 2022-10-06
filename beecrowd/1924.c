#include <stdio.h>

int main()
{
    int tam, i;

    scanf("%d", &tam);
    scanf("%*c");

    char matriz[tam][100];

    for(i = 0; i < tam; i++)
    {
        scanf("%100[^\n]", matriz[i]);
        scanf("%*c");
    }

    printf("Ciencia da Computacao\n");

    return 0;
}