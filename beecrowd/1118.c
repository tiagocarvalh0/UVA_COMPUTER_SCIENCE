#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float tam;
	int cont = 0, i;
	float vetor[2];
	
	while(1)
	{
		scanf("%f", &tam);
		
		if((tam < 0) || (tam > 10))
			printf("nota invalida\n");
		
		if((tam >= 0) && (tam <= 10))
		{
			vetor[cont] = tam;
			cont++;
		}
		
		if(cont == 2)
		{
			printf("media = %.2f\n", (vetor[0] + vetor[1]) / 2);
			while(1)
			{
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &i);
				
				if(i == 2)
					break;	
				if(i == 1)
				{	
					cont = 0;
					break;
				}	
			}
			
			if(i == 2)
				break;	
		}
	}

	return 0;
}
