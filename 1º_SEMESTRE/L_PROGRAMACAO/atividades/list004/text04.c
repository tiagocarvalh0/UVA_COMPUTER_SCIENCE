#include <stdio.h>

int main ()
{
	int numero, rep, cont_rnum ;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	rep = 1;
	
	while(rep <= numero)
	{
		rep++;
		if(numero % rep == 0)
		{
			cont_rnum++;
		}
	}
	if(cont_rnum == 2)
	printf("PRIMO\n");
	
}
