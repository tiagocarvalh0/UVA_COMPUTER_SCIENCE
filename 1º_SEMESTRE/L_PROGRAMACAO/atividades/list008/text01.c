#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0, cont = 0, cont1 = 0, num1 = 0;
float mediaIdade = 0, soma = 0;
char nome1[30];

typedef struct
{
	char nome[30];
	int telefone;
	int idade;
	int ocupado;
} t_agenda ;

// (1) = CADASTRAR CONTATO
void cadastroContato(t_agenda agenda[], int i)
{
	printf("\n");
	printf("Nome: ");
	scanf("%[^\n]", agenda[i].nome);
	printf("Telefone: ");
	scanf("%d", &agenda[i].telefone);
	printf("Idade: ");
	scanf("%d", &agenda[i].idade);
	agenda[i].ocupado = 1;
}

// (2) = LOCALIZAR CONTATO
void localizaContato(t_agenda agenda[], int i)
{
	printf("Informe nome: ");
	scanf("%[^\n]", nome1);
	for(i = 0; i < 10; i++)
	{
		if(agenda[i].ocupado == 1)
		{
			if(strcmp(agenda[i].nome, nome1) == 0)
			{
				printf("\n");
				printf("Telefone: %d\n", agenda[i].telefone);
				printf("Idade: %d\n", agenda[i].idade);
			}
		}
	}		
}

// (3) = ALTERAR CONTATO
void alterarContato(t_agenda agenda[], int i)
{
	printf("Informe nome: ");
	scanf("%[^\n]", nome1);
	for(i = 0; i < 10; i++)
	{
		if(agenda[i].ocupado == 1)
		{
			if(strcmp(agenda[i].nome, nome1) == 0)
			{
				printf("(1) = Alterar Nome.\n");
				printf("(2) = Alterar Telefone.\n");
				printf("(3) = Alterar Idade.\n");
				scanf("%d", &num1);
				scanf("%c");
				if(num1 == 1)
				{
					printf("Informa nome: ");
					scanf("%[^\n]", agenda[i].nome);
				}
				if(num1 == 2)
				{
					printf("Informa Telefone: ");
					scanf("%d", &agenda[i].telefone);
				}
				if(num1 == 3)
				{
					printf("Informa Idade: ");
					scanf("%d", &agenda[i].idade);
				}
			}
		}
	}
}

// (4) = APAGAR CONTATO
void apagarContato(t_agenda agenda[], int i)
{
		printf("Informe nome: ");
	scanf("%[^\n]", nome1);
	for(i = 0; i < 10; i++)
	{
		if(agenda[i].ocupado == 1)
		{
			if(strcmp(agenda[i].nome, nome1) == 0)
			{
				agenda[i].ocupado = 0;
			}		
		}
	}
}

// (5) = LISTAR CONTATO
void listarContato(t_agenda agenda[], int i)
{
	for(i = 0; i < 10; i++)
	{
		if(agenda[i].ocupado == 1)
		{
			printf("\n");
			printf("===== CONTATO %d =====\n", i);
			printf("Nome: %s\n", agenda[i].nome);
			printf("Telefone: %d\n", agenda[i].telefone);
			printf("Idade: %d\n", agenda[i].idade);
		}
	}
}

// (6) = MEDIA DE IDADE
void mediadeIdade(t_agenda agenda[], int i)
{
	for(i = 0; i < 10; i++)
		{
			if(agenda[i].ocupado == 1)
			{
				soma += agenda[i].idade;
				cont++;
			}
		}	
	mediaIdade = soma / cont;
	printf("\n");
	printf("MEDIA DE IDADE = %.1f\n", mediaIdade);
}

int main()
{
	t_agenda agenda[10];
	
	int num = 10;
	
	while(num != 0)
	{
		printf("\n");
		printf("======= MENU =======\n");
		printf("(1) = Cadastrar contato.\n");
		printf("(2) = Localizar contato.\n");
		printf("(3) = Alterar contato.\n");
		printf("(4) = Apagar contato.\n");
		printf("(5) = Listar contatos.\n");
		printf("(6) = Media de idade.\n");
		printf("(0) = SAIR.\n");
		printf("Selecione: ");
		scanf("%d", &num);
		scanf("%c");
		
		// (1) = CADASTRAR CONTATO
		if(num == 1)
		{
			cadastroContato(agenda, i);
			i++;
		}
		
		// (2) = LOCALIZAR CONTATO
		if(num == 2)
		{
			localizaContato(agenda, i);
		}
		
		// (3) = ALTERAR CONTATO
		if(num == 3)
		{
			alterarContato(agenda, i);	
		}
		
		// (4) = APAGAR CONTATO
		if(num == 4)
		{
			apagarContato(agenda, i);
		}
		
		// (5) = LISTAR CONTATO
		if(num == 5)
		{
			listarContato(agenda, i);
		}
		
		// (6) = MEDIA DE IDADE
		if(num == 6)
		{
			mediadeIdade(agenda, i);
		}	
	}
	return 0;	
}
