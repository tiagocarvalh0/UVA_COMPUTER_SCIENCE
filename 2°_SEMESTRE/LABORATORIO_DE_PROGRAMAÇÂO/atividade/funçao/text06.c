#include <stdio.h>

void decToBits(int x, int *bit1, int *bit2)
{
    if(x == 0)
    {
        *bit1 = 0;
        *bit2 = 0;
    }
    else if(x == 1)
    {
        *bit1 = 0;
        *bit2 = 1;
    }
    else if(x == 2)
    {
        *bit1 = 1;
        *bit2 = 0;
    }
    if (x == 3)
    {
        *bit1 = 1;
        *bit2 = 1;
    }
}

int main()
{
    int x, bit1 = 0, bit2 = 0;

    scanf("%d", &x);

    decToBits(x, &bit1, &bit2);

    printf("NUM = %d\nBit1 = %d\nBit2 = %d\n", x, bit1, bit2);

    return 0;
}