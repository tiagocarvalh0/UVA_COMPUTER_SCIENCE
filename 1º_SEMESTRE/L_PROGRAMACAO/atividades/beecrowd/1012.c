#include <stdio.h>

int main (){

	double a, b, c, area_t, area_c, area_tr, area_q, area_r ;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	area_t = a * c / 2 ;
	area_c = ((c * c) * 3.14159) ;
	area_tr = ((a + b) * c) / 2 ;
	area_q = b * b ;
	area_r = a * b ;
	printf("TRIANGULO: %.3lf\n", area_t);
	printf("CIRCULO: %.3lf\n", area_c);
	printf("TRAPEZIO: %.3lf\n", area_tr);
	printf("QUADRADO: %.3lf\n", area_q);
	printf("RETANGULO: %.3lf\n", area_r);
}
