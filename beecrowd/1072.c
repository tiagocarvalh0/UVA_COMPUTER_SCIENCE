#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int tam, i, x, y, cont = 0;
	
	scanf("%d", &tam);
	
	int vetor[tam];
	
	for(i = 0; i < tam; i++)
		scanf("%d", &vetor[i]);

	for(x = 0; x < tam; x++)
		for(y = 10; y < 20; y++)
			if(vetor[x] / y == 1)
			{	
				cont++;
				break;
			}
	
	printf("%d in\n", cont);
	printf("%d out\n", tam - cont);
	
	return 0;
}
