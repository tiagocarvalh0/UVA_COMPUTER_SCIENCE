#include <stdio.h>

int main()
{
	int vet[20][20], linha, coluna, i = 100, x = 0, tam = 20;
	
	for(linha = 0; linha < tam; linha++)
	{
		for(coluna = 0; coluna < tam; coluna++)
		{
			vet[linha][coluna] = i++;
		}
	}
		
	for(linha = 0; linha < tam; linha++)
	{
		for(coluna = 0; coluna < tam; coluna++)
		{
			if((coluna <= linha) || (coluna >= tam - linha - 1))
				printf("-   ");   
			else
			{
				printf("%d ", vet[linha][coluna]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
