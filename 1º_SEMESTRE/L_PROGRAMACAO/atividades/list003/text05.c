/*Fac�a um programa que receba a medida de um angulo em graus. Calcule �
e mostre o quadrante em que se localiza esse angulo. Considere os qua- �
drantes da trigonometria e, para angulos maiores que 360� ou menores que �
-360�, reduzi-los, mostrando tambem o n � umero de voltas e o sentido da �
volta (horario ou anti-hor � ario).
"Primeiro quadrante: 0� < x < 90�"
"Segundo quadrante: 90� < x < 180�"
"Terceiro quadrante: 180� < x < 270�"
"Quarto quadrante: 270� < x < 360�"

*/

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
	
	else if (graus > 360)
	{
		x = graus / 360 ;
		resto = graus - (x * 360) ;
		
			if ((resto >= 0) && (resto < 90))
			{
			printf("Primeiro quadrante:\n");	
			}
	
			else if ((resto >= 90) && (resto < 180))	
			{
			printf("Segundo quadrante\n");
			}
	
			else if ((resto >=180) && (resto < 270))
			{
			printf("Terceiro quadrante\n");
			}
	
			else if ((resto >= 270) && (resto <= 360))
			{
				printf("Quarto quadrante\n");
			}
			
			printf("%d Volta\nAnt-Horario\n", x);		
	}
	
	
	else
	{
	if ((graus >= 0) && (graus < 90))
	{
		printf("Primeiro quadrante:\n");	
	}
	
	else if ((graus >= 90) && (graus < 180))	
	{
		printf("Segundo quadrante\n");
	}
	
	else if ((graus >=180) && (graus < 270))
	{
		printf("Terceiro quadrante\n");
	}
	
	else if ((graus >= 270) && (graus <= 360))
	{
		printf("Quarto quadrante\n");
	}
		printf("0 Volta\nAnt-Horario\n");
	}
}
