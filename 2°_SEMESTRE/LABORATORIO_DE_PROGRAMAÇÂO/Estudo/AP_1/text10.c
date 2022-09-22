#include <stdio.h>

void primos(int vetor[], int num)
{
    int i, cont = 0, cont_primo = 0, j = 0, k = 0;

    while(cont_primo != num)
    {
        for(i = 1; i <= j; i++)
        {
            if(j % i == 0)
                cont++;
        }
        //printf("(%d)\n", cont);
        if(cont == 2)
        {
            //printf("(%d)", j);
            vetor[k++] = j;
            cont_primo++;
        }
        else 
            cont = 0;
        j++;
    }

    for(i = 0; i < num; i++)
        printf("%d, ", vetor[i]);

}

int main()
{
    int num;

    scanf("%d", &num);

    int vetor[num];

    primos(vetor, num);

    return 0;
}