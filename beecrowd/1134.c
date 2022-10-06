#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num = 0, alcool = 0, gasolina = 0, diesel = 0;
	while(1)
	{
		scanf("%d", &num);
		
		if(num == 1)
		{
			alcool++;
		}
		
		if(num == 2)
		{
			gasolina++;
		}
		
		if(num == 3)
		{
			diesel++;
		}
		
		if(num == 4)
		{
			printf("MUITO OBRIGADO\n");
			printf("Alcool: %d\n", alcool);
			printf("Gasolina: %d\n", gasolina);
			printf("Diesel: %d\n", diesel);
				break;
		}
	}

	return 0;
}
