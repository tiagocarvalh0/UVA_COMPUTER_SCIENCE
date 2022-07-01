#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num, i = 0;
	
	scanf("%d", &num);
	
	while(1)
	{
		if(num % 2 != 0)
		{
			printf("%d\n", num);
			i++;
		}
		if(i == 6)
			break;
		num++;
	}

	return 0;
}
