#include <stdio.h>

int main (){

	int h, kmh;
	double distancia, h1, kmh1 ;
	
	scanf("%i", &h);
	scanf("%i", &kmh);
	h1 = h ;
	kmh1 = kmh ;
	distancia = (kmh1 * h1) / 12 ;
	printf("%.3lf\n", distancia);
		
}
