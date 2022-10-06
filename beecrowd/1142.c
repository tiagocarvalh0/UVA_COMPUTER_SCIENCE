#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num, x, y, cont = 0;

	scanf("%d", &num);

	int matrix[num][3];
	
	for(x = 0; x < num; x++)
	{
		for(y = 0; y < 3; y++)
		{
			cont++;
			printf("%d ", cont);
		}
		cont++;
		printf("PUM\n");
	}
	return 0;
}
