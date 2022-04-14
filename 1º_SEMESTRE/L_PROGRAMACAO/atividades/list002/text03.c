/*Escreva um programa que leia tres n ˆ umeros e que imprima o maior e o ´
menor.*/

#include <stdio.h>

int main(){

	float num_1, num_2, num_3 ;

	printf("Digite um numero: ");
	scanf("%f", &num_1);
	printf("Digite outro numero: ");
	scanf("%f", &num_2);
	printf("Digite outro numero: ");
	scanf("%f", &num_3);

	if((num_1 > num_2) && (num_1 > num_3)){
	printf("O MAIOR numero e: %.1f\n", num_1);
}
	if((num_2 > num_1) && (num_2 > num_3)){
	printf("O MAIOR numero e: %.1f\n", num_2);
}
	if((num_3 > num_1) && (num_3) > num_2 ){
	printf("O MAIOR numero e: %.1f\n", num_3);
}
	if((num_1 < num_2) && (num_1 < num_3)){
	printf("O MENOR numero e: %.1f\n", num_1);
}
	if((num_2 < num_1) && (num_2 < num_3)){
	printf("O MENOR numero e: %.1f\n", num_2);
}
	if((num_3 < num_1) && (num_2)){
	printf("O MENOR numero e: %.1f\n", num_3);
}
}