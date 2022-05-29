#include <stdio.h>

int main ()
{
	int coluna, linha, x = 0;
	int matriz[10][10];

	for (coluna = 0 ; coluna < 10 ; coluna++)
	{
		for(linha = 0 ; linha < 10 ; linha++)
		{
			matriz[coluna][linha] = x++;
			if(coluna == linha)
			{
				printf("%d ", matriz[coluna][linha]);
			}
		}	
	printf("\n");
	}
	return 0;
}

