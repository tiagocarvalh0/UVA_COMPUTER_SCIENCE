#include <stdio.h>

int main ()
{
	
	int x, graus, resto  ;
	
	scanf("%d", &graus);
		
	// Negativo Independente do Valor
	if (graus < 0)
	{
		x = graus / 360 ; // Voltas 
		resto = graus - (x * 360) ; // Quadrante
		
			if ((resto <=  0) && (resto > -90))
			{
			printf("Quarto quadrante\n");	
			}
			else if ((resto <= -90) && (resto > -180))	
			{
			printf("Terceiro quadrante\n");
			}
			else if ((resto <= -180) && (resto > -270))
			{
			printf("Segundo quadrante\n");
			}
			else if ((resto <= -270) && (resto >= -360))
			{
				printf("Primeiro quadrante:\n");
			}
				if (x == -1) x = 0 ;
				x = x * (-1);
				printf("%d Voltas\n", x);
				printf("Horario\n");
	}
	
	// Positivo Maiores que 360
	if (graus > 360)
	{
		x = graus / 360 ; // Voltas 
		resto = graus - (x * 360) ; // Quadrante
		graus = resto ;		
	}
	// Variaveis Aplicada na Estrutura Condicional Abaixo

	// Positivo Maiores ou Igual a (0) e Menores ou Igual a (360)
	// Tb Utiliza a Condicional Acima se a  msm for VERDADEIRA
	if ((graus <= 360 ) && (graus >= 0))
	{
	if ((graus >= 0) && (graus < 90))
	{
		printf("Primeiro quadrante:\n");	
	}
	if ((graus >= 90) && (graus < 180))	
	{
		printf("Segundo quadrante\n");
	}
	if ((graus >= 180) && (graus < 270))
	{
		printf("Terceiro quadrante\n");
	}
	if ((graus >= 270) && (graus <= 360))
	{
		printf("Quarto quadrante\n");
	}
		printf("%d Voltas\n", x);	
		printf("Ant-Horario\n");
	}
}
