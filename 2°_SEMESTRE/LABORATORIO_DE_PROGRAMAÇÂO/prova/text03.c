#include <stdio.h>
#define LINHA 4
#define COLUNA 11

void comprarPoltrona(int matriz[LINHA][COLUNA], const int matrizCopia[LINHA][COLUNA], char nome[44][10])
{
    int num = 0, i, j, cont = 1;

    printf("ESCOLHA A POLTRONA: ");
    scanf("%d", &num);

    for(i = 0; i < LINHA; i++)
    {
        for(j = 0; j < COLUNA; j++)
        {      
            if(num == matrizCopia[i][j])
            {
                if(matriz[i][j] == 0)
                {
                    printf("POLTRONA INDISPONIVEL!!!!\n");
                    cont = 0;
                }
            }
        }
    }

    if(cont = 1)
    {
        for(i = 0; i < LINHA; i++)
        {
            for(j = 0; j < COLUNA; j++)
            {      
                if(num == matriz[i][j])
                {
                    matriz[i][j] = 0;
                    printf("NOME: ");
                    scanf("%s", nome[num]);

                }
            }
        }
    }
}

int main()
{
    int num = 3, matriz[LINHA][COLUNA], matrizCopia[LINHA][COLUNA], i, j;
    char nome[44][10] = {0};

    matriz[0][0] = 3;
    matriz[1][0] = 4;
    matriz[2][0] = 2;
    matriz[3][0] = 1;

    for(i = 0; i < 4; i++)
    {
        for(j = 1; j < 11; j++)
        {
            matriz[i][j] = matriz[i][j - 1] + 4;
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 11; j++)
        {
            matrizCopia[i][j] = matriz[i][j];
            printf("%02d ", matriz[i][j]);
        }
        printf("\n");
    }

    while (1)
    {
        if((num < 1) || (num > 44))
        {
            for(i = 1; i <= 44; i++)
            {
                printf("%d   %s\n", i, nome[i]);
            }
            break;
        }
        printf("\n===== MENU =====\n");
        printf("(1) = MOSTRAR POLTRONAS.\n");
        printf("(2) = COMPRAR POLTRONA.\n");
        printf("SELECIONE: ");
        scanf("%d", &num);

        if(num == 1)
        for(i = 0; i < 4; i++)
        {
            for(j = 0; j < 11; j++)
            {
                printf("%02d ", matriz[i][j]);
            }
            printf("\n");
        }

        if(num == 2)
            comprarPoltrona(matriz, matrizCopia, nome);

    }
   
    return 0;
}