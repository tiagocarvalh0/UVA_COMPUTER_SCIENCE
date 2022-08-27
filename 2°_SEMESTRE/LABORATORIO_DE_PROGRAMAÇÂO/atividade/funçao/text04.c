#include <stdio.h>

void decimal(float x, int *y, int *z)
{
    *y = x;
    *z = (x - *y) * 100;
}

int main()
{
    float x;
    int y, z;

    scanf("%f", &x);

    decimal(x, &y, &z);

    printf("%d\n%d\n", y, z);

    return 0;
}