#include <stdio.h>

int main()
{
    float vetor[5], soma = 0;
    int i, cont1 = 0, cont2 = 0;

    for(i =0; i < 5; i++)
        scanf("%f", &vetor[i]);

    for(i = 0; i < 5; i++)
    {
        if(vetor[i] <= 50)
            cont1++;
        if(vetor[i] > 50)
        {
            soma += vetor[i];
            cont2++;
        }
    }

    printf("%d <= R$50,00\n", cont1);
    printf("MEDIA = (R$%.2f) < R$50,00\n", soma / cont2);

    return 0;
}