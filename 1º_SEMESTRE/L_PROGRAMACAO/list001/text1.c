/*Fac¸a um programa que pec¸a dois numeros inteiros, imprima a soma desses ´
dois numeros na tela.*/

#include <stdio.h>

int main (){

	int n1, n2, n3;

	printf("Digite um numero: ");
	scanf("%i", &n1);
	printf("Digite outro numero: ");
	scanf("%i", &n2);
	n3 = n1 + n2 ;
	printf("x = %d\n", n3);
}

