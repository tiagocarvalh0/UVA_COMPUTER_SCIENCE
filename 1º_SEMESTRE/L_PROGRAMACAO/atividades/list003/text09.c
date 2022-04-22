#include <stdio.h>

int main()
{
	int valor, num_1, num_2, num_3 ;
	
	scanf("%d", &valor);

	valor = valor * 2 ;
	num_3 = valor % 10 ;
    num_2 = (valor % 100) / 10 ;
    num_1 = valor / 100 ;
    printf("%d%d%d\n", num_3, num_2, num_1);
	
}
