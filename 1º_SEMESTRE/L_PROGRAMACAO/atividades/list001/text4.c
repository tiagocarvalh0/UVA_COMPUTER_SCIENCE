/*Fac¸a um programa que calcule o aumento de um salario. Ele deve solicitar ´
o valor do salario e a porcentagem do aumento. Exiba o valor do aumento ´
e do novo salario. */

#include <stdio.h>

int main (){

	float salarioatual, porcentagem, aumento, ajuste ,total ;

	printf("Informe o SALARIO ATUAL:R$ ");
	scanf("%f", &salarioatual);
	printf("Informe a PORCETAGEM de aumento: ");
	scanf("%f", &porcentagem);
	aumento = salarioatual * (porcentagem / 100);
	total = salarioatual + (salarioatual * (porcentagem / 100));
	printf("Aumento de: R$ %.2f\n",aumento);
	printf("Novo salaro de R$ %.2f\n", total);
}