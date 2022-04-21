/*Dados tres valores X, Y e Z, verificar se eles podem ser os comprimentos ˆ
dos lados de um triangulo e, se forem verificar se ˆ e um tri ´ angulo equil ˆ atero, ´
isosceles ou escalenos. Se eles n ´ ao formarem um tri ˜ angulo, escrever a men- ˆ
sagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triangulo ˆ e menor que a soma dos ´
outros dois lados;
• Equilateros: tem os comprimentos dos tr ´ es lados iguais; ˆ
• Isosceles: tem os comprimentos de dois lados iguais; ´
• escaleno: tem os comprimentos dos tres lados diferentes*/

#include <stdio.h>

int main ()
{

	float x, y, z ;

	scanf("%f %f %f", &x, &y, &z);
	
	if ((x + y <= z ) || (y + z <= x) || (z + x <= y))
	{
		printf("Ñ FORMA TRIANGULO!!\n");	
	}
	
	else 
	{
		if ((x == 0) || (y == 0) || (z == 0))
		{
			printf("Ñ FORMA TRIANGULO!!\n");
		}
		else if ((x == y) && (x == z) && (y == z))
		{
			printf("Equilateros\n");
		}

		else if ((x == y) || (x == z) || (z == y))
		{
			printf("Isosceles\n");
		}

		else if ((x != y) && (x != z) && (z != y))
		{
			printf("Escaleno\n");
		}
	}
}