#include <stdio.h>

int main ()
{
	int numero, x, cont_rnum ;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	x = 1;
	while(1)
	{
		x++;
		if(numero % x == 0)
		{
			cont_rnum++;
		}
	}
	if(cont_rnum == 2)
	printf("PRIMO\n");
}
