#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int vetor[5], i, cont = 0;

	for(i = 0; i < 5; i++)
		scanf("%d", &vetor[i]);
	
	for(i = 0; i < 5; i++)
	{
		if(vetor[i] % 2 == 0)
			cont++;
	}
	
	printf("%d valores pares\n", cont);
	
	return 0;
}
