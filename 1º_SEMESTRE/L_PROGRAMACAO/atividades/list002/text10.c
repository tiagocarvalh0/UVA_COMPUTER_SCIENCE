/*Fac¸a um programa que receba o valor do salario m ´ ´ınimo, o numero de horas ´
trabalhadas, o numero de dependentes do funcion ´ ario e a quantidade de ´
horas extras trabalhadas. Calcule e mostre o salario a receber do funcion ´ ario ´
de acordo com as regras a seguir:

• O valor da hora trabalhada e igual a 1/5 do sal ´ ario m ´ ´ınimo.

• O salario do m ´ esˆ e igual ao n ´ umero de horas trabalhadas multiplicado ´
pelo valor da hora trabalhada.

• Para cada dependente, acrescentar R$ 32,00.

• Para cada hora extra trabalhada, calcular o valor da hora trabalhada
acrescida de 50%.

• O salario bruto ´ e igual ao sal ´ ario do m ´ es mais o valor dos dependentes ˆ
mais o valor das horas extras.
*/

#include <stdio.h>

int main(){

	float salario, h_trabalhada, dependente, h_extra, v_h_trabalhada, s_mes;

	printf("Valor do salario minimo: R$ \n");
	scanf("%f", &salario);
	printf("Numero de horas trabalhadas: \n");
	scanf("%f", &h_trabalhada);
	printf("Numero de dependentes: \n");
	scanf("%f", &dependente);
	printf("Horas extras: \n");
	scanf("%f", &h_extra);
	v_h_trabalhada = salario * 0.2;
	s_mes = h_trabalhada * v_h_trabalhada;
	
}