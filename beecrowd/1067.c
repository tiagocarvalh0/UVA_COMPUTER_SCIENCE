#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num, i = 0;
	
	scanf("%d", &num);
	
	while(i != num + 1)
	{
		if(i % 2 != 0)
			printf("%d\n", i);
		i++;
	}

	return 0;
}
