#include <stdio.h>

	int vetorDDD[8], num, i;
	char vetorCidade[8][15] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeior", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};

int main()
{
	vetorDDD[0] = 61;
	vetorDDD[1] = 71;
	vetorDDD[2] = 11;
	vetorDDD[3] = 21;
	vetorDDD[4] = 32;
	vetorDDD[5] = 19;
	vetorDDD[6] = 27;
	vetorDDD[7] = 31;
	
	scanf("%d", &num);
	
	for(i = 0; i < 8; i++)
	{
		if(num == vetorDDD[i])
			printf("%s\n", vetorCidade[i]);
	}

	return 0;
}
