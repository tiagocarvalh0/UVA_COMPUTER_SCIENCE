#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num, linha, coluna;
	
	scanf("%d", &num);
	
	for(linha = 1; linha < num + 1; linha++)
	{
		printf("%d %d %d\n", linha, linha * linha, linha * linha * linha);
	}
	
	return 0;
}
