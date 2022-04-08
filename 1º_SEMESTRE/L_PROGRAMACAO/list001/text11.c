/*Construa um algoritmo que calcule a media ponderada de tr ´ es notas com os ˆ
pesos 2, 4, 6, respectivamente.*/

#include <stdio.h>

int main (){

	float nota1, nota2, nota3, media ; 

	printf("Primeira nota: ");
	scanf("%f", &nota1);
	printf("Segunda nota: ");
	scanf("%f", &nota2);	
	printf("Terceira nota: ");
	scanf("%f", &nota3);
	media = ((nota1 * 2) + (nota2 * 4) + (nota3 * 6)) / 3 ;
	printf("%.2f \n", media);
}