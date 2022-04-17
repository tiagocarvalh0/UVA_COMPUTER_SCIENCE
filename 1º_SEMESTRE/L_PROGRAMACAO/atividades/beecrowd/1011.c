#include <stdio.h>

int main(){

	double raio ;

	scanf("%lf", &raio);
	raio = ((raio * raio) * raio) * (4.0 / 3) * 3.14159 ;
	printf("VOLUME = %.3lf\n", raio);

}