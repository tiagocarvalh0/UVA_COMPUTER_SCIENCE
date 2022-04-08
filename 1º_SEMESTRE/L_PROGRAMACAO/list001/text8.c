#include <stdio.h>

int main (){
	float km_per, dias , x, y, total ;
	printf("Informe a quantidades de DIAS: ");
	scanf("%f", &dias);
	printf("Informe os KM percorridos: ");
	scanf("%f", &km_per);
	x = dias * 60 ;
	y = km_per * 0.15 ;
	total = x + y ;
	printf("Total a pagar R$ %.2f \n", total);
	
}