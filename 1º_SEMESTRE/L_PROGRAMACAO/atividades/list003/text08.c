#include <stdio.h>

int main ()
{
	char s[1] ;
	float peso_kg, altura_h, peso_ideal ;
	
	printf("Informe seu peso em Kg:\n");
	scanf("%f", &peso_kg);
	printf("Informe sua altura em Metros:\n");
	scanf("%f", &altura_h);
	printf("Informe seu Sexo:\n(m) = Masculino\n(f) = Feminino\n");
	scanf("%s", s);
	
	if((peso_kg == 0) || (altura_h == 0))
	{
		printf("Informações invalidas\n");
	}
	
	else if (s[0] == 'f')
	{
		peso_ideal = (62.1 * altura_h) - 44.7 ;
		printf("Seu peso %.2f\nSeu peso ideal e %.2f Kg\n",peso_kg, peso_ideal);
		
			if (peso_ideal == peso_kg)
			{
				printf("Dentro do peso ideal\n");
			}
			else if (peso_ideal < peso_kg)
			{
				peso_ideal = peso_kg - peso_ideal  ;
				printf("Voce precisa perde %.2f Kg\n", peso_ideal);
			}
			else if (peso_ideal > peso_kg)
			{
				peso_ideal = peso_ideal - peso_kg ;
				printf("Voce precisa ganhar %.2f Kg\n", peso_ideal);
			}
	}
	else if (s[0] == 'm')
	{
		peso_ideal = (72.7 * altura_h) -58 ;
		printf("Seu peso %.2f\nSeu peso ideal e %.2f Kg\n",peso_kg, peso_ideal);
		
			if (peso_ideal == peso_kg)
			{
				printf("Dentro do peso ideal\n");
			}
			else if (peso_ideal < peso_kg)
			{
				peso_ideal = peso_kg - peso_ideal  ;
				printf("Voce precisa perde %.2f Kg\n", peso_ideal);
			}
			else if (peso_ideal > peso_kg)
			{
				peso_ideal = peso_ideal - peso_kg ;
				printf("Voce precisa ganhar %.2f Kg\n", peso_ideal);
			}
	}
	
	
	
	
	
}
