#include <stdio.h>

double Valor_Ant, Valor_Atu, Acrescimo;

int main()
{
		
	void teste(void);
	
	printf("Valor Antigo: R$ ");
	scanf("%lf", &Valor_Ant);
	printf("Valor Atual: R$ ");
	scanf("%lf", &Valor_Atu);
	
	teste();
	printf("Aumento de %.1lf %%", Acrescimo);
	
	return 0;
}
void teste(void)
{
	double Valor_Maior, Valor_Menor;
	
	if (Valor_Ant < Valor_Atu)
	{
		Valor_Maior = Valor_Atu;
		Valor_Menor = Valor_Ant;
	}
	else if (Valor_Ant > Valor_Atu)
	{
		Valor_Maior = Valor_Ant;
		Valor_Menor = Valor_Atu;
	}
	
	Acrescimo = ((Valor_Maior / Valor_Menor) * 100) - 100;  
	printf("Diferenca de R$ %.2lf\n",(Valor_Maior - Valor_Menor));
				
}
