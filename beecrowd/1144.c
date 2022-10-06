#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num, i;

	scanf("%d", &num);

	for(i = 1; i < num + 1; i++)
	{
		printf("%d %d %d\n", i, i*i, i*i*i);
		printf("%d %d %d\n", i, (i*i) + 1, (i*i*i) + 1);
	}

	return 0;
}