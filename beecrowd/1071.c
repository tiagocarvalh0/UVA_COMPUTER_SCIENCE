#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int vetor[2], i, maiorNum, menorNum, soma = 0;
	
	for(i = 0; i < 2; i++)
		scanf("%d", &vetor[i]);
	
	maiorNum = vetor[0];
	menorNum = vetor[0];
	
		for(i = 0; i < 2; i++)
		if(maiorNum < vetor[i])
			maiorNum = vetor[i];
	
	for(i = 0; i < 2; i++)
		if(menorNum > vetor[i])
			menorNum = vetor[i];

	for(i = menorNum + 1; i < maiorNum; i++)
	{	
		if(i % 2 != 0)
		{
			soma = soma + i;
		}
	}
	printf("%d\n", soma);

	return 0;
}
