/*Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a distancia a percorrer e a velocidade m ˆ edia esperada para a viagem. */

#include <stdio.h>

int main (){

	int distancia, v_media, tempo ;

	printf("Informe a distancia a percorrer em KM: ");
	scanf("%d", &distancia);
	printf("Informe a velocidade media em KM/H: ");
	scanf("%d", &v_media);
	tempo =  distancia / v_media ;
	printf("%d HORAS ate o destino \n", tempo);
}
	