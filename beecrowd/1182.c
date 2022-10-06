#include <stdio.h>
#define TAM 12
int main()
{
    float matriz[TAM][TAM], soma = 0;
    int i, j, num;
    char letra;

    scanf("%d", &num);
    scanf("%*c");
    scanf("%c", &letra);

    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            scanf("%f", &matriz[i][j]); 
        }
    }

    if(letra == 'S')
    {
        for(i = 0; i < TAM; i++)
        {
            soma += matriz[i][num];
        }
    }
    else
        for(i = 0; i < TAM; i++)
        {
            soma += matriz[i][num];
        }
        soma = soma / 12;

        printf("%.1f\n", soma);

    return 0;
}