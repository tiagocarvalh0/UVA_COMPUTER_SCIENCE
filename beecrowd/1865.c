#include <stdio.h>
#include <string.h>

int main()
{
    int tam, i, j;

    scanf("%d", &tam);

    int vetorForca[tam];
    char nomes[tam][10];
    char nomeThor[5] = "Thor";

    for(i = 0; i < tam; i++)
    {
        scanf("%s", nomes[i]);
        scanf("%d", &vetorForca[i]);
        if(strcmp(nomes[i], nomeThor) == 0)
            printf("Y\n");
        else
            printf("N\n");

    }
    
    return 0;
}