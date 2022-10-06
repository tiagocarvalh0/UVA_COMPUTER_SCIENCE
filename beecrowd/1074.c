#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int tam, i;
	
	scanf("%d", &tam);
	
	int vetor[tam];
	
	for(i = 0; i < tam; i++)
		scanf("%d", &vetor[i]);
	
	for(i = 0; i < tam; i++)
	{
		if(vetor[i] == 0)
			printf("NULL\n");
			
		else if(vetor[i] % 2 == 0)
			printf("EVEN ");
		else if(vetor[i] % 2 != 0)
			printf("ODD ");
		
		if(vetor[i] > 0)
			printf("POSITIVE\n");
		if(vetor[i] < 0)
			printf("NEGATIVE\n");
	}
		
	return 0;
}
