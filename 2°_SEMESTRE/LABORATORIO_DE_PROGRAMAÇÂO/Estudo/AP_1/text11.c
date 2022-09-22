#include <stdio.h>

int main()
{
    int matriz[8][8] = {0}, i, j;

    for(i = 11; i <=19; i++)
    {
        for(j = 11; j < 19; j++)
        {
            if((i % 2 != 0) && (j % 2 != 0))
            matriz[i][j] = 1;
        }
    }

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}