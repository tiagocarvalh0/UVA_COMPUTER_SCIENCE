#include <stdio.h>

int main ()
{
	
	int x, graus, resto  ;
	
	scanf("%d", &graus);
	
	if (graus < 0)
	{
		x = graus / 360 ;
		resto = graus - (x * 360) ;
		
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
			x = x * - 1 ;
			printf("%d Volta\nHorario\n", x);
	}
	if (graus > 360)
	{
		x = graus / 360 ;
		printf("%d\n", x);
		resto = graus - (x * 360) ;
		printf("%d\n", resto);
		graus = resto ;
		printf("%d\n", graus);	
	}
	if (graus < 360)
	{
		x = 0 ;
	}

	if ((graus >= 0) && (graus < 90))
	{
		printf("Primeiro quadrante:\n");	
	}
	
	else if ((graus >= 90) && (graus < 180))	
	{
		printf("Segundo quadrante\n");
	}
	
	else if ((graus >= 180) && (graus < 270))
	{
		printf("Terceiro quadrante\n");
	}
	
	else if ((graus >= 270) && (graus <= 360))
	{
		printf("Quarto quadrante\n");
	}
		printf("%d Voltas\n", x);
		printf("Ant-Horario\n");
	
}
