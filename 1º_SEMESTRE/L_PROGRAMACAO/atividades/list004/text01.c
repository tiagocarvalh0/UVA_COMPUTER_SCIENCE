#include <stdio.h>

int main ()
{
	int codigo = 1, quant;
	float total;
	
	printf("============\nCodigo Preco\n============\n (1) = 0,50\n (2) = 1,00\n (3) = 4,00\n (5) = 7,00\n (9) = 8,00\n\n");
	
	while (codigo != 0)
	{
		printf("Codigo\n");
		scanf("%d", &codigo);
			
		if (codigo == 1)
		{
			printf("Quantidade\n");
			scanf("%d", &quant);
			total = total + quant * 0.5 ;	
		}
		if (codigo == 2)
		{
			printf("Quantidade\n");
			scanf("%d", &quant);
			total = total + quant ;
		}	
		if (codigo == 3)
		{
			printf("Quantidade\n");
			scanf("%d", &quant);
			total = total + (quant * 4 );
		}
		if (codigo == 5)
		{
			printf("Quantidade\n");
			scanf("%d", &quant);
			total = total + (quant * 7) ;
		}
		if (codigo == 9)
		{
			printf("Quantidade\n");
			scanf("%d", &quant);
			total = total + (quant * 8) ;
		}
		if (codigo == 0)
		{
			printf("Total: R$ %.2f\n", total);
		}
		else if ((codigo != 1) && (codigo != 2) && (codigo != 3) && (codigo != 5) && (codigo != 9) && (codigo != 0))
		{
			printf("!!!CODIGO INVALIDO!!!\n\n");
		}
	}		
}
