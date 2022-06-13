#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char nome[30];
	int telefone;
	int idade;

} t_agenda;

int main()
{
	int i = 0;
	int num ;
	t_agenda cadastro[10];
	
	while(num != 0)
	{
		printf("\n");
		printf("======== MENU ========\n");
		printf("(1) = Cadastrar contato.\n");
		printf("(2) = Localizar contato.\n");
		printf("(3) = Alterar contato.\n");
		printf("(4) = Apagar contato.\n");
		printf("(5) = Listar contatos.\n");
		printf("(6) = Media de idade.\n");
		printf("(0) = Sair.\n");
		printf("Selecione: ");
		scanf("%d", &num);
		scanf("%c");
		
		if(i >= 2)
			printf("Agenda lotada!!!\n");
		else if(num == 1)
		{
			printf("Nome: ");
			fgets(cadastro[i].nome, 30, stdin);
			
			printf("Idade: ");
			scanf("%d",&cadastro[i].idade);
			
			printf("Telefone: ");
			scanf("%d",&cadastro[i].telefone);
			scanf("%c");
			i++;	
		}
	}

	printf("Nome = %s\n", cadastro[i].nome);
	printf("Idade = %d\n", cadastro[i].idade);
	printf("Telefone = %d\n", cadastro[i].telefone);


	return 0;
}
