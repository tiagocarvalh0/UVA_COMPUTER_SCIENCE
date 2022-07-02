#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num, x, y, cont = 0;
	
	scanf("%d", &num);
	
	int matriz[num][3];
	
	for(x = 1; x < num + 1; x++)
	{
		for(y = 0; y < 3; y++)
		{
			matriz[x][y] = x * x;
			printf("%d ", matriz[x][y]);
		}
		printf("\n");
	}

	return 0;
}
