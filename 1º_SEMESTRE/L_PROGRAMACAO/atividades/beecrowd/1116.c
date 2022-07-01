#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int linha, i, x;
	
	scanf("%d", &linha);	
		
	int vetor[linha][2];

	for(i = 0; i < linha; i++)
		for(x = 0; x < 2; x++)
			scanf("%d", &vetor[i][x]);	
				
	for(i = 0; i < linha; i++)
		{		
			for(x = 0; x < 2; x++)
			{
				if(vetor[i][1] == 0)
				{
					printf("divisao impossivel\n");
					break;
				}
				
				else	
				{
					printf("%.1f\n", (float)vetor[i][0] / vetor[i][1]);
					break;
				}
			}
		}	

	return 0;
}
