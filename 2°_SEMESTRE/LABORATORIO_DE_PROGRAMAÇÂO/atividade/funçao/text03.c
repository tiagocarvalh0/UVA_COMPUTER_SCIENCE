#include <stdio.h>

int numElevado(int x, int y)
{
    int multi = 1, i;

    for(i = 0; i < y; i++)
        multi *= x;

    return multi;
}

int main()
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d\n", numElevado(x, y));

    return 0;
}