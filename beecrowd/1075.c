#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int tam, i;
	
	scanf("%d", &tam);
	
	for(i = 0; i < 10000; i++)
		if(i % tam == 2)
			printf("%d\n",i);

	return 0;
}
