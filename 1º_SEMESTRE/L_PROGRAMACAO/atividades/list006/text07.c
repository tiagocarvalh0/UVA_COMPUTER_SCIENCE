#include <stdio.h>

int main()
{
	int vet[10][20], linha, coluna, i = 100, soma = 0 ;
	
	for(linha = 0; linha < 10; linha++)
		for(coluna = 0; coluna < 20; coluna++)
			vet[linha][coluna] = i++;
	
	for(linha = 0; linha < 10; linha++)
	{
		for(coluna = 0; coluna < 20; coluna++)
		{
			printf("%d ", vet[linha][coluna]);
		}
		printf("\n");
	}
	
	for(linha = 0; linha < 10; linha++)
	{
		soma = 0;
		for(coluna = 0; coluna < 20; coluna++)
		{
			soma += vet[linha][coluna];
		}
		printf("%d ", soma);
		printf("\n");
	}
	
	return 0;
}
