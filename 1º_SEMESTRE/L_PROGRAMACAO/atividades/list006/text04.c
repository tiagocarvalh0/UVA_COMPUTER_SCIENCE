#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int vet_1[10][10], linha, coluna;
	float vet_2[10][10], i = 100;
	
	for (linha = 0; linha < 10; linha++)
	{
		for (coluna = 0; coluna < 10; coluna++)
		{
			vet_1[linha][coluna] = i++;
		}
	}
	
	for (linha = 0; linha < 10; linha++)
	{
		for (coluna = 0; coluna < 10; coluna++)
		{
			printf("%d ", vet_1[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (linha = 0; linha < 10; linha++)
	{
		for (coluna = 0; coluna < 10; coluna++)
		{
			vet_2[linha][coluna] = (float) vet_1[linha][coluna] / vet_1[linha][linha];
		}
	}
	
	for (linha = 0; linha < 10; linha++)
	{
		for (coluna = 0; coluna < 10; coluna++)
		{
			printf("%.1f ", vet_2[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}
