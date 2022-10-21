#include <stdio.h>

int resultadoGame(int vetor[], int x, int y)
{
    int aux, cont = 0;

    for(int i = 0; i < y - 1; i++)
    {
        aux = x + vetor[i];
        if(vetor[i + 1] <= aux)
            cont++;    
    }

    if(cont >= y - 1)
        return 1;
    else    
        return 0;
}

int main()
{
    int x, y, resultado;

    scanf("%d %d", &x, &y);

    int vetor[y];

    for(int i = 0; i < y; i++)
        scanf("%d", &vetor[i]);

    resultado = resultadoGame(vetor, x, y);

    if(resultado == 1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");

    return 0;
}