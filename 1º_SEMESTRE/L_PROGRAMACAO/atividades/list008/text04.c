#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n = 2, i = 0, cont = 0, maiorAcidente, menorAcidente, valor = 0, totalVeiculos = 0;

typedef struct
{
	char nome[20];
	int veiculos;
	int acidentes;
}t_formulario;

// CADASTRO
void cadastro(t_formulario formulario[])
{
	while(cont != n)
	{
	printf("\n");
	printf("===== Formulario %d =====\n", cont);
	printf("Nome: ");
	scanf(" %[^\n]", formulario[cont].nome);
	printf("Veiculos: ");
	scanf("%d", &formulario[cont].veiculos);
	printf("Acidentes: ");
	scanf("%d", &formulario[cont].acidentes);
	cont++;
	}
}

// MAIOR MENOR ACIDENTES
void acidentes(t_formulario formulario[])
{
	cont = 0;
	maiorAcidente = formulario[0].acidentes;
	menorAcidente = formulario[0].acidentes;
	
	while(cont != n)
	{
		if(formulario[cont].acidentes > maiorAcidente)
		{
			maiorAcidente = formulario[cont].acidentes;
			valor = cont;
		}
		cont++;
	}
	printf("\n");
	printf("MAIOR INDICE(A)\n");
	printf("Estado: %s\n", formulario[valor].nome);
	printf("Acidente: %d\n", maiorAcidente);
	
	cont = 0 ;
	valor = 0;
	while(cont != n)
	{
		if(formulario[cont].acidentes < menorAcidente)
		{
			menorAcidente = formulario[cont].acidentes;
			valor = cont;
		}
		cont++;
	}
	printf("\n");
	printf("MENOR INDICE(A)\n");
	printf("Estado: %s\n", formulario[valor].nome);
	printf("Acidente: %d\n", menorAcidente);
}

// PERCENTUAL VEICULOS
void percentualVeiculos(t_formulario formulario[])
{
	cont = 0;
	while(cont != n)
	{
		totalVeiculos = totalVeiculos + formulario[cont].veiculos; 
	}
	prinf("\n");
	printf("%d\n", totalVeiculos);
}

int main()
{
	t_formulario formulario[n];	
	
	cadastro(formulario);
	
	acidentes(formulario);
	
	percentualVeiculos(formulario);	
	
	return 0;
}
