/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/

#include <stdio.h>
 
int main() {
 	
	int NUMBER, horas ;

	double SALARY;

	scanf("%i", &NUMBER);
	scanf("%i", &horas);
	scanf("%lf", &SALARY);
	SALARY = horas * SALARY;
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", NUMBER, SALARY);
	
    return 0;
}