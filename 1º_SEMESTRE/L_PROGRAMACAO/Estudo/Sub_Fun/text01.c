#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int num = -1;

typedef struct
{
	char nome[20];
	double altura;
	int idade;
	double pesoInicial;
	double pesoAtual;
	int valido;	
	int alterado;
}t_cadastro;

// CADASTRO
void cadastroCliente()
{
	int posicao = 0;
	char cadastroNome[20];
	FILE* arq = fopen("academia.bin", "ab+");
	t_cadastro cadastro;
	
	cadastro.valido = 1;
	printf("===== ALUNO =====\n");	
	printf("Nome: ");
	scanf(" %[^\n]", cadastroNome);
	while(1)
	{
		FILE* arq= fopen("academia.bin", "ab+");
		t_cadastro cadastro;
		
		fseek(arq, posicao * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
			
		if((strcmp(cadastroNome, cadastro.nome) == 0) && (cadastro.valido == 1))
		{
			printf("ERRO: NOME JA INSERIDO!!!\n");
			printf("Nome: ");
			scanf(" %[^\n]", &cadastroNome);
			break;
		}
		posicao++;	
	}
	strcpy(cadastro.nome, cadastroNome);
	printf("Altura: ");
	scanf("%lf", &cadastro.altura);
	printf("Idade: ");
	scanf("%d", &cadastro.idade);
	printf("Peso inicial: ");
	scanf("%lf", &cadastro.pesoInicial);
	cadastro.pesoAtual = cadastro.pesoInicial;
	
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	
	fclose(arq);

}

// ALTERAR CADASTRO
void alterarCadastro()
{
	int posicao = 0;
	char cadastroNome[20];
	FILE* arq = fopen("academia.bin", "rb+");
	t_cadastro cadastro;
	
	cadastro.alterado = 1;
	printf("Nome: ");
	scanf(" %[^\n]", cadastroNome);
	while(1)
	{
		if(feof(arq))
			break;
		fseek(arq, posicao * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);		
		if((strcmp(cadastroNome, cadastro.nome) == 0) && (cadastro.valido == 1))
		{
			strcpy(cadastro.nome, cadastroNome);
			printf("Peso atual: ");
			scanf("%lf", &cadastro.pesoAtual);
			scanf("%*c");
			break;
		}
		posicao++;
	}
	
	fseek(arq, posicao * sizeof(t_cadastro), SEEK_SET);
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	
	fclose(arq);
}

// MEDIA IMC
void mediaImc()
{
	FILE* arq = fopen("academia.bin", "rb");
	t_cadastro cadastro;
	
	int cont = 0;
	int posicao = 0;
	double imc = 0;
	double medialImc;
	while(1)
	{
		if(feof(arq))
			break;
		fseek(arq, posicao * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);	
			
		if(cadastro.valido == 1)
		{
			imc += (cadastro.pesoInicial / (cadastro.altura * cadastro.altura));
			cont++;
		}
		posicao++;
	}
	medialImc = imc / cont;
	
	printf("Media Imc: %.2lf KG\n", medialImc);
	
	fclose(arq);
}

// PERDA PESO
void perdaPeso()
{	
	FILE* arq = fopen("academia.bin", "rb");
	t_cadastro cadastro;
	
	int cont = 0;
	int posicao = 0;
	double diferenca = 0;
	double media;
	while(1)
	{
		if(feof(arq))
			break;
		fseek(arq, posicao * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);	
			
		if(cadastro.valido == 1)
		{
			diferenca += (cadastro.pesoInicial - cadastro.pesoAtual);
			cont++;
		}
		posicao++;
	}
	media = diferenca / cont;
	if(media < 0)
	{
		media = 0;
	}
	printf("Media (P)perda: %.2lf KG\n", media);
	
	fclose(arq);
}

int main()
{
	while(num != 0)
	{
		printf("===== MENU =====\n");
		printf("(1) = Cadastrar.\n");
		printf("(2) = Alterar cadastro.\n");
		printf("(3) = Terminar treinamento.\n");
		printf("(4) = Media IMC.\n");
		printf("(5) = Media (P)peso.\n");
		printf("(0) = Sair.\n");
		printf("Selecione: ");
		scanf("%d", &num);
		scanf("%*c");
		
		if(num == 1)
		{
			cadastroCliente();
		}
		
		if(num == 2)
		{
			alterarCadastro();
		}
		
		if(num == 4)
		{
			mediaImc();
		}
		
		if(num == 5)
		{
			perdaPeso();
		}
	}

	return 0;
}
