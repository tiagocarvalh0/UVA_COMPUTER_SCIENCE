#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num = -1, i, cont = 1, inter = 0, gremio = 0, empate = 0;
	int vetor[2];
	
	while(1)
	{
		for(i = 0; i < 2; i++)
			scanf("%d", &vetor[i]);
			
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &num);
		
		if(vetor[0] > vetor[1])
			inter++;
		if(vetor[0] < vetor[1])
			gremio++;
		if(vetor[0] == vetor[1])
			empate++;
		
		if(num == 1)
			cont++;
		if(num == 2)
		{
			printf("%d grenais\n", cont);
			printf("Inter:%d\n", inter);
			printf("Gremio:%d\n", gremio);
			printf("Empates:%d\n", empate);
			
			if(inter > gremio)
			printf("Inter venceu mais\n");
			if(inter < gremio)
			printf("Gremio venceu mais\n");
			
			break;
		}
	}

	return 0;
}
