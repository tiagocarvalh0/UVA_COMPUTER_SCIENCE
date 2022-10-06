#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float vetor[6];
	int i, cont = 0;
	
	for(i = 0; i < 6; i++)
		scanf("%f\n", &vetor[i]);
	
	for(i = 0; i < 6; i++)
		if(vetor[i] > 0)
			cont++;
			printf("%d valores positivos\n", cont);
	
	return 0;
}
