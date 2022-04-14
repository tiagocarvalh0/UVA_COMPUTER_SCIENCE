/*Escreva um programa que converta uma temperatura digitada em ºC para
ºF.*/

#include <stdio.h>

int main (){

	float c, f ;

	printf("Informe a temperatura em °C: ");
	scanf("%f", &c);
	f = ((9 * c) / 5 ) + 32 ;
	printf("Temperatura em °F: %.2f \n", f);
}