#include <stdio.h>

int main()
{
	double vet[12][12], soma = 0.0;
	char opera[3];
	int linha, coluna;
	
	scanf("%s", opera);
	
	for(linha = 0; linha < 12; linha++)
		for(coluna = 0; coluna < 12; coluna++)
			scanf("%lf", &vet[linha][coluna]);
			
	for(linha = 7; linha <= 11; linha++)
		for(coluna = 11 - linha + 1; coluna <= linha - 1; coluna++)
			soma += vet[linha][coluna];
	
	if(opera[0] == 'M')
		soma = soma / 30.0;
		
	printf("%.1lf\n", soma);
	
	return 0;
}
