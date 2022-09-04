#include <stdio.h>
#define TAM 10
int main()
{
    char nomes[10][20];
    int codigo[10][1], i, linha, coluna;
    float preco[10][1];

    for(i = 0; i < TAM; i++)
    {
        printf("PRODUTO (%d)\n", i);
        printf("NOME: ");
        scanf("%[^\n]", nomes[i]);
        scanf("%*c");

        printf("CODIGO: ");
        scanf("%d", &codigo[i][0]);

        printf("PRECO: R$ ");
        scanf("%f", &preco[i][0]);
        scanf("%*c");
        printf("\n");
    }

    for(linha = 0; linha < TAM; linha++)
        {
            if((codigo[linha][0] % 2 == 0) && (preco[linha][0] > 1000.0))
            {
                printf("PRODUTO (%d)\n", linha);
                printf("NOME: %s\n", nomes[linha]);
                printf("CODIGO: %d\n", codigo[linha][0]);
                printf("PRECO: R$ %.2f\n", preco[linha][0] + (preco[linha][0] * 0.20));
                printf("\n");
            }
            else if((codigo[linha][0] % 2 == 0))
            {
                printf("PRODUTO (%d)\n", linha);
                printf("NOME: %s\n", nomes[linha]);
                printf("CODIGO: %d\n", codigo[linha][0]);
                printf("PRECO: R$ %.2f\n", preco[linha][0] + (preco[linha][0] * 0.15));
                printf("\n");
            }
            else if((preco[linha][0] > 1000.0))
            {
                printf("PRODUTO (%d)\n", linha);
                printf("NOME: %s\n", nomes[linha]);
                printf("CODIGO: %d\n", codigo[linha][0]);
                printf("PRECO: R$ %.2f\n", preco[linha][0] + (preco[linha][0] * 0.10));
                printf("\n");
            }


        }

    return 0;
}