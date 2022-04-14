/*Escreva um programa que pergunte o salario do funcion ´ ario e calcule o valor ´
do aumento. Para salarios superiores a R$ 1.250,00, calcule um aumento de ´
10%. Para os inferiores ou iguais, de 15%.*/

#include <stdio.h>

int main(){

	float salario, aumento_10, aumento_15 ;
	
	printf("Informe o valor de salario: R$ ");
	scanf("%f", &salario);
	aumento_10 = salario * 0.10;
	aumento_15 = salario * 0.15;

	if(salario > 1250){
	salario = aumento_10 + salario;
	printf("AUMEMTO DE: R$ %.2f\n", aumento_10);
	printf("Novo salario de: R$ %.2f\n", salario);
}
	if(salario <= 1250 ){
	salario = aumento_15 + salario;
	printf("AUMEMTO DE: R$ %.2f\n", aumento_15);
	printf("Novo salario de: R$ %.2f\n", salario);
	
}
}