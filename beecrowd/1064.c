#include <stdio.h>

int main()
{
	int i, cont = 0;
	float soma;
	float vetor[6];

	for(i = 0; i < 6; i++)
		scanf("%f", &vetor[i]);
	for(i = 0; i < 6; i++)
	{
		if(vetor[i] > 0)
		{
			soma += vetor[i];
			cont++;
		}
	}

	printf("%d valores positivos\n%.1f\n", cont, soma/cont);

	return 0;
}