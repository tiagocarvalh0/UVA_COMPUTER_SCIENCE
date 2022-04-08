/*Fac¸a um algoritmo para ler o raio e calcular o per´ımetro, a area da superf ´ ´ıcie
e o volume de uma esfera*/

#include <stdio.h>

int main(){

	float raio, perimetro, area, volume ;
	
	printf("Informe o RAIO da esfera: ");
	scanf("%f", &raio);
	perimetro = 2 * 3.14 * raio ;
	area = 4 * 3.14 * (raio / 0.5);
	volume =(3 /4) * (3.14) * (raio^3) ;
	printf("Raio = %.2f\nArea da superficie = %.2f\nVolume = %.2f\n", raio, area, volume);
	

}