/*Faca um algoritmo para ler o raio e calcular o perımetro, a area da superficie
e o volume de uma esfera*/

#include <stdio.h>

int main(){

	float raio, perimetro, area, y1, x1, volume ;

	printf("Informe o RAIO: ");
	scanf("%f", &raio);
	perimetro = 2 * 3.14 * raio ;
	area = 4 * 3.14 * (raio * raio);
	y1 = (raio * raio);
	x1 = (y1 * raio);
	volume = (0.75 * 3.14 * x1) ;
	printf("PERIMETRO: %.2f\n", perimetro);
	printf("AREA DA SUPERFICEIA: %.2f\n", area);
	printf("VOLUME: %.2f\n", volume);
}