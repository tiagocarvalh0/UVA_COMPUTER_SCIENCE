#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int tam;
	while(1)
	{
		scanf("%d", &tam);
		
		if(tam == 2002)
		{
			printf("Acesso Permitido\n");
				break;
		}
		else
			printf("Senha Invalida\n");
	}
	
	return 0;
}
