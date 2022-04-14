/*Fac¸a um programa que receba tres n ˆ umeros obrigatoriamente em ordem ´
crescente e um quarto numero que n ´ ao siga essa regra. Mostre, em seguida, ˜
os quatro numeros em ordem decrescente. ´
OBS: Acredite que o usuario ir ´ a fornecer os n ´ umeros em ordem crescente. ´
OBS2: Acredite que o usuario digitar ´ a quatro n ´ umeros diferentes. */

#include <stdio.h>

int main(){

	float num_1, num_2, num_3, num_4;

	printf("Digite um numero: ");
	scanf("%f", &num_1);
	printf("Digite outro numero: ");
	scanf("%f", &num_2);
	printf("Digite outro numero: ");
	scanf("%f", &num_3);
	printf("Digite outro numero: ");
	scanf("%f", &num_4);

	if(num_4 < num_1){
	printf("%.1f, %.1f, %.1f, %.1f\n", num_4, num_1, num_2, num_3 );
}
	if((num_4 > num_1) && (num_4 < num_2)){
	printf("%.1f, %.1f, %.1f, %.1f\n", num_1, num_4, num_2, num_3 );
}
	if((num_4 > num_2) && (num_4 < num_3)){
	printf("%.1f, %.1f, %.1f, %.1f\n", num_1, num_2, num_4, num_3 );
}
	if(num_4 > num_3){
	printf("%.1f, %.1f, %.1f, %.1f\n", num_1, num_2, num_3, num_4 );
}

}