#include <stdio.h>

int main()
{
	int vet_1[10][10], vet_2[10][10], vet_3[10][10], linha, coluna, i = 100, y = 200;
	
	printf("================== Matriz 1 ==================\n");
	for(linha = 0; linha < 10; linha++)
	{
		for(coluna = 0; coluna < 10; coluna++)
		{
			vet_1[linha][coluna] = i++;
			printf("%d ", vet_1[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("================== Matriz 2 ==================\n");
	for(linha = 0; linha < 10; linha++)
	{
		for(coluna = 0; coluna < 10; coluna++)
		{
			vet_2[linha][coluna] = y++;
			printf("%d ", vet_2[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("================== Matriz Soma ==================\n");
	for(linha = 0; linha < 10; linha++)
	{
		for(coluna = 0; coluna < 10; coluna ++)
		{
			vet_3[linha][coluna] = vet_1[linha][coluna] + vet_2[linha][coluna];
		}
	}
	
	for(linha = 0; linha < 10; linha++)
	{
		for(coluna = 0; coluna < 10; coluna++)
		{
			printf("%d ", vet_3[linha][coluna]);
		}
		printf("\n");
	}
	return 0;
}
