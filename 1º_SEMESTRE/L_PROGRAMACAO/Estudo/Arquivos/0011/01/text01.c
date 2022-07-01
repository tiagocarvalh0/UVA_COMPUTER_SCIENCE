#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	int numero;
	char nome[20];
	char curso[20];
	float nota1;
	float nota2;
	int valido
} t_cadastro;

// CADASTRAR ALUNO
void cadastrarAluno()
{
	int num;
	int position = 0;
	FILE * arq = fopen("aluno.bin", "ab+");
	t_cadastro cadastro;
	
	printf("Numero: ");
	scanf("%d", &num);
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		
		if((cadastro.valido == 1) && (num == cadastro.numero))
		{
			printf("ERRO: NUMERO INVALIDO!!!\n");
				break;
		}
		position++;
	}
	cadastro.numero = num;
	printf("Nome: ");
	scanf(" %[^\n]", cadastro.nome);
	printf("Curso: ");
	scanf(" %[^\n]", cadastro.curso);
	printf("Nota (1) = ");
	scanf("%f", &cadastro.nota1);
	printf("Nota (2) = ");
	scanf("%f", &cadastro.nota2);
	cadastro.valido = 1;
	
	fread(&cadastro, sizeof(t_cadastro), 1, arq);
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	fclose(arq);	
}

// LER ARQUIVO
void lerArquivo()
{
	FILE * arq = fopen("aluno.bin", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1,arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			printf("\n");
			printf("Numero: %d\n", cadastro.numero);
			printf("Nome: %s\n", cadastro.nome);
			printf("Curso: %s\n", cadastro.curso);
			printf("Nota (1) = %.1f\n", cadastro.nota1);
			printf("Nota (2) = %.1f\n", cadastro.nota2);
			printf("\n");
		}	
	}
	fclose(arq);
}

// ALTERAR NOTA
void alterarNota()
{
	int position = 0;
	int num;
	FILE * arq = fopen("aluno.bin", "rb+");
	t_cadastro cadastro;
	
	printf("Numero: ");
	scanf("%d", &num);
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if((cadastro. valido == 1) && (num == cadastro.numero))
		{
			printf("Nota (1) = ");
			scanf("%f", &cadastro.nota1);
			printf("Nota (2) = ");
			scanf("%f", &cadastro.nota2); 
			
			fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
			fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
		}
		position++;	
	}
	fclose(arq);
}

// ALTERAR CURSO
void alterarCurso()
{
	int num;
	int position = 0;
	FILE * arq = fopen("aluno.bin", "rb+");
	t_cadastro cadastro;
	
	printf("Numero: ");
	scanf("%d", &num);
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			printf("Curso: ");
			scanf(" %[^\n]", cadastro.curso);
			
			fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
			fwrite(&cadastro, sizeof(t_cadastro),1, arq);
				break;
		}
		position++;
	}
	fclose(arq);
}

//EXCLUIR
void excluir()
{
	int num;
	int position = 0;
	FILE * arq = fopen("aluno.bin", "rb+");
	t_cadastro cadastro;
	
	printf("Numero: ");
	scanf("%d", &num);
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			cadastro.valido = 0;
			fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
			fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
			printf("Excluito (%d)\n", cadastro.valido);
				break;	
		}
		position++;
	}
	fclose(arq);
}

// MEDIA
void alunosMedia()
{
	FILE * arq = fopen("aluno.bin", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			printf("\n");
			printf("Numero: %s\n", cadastro.nome);
			printf("Nome: %s\n", cadastro.curso);
			printf("Media %.1f\n", (cadastro.nota1 + cadastro.nota2) / 2);
			if(((cadastro.nota1 + cadastro.nota2) / 2) >= 7)
				printf("APROVADO!!!\n");
			if((((cadastro.nota1 + cadastro.nota2) / 2) >= 3) && (((cadastro.nota1 + cadastro.nota2) / 2) < 7))
				printf("EXAME!!!\n");
			if(((cadastro.nota1 + cadastro.nota2) / 2) < 3)
				printf("REPROVADO!!!\n");
			printf("\n");
		
		}
	
	}

}

int main()
{
	int num = -1;
	while(1)
	{
		printf("\n");
		printf("===== MENU =====\n");
		printf("(1) = Cadastrar Aluno.\n");
		printf("(2) = Ler Arquivo.\n");
		printf("(3) = Alterar Nota.\n");
		printf("(4) = Alterar Curso.\n");
		printf("(5) = Excluir.\n");
		printf("(6) = Media.\n");
		printf("(0) = Sair.\n");
		printf("Selecionar: ");
		scanf("%d", &num);
		scanf("%*c");
		
		if(num == 1)
			cadastrarAluno();
		if(num == 2)
			lerArquivo();
		if(num == 3)
			alterarNota();
		if(num == 4)
			alterarCurso();
		if(num == 5)
			excluir();
		if(num == 6)
			alunosMedia();
		
		if(num == 0)
			break;
	}
	

	return 0;
}
