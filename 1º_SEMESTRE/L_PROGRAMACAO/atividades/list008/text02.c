#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num = 0, cont = 0;
float salarioBrutoM = 0, salarioBrutoF = 0, descontoProfessor = 0, descontoProfessora = 0;

typedef struct
{
	char codigo[30];
	char sexo[10];
	int horas;
} t_professor;

// CADASTRO
void cadastroProfessor(t_professor professor[])
{
	while(num != 10)
	{
		printf("\n");
		printf("==== Professor(a) %d ====\n", num);
		printf("Codigo: ");
		scanf(" %[^\n]", professor[num].codigo);
		printf("Sexo: ");
		scanf(" %[^\n]", professor[num].sexo);
		printf("Horas: ");
		scanf("%d", &professor[num].horas);
		num++;
	}
}

// MEDIA SALARIO BRUTO MASCULINO
void mediaSalarioBrutoMasculino(t_professor professor[])
{
	for(num = 0; num < 10; num++)
	{
		if(professor[num].sexo[0] == 'm')
		{
			salarioBrutoM += professor[num].horas;
			cont++;
		}	
	}
	salarioBrutoM = (salarioBrutoM * 60.50) / cont;
	printf("\n");
	printf("Salario (B)Masculino: RS %.2f", salarioBrutoM);
}

// MEDIA SALARIO BRUTO FEMININO
void mediaSalarioBrutoFeminino(t_professor professor[])
{
	cont = 0;
	for(num = 0; num < 10; num++)
	{
		salarioBrutoF += professor[num].horas;
		cont++;
	}
	salarioBrutoF = (salarioBrutoF * 60.50) / cont;
	printf("\n");
	printf("Salario (B)Feminino: RS %.2f", salarioBrutoF);
}

// LISTAGEM
void listagem(t_professor professor[])
{
	for(num = 0; num < 10; num++)
	{
		printf("\n");
		printf("==== Professor(a) %d ====\n", num);
		printf("Codigo: %s\n", professor[num].codigo);
		printf("Salario Bruto: %.2f\n", professor[num].horas * 60.50);
		
		if(professor[num].sexo[0] == 'm')
		{
			if(professor[num].horas <= 70)
			{
				descontoProfessor = (professor[num].horas * 60.50) - ((professor[num].horas * 60.50) * 0.10) ;
				printf("Desconto: %.2f\n", ((professor[num].horas * 60.50) * 0.10));
				printf("Salario: %.2f\n", descontoProfessor);
			}
			if(professor[num].horas > 70)
			{
				descontoProfessor = (professor[num].horas * 60.50) - ((professor[num].horas * 60.50) * 0.08);
				printf("Desconto: %.2f\n", ((professor[num].horas * 60.50) * 0.08));
				printf("Salario: %.2f\n", descontoProfessor);
			}
		}
		
		if(professor[num].sexo[0] == 'f')
		{
			if(professor[num].horas <= 70)
			{
				descontoProfessora = (professor[num].horas * 60.50) - ((professor[num].horas * 60.50) * 0.07);
				printf("Desconto: %.2f\n", ((professor[num].horas * 60.50) * 0.07));
				printf("Salario: %.2f\n", descontoProfessora);
			}
			if(professor[num].horas > 70)
			{
				descontoProfessora = (professor[num].horas * 60.50) - ((professor[num].horas * 60.50) * 0.05);
				printf("Desconto: %.2f\n", ((professor[num].horas * 60.50) * 0.05));
				printf("Salario: %.2f\n", descontoProfessora);
			}
		}
		printf("\n");
	}
}

int main()
{
	t_professor professor[10];
	
	cadastroProfessor(professor);
	
	listagem(professor);
	
	mediaSalarioBrutoMasculino(professor);
	
	mediaSalarioBrutoFeminino(professor);
	
	return 0;
}
