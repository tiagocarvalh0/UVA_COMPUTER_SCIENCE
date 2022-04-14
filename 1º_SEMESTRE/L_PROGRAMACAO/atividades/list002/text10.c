/*Fac¸a um programa que receba o valor do salario m ´ ´ınimo, o numero de horas ´
trabalhadas, o numero de dependentes do funcion ´ ario e a quantidade de ´
horas extras trabalhadas. Calcule e mostre o salario a receber do funcion ´ ario ´
de acordo com as regras a seguir:

• O valor da hora trabalhada e igual a 1/5 do salario mınimo.

• O salario do mes e igual ao numero de horas trabalhadas multiplicado
pelo valor da hora trabalhada.

• Para cada dependente, acrescentar R$ 32,00.

• Para cada hora extra trabalhada, calcular o valor da hora trabalhada
acrescida de 50%.

• O salario brutoe igual ao salario do mes mais o valor dos dependentes mais o valor das horas extras.
*/

#include <stdio.h>

int main(){

	float salario, h_trabalhada, dependente, h_extra, v_h_trabalhada, s_mes, s_mes_d;

	printf("Valor do salario minimo: R$ \n");
	scanf("%f", &salario);
	printf("Numero de horas trabalhadas: \n");
	scanf("%f", &h_trabalhada);
	printf("Numero de dependentes: \n");
	scanf("%f", &dependente);
	printf("Horas extras: \n");
	scanf("%f", &h_extra);
	v_h_trabalhada = salario * 0.2;
	h_extra = v_h_trabalhada * 0.5 ;
	s_mes = h_trabalhada * v_h_trabalhada;
	dependente = dependente * 32 ;
	salario = s_mes + dependente + h_extra;
	printf("Valor dependente:\nR$ %.2f\n", dependente);
	printf("Valor s_mes :\nR$ %.2f\n", s_mes);
	printf("Valo da hora trabalhada:\nR$ %.2f\n", v_h_trabalhada);
	printf("Valor da hora extra:\nR$ %.2f\n", h_extra);
	printf("SALARIO: R$ %.2f\n", salario);
	
	
	
	
}