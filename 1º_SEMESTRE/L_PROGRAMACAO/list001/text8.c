/*Escreva um programa que pergunte a quantidade de km percorridos por um
carro alugado pelo usuario, assim como a quantidade de dias pelos quais o ´
carro foi alugado. Calcule o prec¸o a pagar, sabendo que o carro custa R$ 60
por dia e R$ 0,15 por km rodado.*/

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