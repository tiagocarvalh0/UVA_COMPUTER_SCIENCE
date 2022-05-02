#include <stdio.h>

int main ()
{
	int num_1, num_2, resto ;
	printf("Digite um numero:\n");
	scanf("%d", &num_1);
	printf("Digite outro numero:\n");
	scanf("%d", &num_2);
	resto = num_1;
	
	if((num_1 != 0) && (num_2 != 0))
	{
		while(resto - num_2 >= 0)
		{
			resto = resto - num_2;
		}
		printf("RESTO = %d\n", resto);
	}
	else
	{
	printf("Numero Invalido\n");
	}
}
