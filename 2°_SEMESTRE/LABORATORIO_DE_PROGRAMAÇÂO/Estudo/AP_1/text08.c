#include <stdio.h>

int main()
{
    int num, linha, coluna, valor[9][9], aux;

    scanf("%d", &num);

    for(linha = 1; linha <= num; linha++)
    {
        //printf("LINHA = (%d)\n", linha);
        for(coluna = 1; coluna <= linha; coluna++)
        {
            //printf("COLUNA = (%d)\n", coluna);
            if(coluna == 1)
                valor[linha][coluna] = linha;
                
            else 
            {
                aux = coluna - 1;
                valor[linha][coluna] = linha + valor[linha][aux];
            }
            printf("%d ", valor[linha][coluna]);
        }
        printf("\n");
    }



    return 0;
}