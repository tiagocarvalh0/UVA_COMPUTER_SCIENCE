/*A escola “APRENDER” faz o pagamento de seus professores por hora/aula.
Fac¸a um algoritmo que leia o n´ıvel do professor e a quantidade de horas/aula
trabalhadas, calcule e exiba o salario de um professor. Sabe-se que o valor ´
da hora/aula segue a tabela abaixo:

• Professor Nıvel 1 R$12,00 por hora/aula

• Professor Nıvel 2 R$17,00 por hora/aula

• Professor Nıvel 3 R$25,00 por hora/aula*/

#include <stdio.h>

int main()
{
	
	int nivel, hora ;
	float salario ;
	
	printf("===========================================\n");
	printf("• Professor Nıvel 1 R$12,00 por hora/aula\n");
	printf("===========================================\n");
	printf("• Professor Nıvel 2 R$17,00 por hora/aula\n");
	printf("===========================================\n");
	printf("• Professor Nıvel 3 R$25,00 por hora/aula\n");
	printf("===========================================\n");
	printf("Nivel: \n");
	scanf("%i", &nivel);
	printf("Horas: \n");
	scanf("%i", &hora);
	
	if (nivel == 1)
	{
		salario = hora * 12 ; 
	}
	else if (nivel == 2)
	{
		salario = hora * 17 ;
	}
	else 
	{
		salario = hora * 25 ;
	}

	printf("Salario: R$ %.2f\n", salario);

}