/*Fac¸a um algoritmo que dado a base de um triangulo e sua altura, ele calcula ˆ
sua area. Depois, escreve o valor da base, da altura e a ´ area. */

#include <stdio.h>

int main (){

	float base, altura, area_t; 

	printf("Valor da base: ");
	scanf("%f", &base);
	printf("Valor da altura: ");
	scanf("%f", &altura);
	area_t = (base * altura) / 2;
	printf("Valo da base de %.2f com altura de %.2f tem uma area de %.2f \n", base, altura, area_t);
}