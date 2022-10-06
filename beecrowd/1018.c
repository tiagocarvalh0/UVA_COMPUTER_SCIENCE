#include <stdio.h>

int main(){

	int x, x1, x2, x3, x4, x5, x6, x7 ;
	
	scanf("%i", &x);
	x1 = x / 100 ;
	printf("%i\n", x);
	printf("%i nota(s) de R$ 100,00\n", x1);
	x2 = (x - (x1 * 100)) / 50 ;
	printf("%i nota(s) de R$ 50,00\n", x2);
	x3 = (x - ((x2 * 50) + (x1 * 100))) / 20 ;
	printf("%i nota(s) de R$ 20,00\n", x3);
	x4 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20))) / 10 ;
	printf("%i nota(s) de R$ 10,00\n", x4);
	x5 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20) + (x4 * 10))) / 5 ;
	printf("%i nota(s) de R$ 5,00\n", x5);
	x6 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20) + (x4 * 10) + (x5 * 5))) / 2 ;
	printf("%i nota(s) de R$ 2,00\n", x6);
	x7 = (x - ((x1 * 100) + (x2 * 50) + (x3 * 20) + (x4 * 10) + (x5 * 5) + (x6 * 2))) / 1 ;
	printf("%i nota(s) de R$ 1,00\n", x7);
	
}
