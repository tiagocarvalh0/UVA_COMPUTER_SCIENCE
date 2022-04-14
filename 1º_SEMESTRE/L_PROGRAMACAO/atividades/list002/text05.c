/*Escreva um programa que leia dois numeros e que pergunte qual operac¸ ´ ao˜
voce deseja realizar. Voc ˆ e deve poder calcular soma (+), subtrac¸ ˆ ao (-), ˜
multiplicac¸ao (*) e divis ˜ ao (/). Exiba o resultado da operac¸ ˜ ao solicitada. */

#include <stdio.h>

int main(){

	float num_1, num_2, operacao_1, operacao, operacao_2, operacao_3 , operacao_4;

	printf("Digite um numero: ");
	scanf("%f", &num_1);
	printf("Digite outro numero: ");
	scanf("%f", &num_2);
	printf("Agora escolha a OPERAÇÃO: \n");
	printf("(1) = SOMA\n(2) = SUBTRAÇÃO\n(3) = MULTIPLICAÇÃO\n(4) = DIVISÃO\n");
	scanf("%f", &operacao);	
	operacao_1 = num_1 + num_2 ;
	operacao_2 = num_1 - num_2 ;
	operacao_3 = num_1 * num_2 ;
	operacao_4 = num_1 / num_2 ;

	if(operacao == 1){
	printf("A SOMA entre %.1f e %.1f e: %.1f\n", num_1, num_2, operacao_1);
}
	if(operacao == 2){
	printf("A SUBTRAÇÃO entre %.1f e %.1f e: %.1f\n", num_1, num_2, operacao_2);
}
	if(operacao == 3){
	printf("A MULTIPLICAÇÃO entre %.1f e %.1f e: %.1f\n", num_1, num_2, operacao_3);
}
	if(operacao == 4){
	printf("A DIVISÃO entre %.1f e %.1f e: %.1f\n", num_1, num_2, operacao_4);
}
}