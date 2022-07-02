#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

int main()
{
	int vetor[2], i, maiorNum, menorNum, soma = 0;
	
	for(i = 0; i < 2; i++)
		scanf("%d", &vetor[i]);
		
	menorNum = vetor[0];
	maiorNum = vetor[0];
	
	for(i = 0; i < 2; i++)
		if(maiorNum < vetor[i])
			maiorNum = vetor[i];
	for(i = 0; i < 2; i++)
		if(menorNum > vetor[i])
			menorNum = vetor[i];
	
	for(i = menorNum; i < maiorNum + 1; i++)
	{
		if(i % 13 != 0)
			soma = soma + i;
	}
	
	printf("%d\n", soma);

	return 0;
}
