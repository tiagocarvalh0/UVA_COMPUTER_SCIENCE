#include <stdio.h>

int main()
{
	int vet[20][20], linha, coluna, i = 100;
	
	for(linha = 0; linha < 20; linha++)
	{
		for(coluna = 0; coluna < 20; coluna++)
		{
			vet[linha][coluna] = i++;
		}
	}
	
	for(linha = 0; linha < 20; linha++)
	{
		for(coluna = 0; coluna < 20; coluna++)
		{
			printf("%d ", vet[linha][coluna]);
		}
		printf("\n");
	}
	
	for(linha = 0; linha < 20; linha++)
	{
		for(coluna = 0; coluna < 20; coluna++)
		{
			if(coluna >= linha)
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
