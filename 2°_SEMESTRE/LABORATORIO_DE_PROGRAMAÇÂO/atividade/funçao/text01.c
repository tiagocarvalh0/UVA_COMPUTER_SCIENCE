#include <stdio.h>

int somaNum(int x, int y, int *soma)
{
    int i;
    if(x > y)
    {
        x = y;
        y = x;
    }
    for(i = x + 1; i < y; i++)
        *soma += i;
    
}

int main()
{
    int x, y, soma = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    somaNum(x, y, &soma);

    printf("%d\n", soma);

    return 0;
}

