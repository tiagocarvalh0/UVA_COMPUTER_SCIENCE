#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[20];
	int anoNas;
	float salario;
	char cargo[20];
	int anoIni;
	int aposentado;
	int apto;
} t_cadastro;

// CADASTRAR FUNCIONARIO
void cadastrarFuncionario()
{
	FILE * arq = fopen("arquivo.bin", "ab");
	t_cadastro cadastro;
	
	printf("Nome: ");
	scanf(" %[^\n]", cadastro.nome);
	printf("Ano Nascimento: ");
	scanf("%d", &cadastro.anoNas);
	printf("Salario: ");
	scanf("%f", &cadastro.salario);
	printf("Cargo: ");
	scanf(" %[^\n]", cadastro.cargo);
	printf("Ano Inicial: ");
	scanf("%d", &cadastro.anoIni);
	cadastro.aposentado = 0;
	cadastro.apto = 0;
	
	fread(&cadastro, sizeof(t_cadastro), 1, arq);
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	fclose(arq);
}

// LER ARQUIVO
void lerArquivo()
{
	FILE * arq = fopen("arquivo.bin", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		printf("\n");
		printf("Nome: %s\n", cadastro.nome);
		printf("Ano Nascimento: %d\n", cadastro.anoNas);
		printf("Salario: %.2f\n", cadastro.salario);
		printf("Cargo: %s\n", cadastro.cargo);
		printf("Ano Inicial: %d\n", cadastro.anoIni);
		printf("Aposentado (%d)\n", cadastro.aposentado);
		printf("Apto (%d)\n", cadastro.apto);
		printf("\n");
	}
	
	fclose(arq);
}

// PREVISAO APOSENTADORIA
void previsaoAposentadoria()
{
	int idadeM = 65;
	int empregoM = 35;
	char cadastronome[20];
	int position = 0;
	FILE * arq = fopen("arquivo.bin", "rb+");
	t_cadastro cadastro;
	
	printf("Nome: ");
	scanf(" %[^\n]", cadastronome);
	
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(strcmp(cadastronome, cadastro.nome) == 0)
		{
			if(cadastro.aposentado == 1)
			{
				printf("O cidadão já se aposentou.\n");
					break;
			}
			
			if(cadastro.cargo[0] == 'p')
			if(cadastro.cargo[1] == 'r')
			if(cadastro.cargo[3] == 'f')
			if(cadastro.cargo[5] == 's')
			if(cadastro.cargo[6] == 's')
			{
				idadeM = 30;
				empregoM = 60;
			}
			
			idadeM = (idadeM + cadastro.anoNas) - 2022;
			empregoM = (empregoM + cadastro.anoIni) - 2022;
			
			if((idadeM <= 0) || (empregoM <= 0))
			{
				printf("O cidadão já pode se aposentar.\n");
					break;
			}
		
			if(idadeM < empregoM)
			{
				printf("Previsao %d\n", idadeM + 2022);
				printf("Falta %d\n", idadeM);
					break;
			}
			
			if(idadeM > empregoM)
			{
				printf("Previsao %d\n", empregoM + 2022);
				printf("Falta %d\n", empregoM);
					break;
			}
			
			if(idadeM == empregoM)
			{
				printf("Previsao %d\n", empregoM + 2022);
				printf("Falta %d\n", empregoM);
					break;
			}
			
			cadastro.apto = 1;
			
			fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
			fwrite(&cadastro, sizeof(t_cadastro), 1, arq);		
		}
		position++;
	}
	fclose(arq);
}

// AVISO APOSENTADORIA
void avisoAposentadoria()
{
	char cadastronome[20];
	int position = 0;
	FILE * arq = fopen("arquivo.bin", "rb+");
	t_cadastro cadastro;
	
	printf("Nome: ");
	scanf(" %[^\n]", cadastronome);
	
	while(1)
	{
		fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))	
			break;
		if(strcmp(cadastronome, cadastro.nome) == 0)
		{
			if(cadastro.aposentado == 1)
			{
				printf("Ja Aposentado (%d)\n", cadastro.aposentado);
					break;
			}
			
			if(cadastro.apto == 1)
			{
				cadastro.aposentado = 1;
				cadastro.salario = cadastro.salario * 0.80;
				fseek(arq, position * sizeof(t_cadastro), SEEK_SET);
				fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
					break;
			}
		}
		position++;	
	}
	fclose(arq);
}

int main()
{
	int num = -1;
	while(1)
	{
		printf("\n");
		printf("===== MENU =====\n");
		printf("(1) = Cadastrar.\n");
		printf("(2) = Ler Arquivo.\n");
		printf("(3) = Previsao Aposentadoria.\n");
		printf("(4) = Aviso Aposentadoria.\n");
		printf("(0) = Sair.\n");
		printf("Selecione: ");
		scanf("%d", &num);
		scanf("%*c");
		
		if(num == 1)
			cadastrarFuncionario();
		if(num == 2)	
			lerArquivo();
		if(num == 3)
			previsaoAposentadoria();
		if(num == 4)
			avisoAposentadoria();
		if(num == 0)
			break;
			
	}

	return 0;
}
