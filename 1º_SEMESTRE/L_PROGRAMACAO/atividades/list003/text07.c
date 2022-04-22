#include <stdio.h>

int main ()
{

	int dinheiro, x, y, z ;
	
	scanf("%d", &dinheiro);
	x = dinheiro / 50 ;
	y = (dinheiro - (x * 50)) / 10 ;
	z = dinheiro - ((x * 50) + (y * 10)); 
	printf("%d Notas de 50\n%d Notas de 10\n%d Notas de 1\n", x, y, z);

}
