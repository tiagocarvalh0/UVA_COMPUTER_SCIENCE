#include <stdio.h>
#define TAM 5

int main()
{
    int i, cont = 0, cont1 = 0;
    char nomes[TAM][20];
    float preco[TAM][1], soma;

    for(i = 0; i < TAM; i++)
    {
        scanf("%20[^\n]", nomes[i]);
        scanf("%*c");
        scanf("%f", &preco[i][0]);
        scanf("%*c");
    }
    for(i = 0; i < TAM; i++)
    {
        if(preco[i][0] < 50)
            cont++;
        if((preco[i][0] > 50) && (preco[i][0] < 100))
            printf("NOME :%s\n", nomes[i]);
        if(preco[i][0] > 100)
        {
            soma+= preco[i][0];
            cont1++;
        }
    }

    printf("-50: %d\n", cont);

    printf("MEDIA: R$ %.2f\n", soma / cont1);



}