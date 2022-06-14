#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char nome[30];
	int telefone;
	int idade;
	int ocupado;

} t_agenda;

int main()
{
	int i = 0;
	int num ;
	float media = 0.0;
	
	t_agenda cadastro[10];
	
	for(i = 0 ; i < 10; i++)
		cadastro[i].ocupado = 0;
	i = 0;
	
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
		
		//ENCERRAR PROGRAMA
		if(num == 0)
			break;		
		// CADASTRAR CONTATO
		if(num == 1)
		{
			if(i >= 10)
			printf("Agenda lotada!!!\n");
			
			else
			printf("Nome: ");
			fgets(cadastro[i].nome, 30, stdin);
			
			printf("Idade: ");
			scanf("%d",&cadastro[i].idade);
			
			printf("Telefone: ");
			scanf("%d",&cadastro[i].telefone);
			
			
			cadastro[i].ocupado = 1;
			i++;	
		}
		
		// LISTAR CONTATO
		if(num == 5)
		{
			printf("\nMedia de idade:\n");
			for(i = 0; i < 10; i++)
			{
				if(cadastro[i].ocupado == 1)
					printf("(%d) = %s\n",i, cadastro[i].nome);
			}
		}
		
		// MEDIA IDADE
		if(num == 6)
		{
			printf("\nLista de Contatos:\n");
			for(i = 0; i < 10; i++)
			{
				if(cadastro[i].ocupado == 1)
				{
					media = media + cadastro[i].idade;
				}
			}
			printf("Media de idade = %.1f\n", media);
		}
		
	}
	



	return 0;

}
