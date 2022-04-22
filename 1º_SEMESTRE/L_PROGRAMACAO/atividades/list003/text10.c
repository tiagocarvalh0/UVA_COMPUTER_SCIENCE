// 1000ml DE CAFE = 1000ml DE AGUA + (5 * 15g DE CAFE)
// 1 XICARA = 50ml DE CAFE

#include <stdio.h>

int main()
{
	int num_x ;
	float agua ;
	
	scanf("%d", &num_x);

	num_x = num_x * 50 ;
	num_x = num_x / 200 ;
	agua = (num_x * 200) / 1000 ;
	printf("%d Colheres\n", num_x);
	printf("%.2f L d'agua\n", agua);
	
}
