#include <stdio.h>

int main ()
{
	int numero, x, cont_rnum ;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	x = 1;
	while(x <= numero)
	{
		x++;
		if(numero % x == 0)
		{
			cont_rnum++;
		}
	}
	
}
