#include <stdio.h>

float maiorDeTres(float a, float b, float c)
{
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main()
{
    float x, y, z;

    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    printf("%.1f\n", maiorDeTres(x, y, z));

    return 0;
}