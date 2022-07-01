#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int tam, i;
	
	scanf("%d", &tam);
	
	for(i = 1; i < tam + 1; i++)
		if(i % 2 == 0)
		{
			printf("%d^%d = %d\n", i, 2, i * i);
		}

	return 0;
}
