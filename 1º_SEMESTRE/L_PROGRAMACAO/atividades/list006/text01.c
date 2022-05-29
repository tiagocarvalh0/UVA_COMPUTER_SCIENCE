#include <stdio.h>

int main()
{
	int vet[3][3], i, j;
	
	printf("Informe os valores:\n");
	
	for(i = 0; i <= 2; i++)
		for(j = 0; j <= 2; j++)
		scanf("%d", &vet[i][j]);

	for(i = 0; i <= 2; i++)
		for(j = 0; j <= 2; j++)
			printf("%d ", vet[i][j]);
	return 0;
}
