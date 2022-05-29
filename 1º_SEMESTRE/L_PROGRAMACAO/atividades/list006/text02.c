#include <stdio.h>

int main()
{
	int vet[10][30];
	int coluna, linha, i = 100;
	
	for(linha = 0; linha < 10; linha++)
	{
		for(coluna = 0; coluna < 30; coluna++)
		{
			vet[linha][coluna] = i++;
		}
	}
	
	for(linha = 10 - 1; linha >= 0; linha--)
	{
		for(coluna = 30 - 1; coluna >= 0; coluna--)
		{
			printf("%d ", vet[linha][coluna]);
		}
		printf("\n");
	}

	return 0;
}
