#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num = -1, l = 1;

typedef struct
{
	int valido;
	int numero;
	char nome[20];
	char curso[20];
	float nota1;
	float nota2;
}t_cadastro;

// CADASTRO
void cadastroAluno()
{
	int position = 0;
	int cadastroNum;
	FILE* arq;
	arq = fopen("arquivo.dat", "ab+");
	t_cadastro cadastro;
	
	printf("===== ALUNO =====\n");	
	printf("Numero: ");
	scanf("%d", &cadastroNum);
	while(1)
		{
			fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
			fread(&cadastro, sizeof(t_cadastro), 1, arq);
			if(feof(arq))
				break;
			if((cadastro.valido == 1) && (cadastroNum == cadastro.numero))
			{
				printf("ERRO: NOMA INVALIDO!!!\n");
				printf("Numero: ");
				scanf("%d", &cadastroNum);
			}
			position++;
		}
	cadastro.numero = cadastroNum;
	printf("Nome: ");
	scanf(" %[^\n]", cadastro.nome);	
	printf("Cusor: ");
	scanf(" %[^\n]", cadastro.curso);
	printf("Primeira nota: ");
	scanf("%f", &cadastro.nota1);
	printf("Segunda nota: ");
	scanf("%f", &cadastro.nota2);
	cadastro.valido = 1;
	printf("Cadastro Valido: (%d)\n", cadastro.valido);
	
	fread(&cadastro, sizeof(t_cadastro), 1, arq);
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	fclose(arq);
}

// LER ARQUIVO
void lerArquivo()
{
	FILE * arq = fopen("arquivo.dat", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido)
		{
			printf("Nome: %s\n", cadastro.nome);
			printf("Cusor: %s\n", cadastro.curso);
			printf("Primeira nota: %.1f\n", cadastro.nota1);
			printf("Segunda nota: %.1f\n", cadastro.nota2);	
		}
	}
}

// ALTERAR NOTA
void alterarNota()
{
	float cNota1, cNota2;
	int num ;
	int position = 0;
	FILE* arq = fopen("arquivo.dat", "rb+");
	t_cadastro cadastro;
	
	printf("Informe o Numero: ");
	scanf("%d", &num);
	while(1)
	{
		//fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			if(num == cadastro.numero)
			{
				printf("Aluno: %s\n", cadastro.nome);
				printf("Nota (1): ");
				scanf("%f", &cadastro.nota1);
				printf("Nova Nota(1): %.1f\n", cadastro.nota1);
				printf("Nota (2): ");
				scanf("%f", &cadastro.nota2);
				printf("Nova Nota(2): %.1f\n", cadastro.nota2);
				
				fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
				fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
				break;
			}
		}
		position++;		
	}
	fclose(arq);
}

// ALTERAR CURSO
void alterarCurso()
{
	int num, position;
	char cCurso[20];
	FILE* arq = fopen("arquivo.dat", "rb+");
	t_cadastro cadastro;
	
	printf("Informe o Numero: ");
	scanf("%d", &num);
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro. valido == 1)
			if(num == cadastro.numero)
			{
				printf("Aluno: %s\n", cadastro.nome);
				printf("Curso: ");
				scanf(" %[^\n]", cadastro.curso);
				printf("Novo Curso: %s.\n", cadastro.curso);
				fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
				fwrite(&cadastro, sizeof(t_cadastro), 1, arq);	
				break;
			}
		position++;
	}
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	fclose(arq);
}

// EXCLUIR
void excluirAluno()
{
	int num, position;
	FILE* arq = fopen("arquivo.dat", "rb+");
	t_cadastro cadastro;
	
	printf("Informe o Numero: ");
	scanf("%d", &num);
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
			if(num == cadastro.numero)
			{
				cadastro.valido = 0;
				fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
				fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
				printf("Aluno: %s\nExcluido (%d).\n", cadastro.nome, cadastro.valido);
				break;
			}
		position++;
	}
	fclose(arq);
}

// CONSULTA MEDIA
void consultaMedia()
{
	int position = 0;
	FILE* arq = fopen("arquivo.dat", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			printf("===== ALUNO %d =====\n", position);
			printf("Numero: %d\n", cadastro.numero);
			printf("Nome: %s\n", cadastro.nome);
			printf("Curso: %s\n", cadastro.curso);
			printf("Media: %.2f\n",(cadastro.nota1 + cadastro.nota2) / 2);
		}
		position++;
		
	}
	fclose(arq);
}
// CONSULTAR APROVADOR
void consultarAprovado()
{
	int position = 0;
	FILE* arq = fopen("arquivo.dat", "rb");
	t_cadastro cadastro;
	
	printf("======== APROVADOS ========\n");
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			if(((cadastro.nota1 + cadastro.nota2) / 2) >= 7)
			{
				printf("===== ALUNO %d =====\n", position);
				printf("Numero: %d\n", cadastro.numero);
				printf("Nome: %s\n", cadastro.nome);
				printf("Curso: %s\n", cadastro.curso);
				printf("Media: %.2f\n",(cadastro.nota1 + cadastro.nota2) / 2);
			}
		}
		position++;
		
	}
	fclose(arq);
}

// CONSULTAR REPROVADOS
void consultarReprovados()
{
	int position = 0;
	FILE* arq = fopen("arquivo.dat", "rb");
	t_cadastro cadastro;
	
	printf("======== REPROVADOS ========\n");
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			if(((cadastro.nota1 + cadastro.nota2) / 2) < 3)
			{
				printf("===== ALUNO %d =====\n", position);
				printf("Numero: %d\n", cadastro.numero);
				printf("Nome: %s\n", cadastro.nome);
				printf("Curso: %s\n", cadastro.curso);
				printf("Media: %.2f\n",(cadastro.nota1 + cadastro.nota2) / 2);
			}
		}
		position++;
		
	}
	fclose(arq);
}

// EXAME
void exame()
{
	int position = 0;
	FILE* arq = fopen("arquivo.dat", "rb");
	t_cadastro cadastro;
	
	printf("======== EXAME ========\n");
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			if(((cadastro.nota1 + cadastro.nota2) / 2) > 3)
			{
				if(((cadastro.nota1 + cadastro.nota2) / 2) < 7)
				{
					printf("===== ALUNO %d =====\n", position);
					printf("Numero: %d\n", cadastro.numero);
					printf("Nome: %s\n", cadastro.nome);
					printf("Curso: %s\n", cadastro.curso);
					printf("Media: %.2f\n",(cadastro.nota1 + cadastro.nota2) / 2);
				}
			}
		}
		position++;
		
	}
	fclose(arq);
}

// CONSULTAR NOMES
void consultarNomes()
{
	FILE *arq = fopen("arquivo.dat", "rb");
	t_cadastro cadastro;
	
	printf("\n");
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			printf("Nome: %s.\n", cadastro.nome);
		}
	}
	fclose(arq);
}


int main()
{
	while(num != 0)
	{
		printf("===== MENU ====\n");
		printf("(1) = Cadastro.\n");
		printf("(2) = Ler Arquivo.\n");
		printf("(3) = Alterar Nota.\n");
		printf("(4) = Alterar Curso.\n");
		printf("(5) = Excluir.\n");
		printf("(6) = Consultar Media.\n");
		printf("(7) = Consultar Aprovados.\n");
		printf("(8) = Consultar Reprovados.\n");
		printf("(9) = Consultar Exame.\n");
		printf("(10) = Consultar Nomes.\n");
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
		if(num == 3)
		{
			alterarNota();
		}
		if(num == 4)
		{
			alterarCurso();
		}
		if(num == 5)
		{
			excluirAluno();
		}
		if(num == 6)
		{
			consultaMedia();
		}
		if(num == 7)
		{
			consultarAprovado();
		}
		if(num == 8)
		{
			consultarReprovados();
		}
		if(num == 9)
		{
			exame();
		}
		if(num == 10)
		{
			consultarNomes();
		}
	}
	return 0;
}
