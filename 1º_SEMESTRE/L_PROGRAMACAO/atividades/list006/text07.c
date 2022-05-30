#include <stdio.h>

int main()
{
	int vet[10][20], coluna, linha, i = 100, soma = 0 ;
	
	for(linha = 0; linha < 10; linha++)
		for(coluna = 0; coluna < 20; coluna++)
		{
			vet[linha][coluna] = i++;
			soma = vet[linha][coluna] + vet[linha][coluna];
			printf("%d ", soma);
		}
	
	for(linha = 0; linha < 10; linha++)
	{
		for(coluna = 0; coluna < 20; coluna++)
		{
			printf("%d ", soma);
		}
	
	}
	
}
