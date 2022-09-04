#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, j, cont = 1, cont1 = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    int linha = (y / x) + 1;
    int coluna = x;

    int matriz[linha][coluna];

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
            {
                matriz[i][j] = cont++;
            }
    }

    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            cont1++;
            if(matriz[i][j] == y)
            {
                printf("%d\n", matriz[i][j]);
                    return 0;
            }
            else if(cont1 >= x)
                printf("%d\n", matriz[i][j]);
            else 
                printf("%d ", matriz[i][j]);
        }
        cont1 = 0;
    }
    return 0;
}