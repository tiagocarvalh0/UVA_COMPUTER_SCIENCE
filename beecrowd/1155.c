#include <stdio.h>

int main()
{
    int i;
    double soma = 0;

    for(i = 2; i < 101; i++)
    {
        soma+= 1.0/i;
    }

    printf("%.2lf\n", soma + 1);

    return 0;
}