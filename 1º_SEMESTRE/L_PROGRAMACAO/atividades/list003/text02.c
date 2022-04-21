/* Fac¸a um algoritmo que leia um numero e mostre uma mensagem indicando ´
se este numero ´ e par ou ´ ´ımpar e se e positivo ou negativo. */

#include <stdio.h>

int main ()
{

	int num ;

	printf("Digite um numero: \n");
	scanf("%d", &num);

	if (num == 0)
	{
		printf("Numero invalido!!\n");
	}

	else
	{	
		if (num % 2 == 0)
		{
		printf("Par\n");
		}

		if (num % 2 != 0)
		{
		printf("Impar\n");
		}

		if (num > 0)
		{
		printf("Positivo\n");
		}

		if (num < 0)
		{
		printf("Negativo\n");
		}
	}

}