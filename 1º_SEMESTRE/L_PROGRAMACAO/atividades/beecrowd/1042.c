#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int vetor[3], vetorcpy[3], aux, x, y, i;
	
	for(i = 0; i < 3; i++)
		scanf("%d", &vetor[i]);
	for(i = 0; i < 3; i++)
		vetorcpy[i] = vetor[i]; 
	
	for(x = 0; x < 3; x++)
		for(y = 0; y < 3; y++)
		{
			if(vetor[x] < vetor[y])
			{
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	
	for(i = 0; i < 3; i++)
		printf("%d\n", vetor[i]);
	printf("\n");
	for(i = 0; i < 3; i++)
		printf("%d\n", vetorcpy[i]);

	return 0;
}
