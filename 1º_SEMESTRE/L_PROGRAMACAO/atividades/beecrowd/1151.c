#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int num, i = 0, j = 1, x = 0, cont = 0;
	
	scanf("%d", &num);
	
	while(1)
	{
		if(num == 1)
		{
			printf("%d", i);
				break;
		}
		if(num == 2)
		{
			printf("%d %d", i, j);
				break;
		}
		
		if(cont == num)
		{
				break;
		}
		
		printf("%d ", x);		
		x = i + j;
		j = i ;
		i = x;
		cont++;	
	}

	return 0;
}
