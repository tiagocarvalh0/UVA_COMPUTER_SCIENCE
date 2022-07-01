#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
	int vetor[2];
	while(1)
	{
		scanf("%d", &vetor[0]);
		scanf("%d", &vetor[1]);
		
		if(vetor[0] == vetor[1])
			break;
		
		if(vetor[0] > vetor[1])
			printf("Decrescente\n");
		
		if(vetor[0] < vetor[1])
			printf("Crescente\n");
	}

	return 0;
}
