#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int vetorDDD[8], num, i;
	char vetorCidade[8][1];
	
	vetorDDD[0] = 61;
	vetorDDD[1] = 71;
	vetorDDD[2] = 11;
	vetorDDD[3] = 21;
	vetorDDD[4] = 32;
	vetorDDD[5] = 19;
	vetorDDD[6] = 27;
	vetorDDD[7] = 31;
	
	
	/*vetorCidade[0][0] = {"Brasilia"};
	vetorCidade[1][0] = {"Salvador"};
	vetorCidade[2][0] = {"Sao Paulo"};
	vetorCidade[3][0] = {"Rio de Janeior"};
	vetorCidade[4][0] = {"Juiz de Fora"};
	vetorCidade[5][0] = {"Campinas"};
	vetorCidade[6][0] = {"Vitoria"};
	vetorCidade[7][0] = {"Belo Horizonte"};*/
	
	scanf("%d", &num);
	scanf()
	
	for(i = 0; i < 8; i++)
	{
		if(num == vetorDDD[i])
			printf("%s\n", vetorCidade[i]);
	}

	return 0;
}
