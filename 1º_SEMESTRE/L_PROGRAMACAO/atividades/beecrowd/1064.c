#include <stdio.h>


int main()
{
	float vetor[6], soma = 0, div2, resto;
	int i, cont = 0, div1 ;
	
	for(i = 0; i < 6; i++)
		scanf("%f", &vetor[i]);
	
	for(i = 0; i < 6; i++)
	{
		div1 = vetor[i] / 2;
		div2 = vetor[i] / 2;
		resto = div2 - div1;
		if(div1 < 0 || div2 < 0)
			resto = div2 + div1;
		if(resto == 0)
		{
			soma += vetor[i];
			cont++;	
		}
	}
	
	printf("%d valores positivos\n", cont);
	printf("%.1f\n", soma / cont);
	

	return 0;
}
