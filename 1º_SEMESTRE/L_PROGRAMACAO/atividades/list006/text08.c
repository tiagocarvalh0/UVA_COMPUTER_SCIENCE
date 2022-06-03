#include <stdio.h>

int main() 
{
	float vet[20][3], med[20], med_g, i = 0.0;
	int linha, coluna;
	
	for (linha = 0; linha < 20; linha++)
		for (coluna = 0; coluna < 3; coluna++)
			vet[linha][coluna] = i++;
			
	for (linha = 0; linha < 20; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("%.1f ", vet[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (linha = 0; linha < 20; linha++)
	{
		med[linha] = 0;
		for (coluna = 0; coluna < 3; coluna++)
		{
			med[linha] += vet[linha][coluna];
		}
		med[linha] /= 3;
	}
	
	for (linha = 0; linha < 20; linha++)
		printf("Aluno %d: %.1f\n", linha, med[linha]);
	
	printf("\n");
	
	med_g = 0;
	for (linha = 0; linha < 20; linha++)
		med_g += med[linha];
	med_g /= 20;
	
	printf("Media Geral %.1f\n", med_g);
	
	return 0;
}
