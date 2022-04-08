/*Escreve um programa que leia um valor em metros e exiba convertido em
mil´ımetros*/

#include <stdio.h>

int main (){

	float n1, n2;

	printf("Informe a quantia em metros: ");
	scanf("%f", &n1);
	n2 = n1 * 1000 ;
	printf("%.2f milímetros\n", n2);
}