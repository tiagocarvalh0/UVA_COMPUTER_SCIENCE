/*Fac¸a um programa que receba dois numeros e mostre o maior*/

#include <stdio.h>

int main(){
	
	float num_1, num_2;

	printf("Digite um numero: ");
	scanf("%f", &num_1);
	printf("Digite outro numero: ");
	scanf("%f", &num_2);
	
	if(num_1 > num_2){
	printf("O Numero %.1f e MAIOR!\n", num_1);
}
	if(num_1 < num_2){
	printf("O Numero %.1f e MAIOR!\n", num_2);
}
	if(num_1 == num_2){
	printf("Os numeros %.1f e %.1f são iguais\n", num_1, num_2);
}


}