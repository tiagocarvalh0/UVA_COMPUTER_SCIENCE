#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num = -1, l = 1;

typedef struct
{
	int numero;
	char nome[20];
	char curso[20];
	float nota1;
	float nota2;
}t_cadastro;

// CADASTRO
void cadastroAluno()
{
	FILE* arq;
	arq = fopen("arquivo.dat", "ab");
	t_cadastro cadastro;
	
	printf("===== ALUNO =====\n");	
	printf("Numero: ");
	scanf("%d", &cadastro.numero);
	printf("Nome: ");
	scanf(" %[^\n]", cadastro.nome);
	printf("Cusor: ");
	scanf(" %[^\n]", cadastro.curso);
	printf("Primeira nota: ");
	scanf("%f", &cadastro.nota1);
	printf("Segunda nota: ");
	scanf("%f", &cadastro.nota2);
	
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	
	fclose(arq);
}

// LER ARQUIVO
void lerArquivo()
{
	FILE* arq;
	arq = fopen("arquivo.dat", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		printf("Numero: ");
		printf("%d\n", cadastro.numero);
		printf("Nome: ");
		printf("%s\n", cadastro.nome);
		printf("Cusor: ");
		printf("%s\n", cadastro.curso);
		printf("Primeira nota: ");
		printf("%.1f\n", cadastro.nota1);
		printf("Segunda nota: ");
		printf("%.1f\n", cadastro.nota2);
		if(feof(arq))
			break;
	}
	fclose(arq);
}

int main()
{
	while(num != 0)
	{
		printf("===== MENU ====\n");
		printf("(1) = Cadastro.\n");
		printf("(2) = Ler arquivo.\n");
		printf("(0) = Sair.\n");
		printf("Selecionar: ");
		scanf("%d", &num);
		scanf("%*c");
		
		if(num == 1)
		{
			cadastroAluno();
		}
		if(num == 2)
		{
			lerArquivo();
		}
	
	}
	
	

	return 0;
}
