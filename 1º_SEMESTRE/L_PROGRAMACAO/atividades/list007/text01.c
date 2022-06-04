#include <stdio.h>

int main(void)
{
	void teste(void);
	teste(); 
	return 0;
	
}
void teste(void)
{
	int num_a, num_b, num_c, soma = 0, num_maior, num_menor;
	
	printf("Digite o numero A:\n");
	scanf("%d", &num_a);
	printf("Digite o numero B:\n");
	scanf("%d", &num_b);
	printf("Digite o numero C:\n");
	scanf("%d", &num_c);

	if(num_b < num_c)
	{
		num_maior = num_c;
		num_menor = num_b;
	}
	
	else if(num_b > num_c)
	{
		num_maior = num_b;
		num_menor = num_c;
	}
	
	else if(num_b == num_c)
	{
		if(num_maior % num_a == 0)
		soma = num_maior;
	}
	while(num_menor != (num_maior + 1))
		{
			if(num_menor % num_a == 0)
			{
				printf("%d e divisivel por %d\n", num_menor, num_a);
				soma = soma + num_menor;	
			}
			num_menor++;
		}

	printf("SOMA = %d\n", soma);
	
	return soma;				
}


