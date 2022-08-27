#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	int num;
	
	while(1)
	{
		scanf("%d", &num);
		if(num == 0)
			break;
		for(i = 1; i < num; i++)
			printf("%d ", i);
		printf("%d", num);
		printf("\n");
	}
		
	return 0;
}
