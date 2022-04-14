/*Construa um algoritmo que dado os lados de um retangulo calcule seu ˆ
per´ımetro e depois sua area. No final escreve os lados, seu per ´ ´ımetro e
sua area.*/

#include <stdio.h>

int main (){

	float lado_a, lado_b, area , perimetro ;

	printf("Informe o tamanho do lado A: ");
	scanf("%f", &lado_a);
	printf("Informe o tamanho do lado B: ");
	scanf("%f", &lado_b);
	area = lado_a * lado_b ;
	perimetro = (lado_a * 2) + (lado_b * 2);
	printf("Lado A = %.2f\nLado B = %.2f\n", lado_a, lado_b);
	printf("Perimetro = %.2f\nArea = %.2f\n", perimetro, area);
	
	
	
		
}