#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n = 2, cont = 0, i = 0;
float salarioMedio = 0, mediaFilhos = 0, salarioMaior ;

typedef struct
{
	char sexo[10];
	float salario;
	int idade;
	int filhos;
}t_cadastro;

// CADASTRO
void cadastroPopulacao(t_cadastro cadastro[])
{
	while(cont != 2)
	{
		printf("\n");
		printf("===== Cadastro %d =====\n", cont);
		printf("Sexo: ");
		scanf(" %[^\n]", cadastro[cont].sexo);
		printf("Idade: ");
		scanf("%d", &cadastro[cont].idade);
		printf("Filhos: ");
		scanf("%d", &cadastro[cont].filhos);
		printf("Salario: R$ ");
		scanf("%f", &cadastro[cont].salario);
		cont++;
	}
}

// MEDIA SALARIO
void mediaSalario(t_cadastro cadastro[])
{
	cont = 0;
	for(i = 0; i < n; i++)
	{
		if(cadastro[i].salario == 0)
			cont--;
		salarioMedio += cadastro[i].salario ;
		cont++;
	}
	printf("\n");
	printf("Salario Medio: R$ %.2f\n", salarioMedio / cont);
}

// MEDIA FILHOS
void mediaDeFilhos(t_cadastro cadastro[])
{
	cont = 0;
	for(i = 0; i < n; i++)
	{
		if(cadastro[i].filhos == 0)
			cont--;
		mediaFilhos += cadastro[i].filhos;
		cont++;
	}
	printf("\n");
	printf("Media Filhos: %.1f\n", mediaFilhos / cont);
}

// MAIOR SALARIO
void mariorSalario(t_cadastro cadastro[])
{
	salarioMaior = cadastro[0].salario;
	
	for(i = 0; i < n; i++)
	{
		if(salarioMaior < cadastro[i].salario)
			salarioMaior = cadastro[i].salario;
	}
	printf("\n");
	printf("Maior salario: R$ %.2f\n", salarioMaior);

}

int main()
{
	t_cadastro cadastro[n];
	
	cadastroPopulacao(cadastro);
	
	mediaSalario(cadastro);
	
	mediaDeFilhos(cadastro);
	
	mariorSalario(cadastro);
	
	

}
