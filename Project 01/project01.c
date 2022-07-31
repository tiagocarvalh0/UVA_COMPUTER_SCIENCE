#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

	int maior_numero;
	int dia_hoje;
	int mes_hoje;
	int num_bilhete;
	int dia_aposta;
	int mes_aposta;
	int ano_aposta;
	int hora_aposta;
	int min_aposta;
	int local_apos;

// DATA HOJE
void data_atual()
{
	time_t data_tempo;
	
	time(&data_tempo);
	
	struct tm *tempo = localtime(&data_tempo);
	struct tm *data = localtime(&data_tempo);

	dia_hoje = data->tm_mday;
	mes_hoje = data->tm_mon + 1;
}

// DATA_APOSTA
void data()
{
	time_t data_tempo;
	
	time(&data_tempo);
	
	struct tm *tempo = localtime(&data_tempo);
	struct tm *data = localtime(&data_tempo);
	
	dia_aposta = data->tm_mday;
	mes_aposta = data->tm_mon + 1;
	ano_aposta = data->tm_year + 1900;
	hora_aposta = tempo->tm_hour;
	min_aposta = tempo->tm_min;		
}

typedef struct
{
	int num_bilhete1;
	int dia_aposta1;
	int mes_aposta1;
	int ano_aposta1;
	int hora_aposta1;
	int min_aposta1;
	int local_aposta;
	int animal_aposta;
	float valor_aposta;
	int horario_aposta;
	int ganhador_aposta;
	int valido;
	
}t_cadastro;

// CADASTRAR APOSTA
void cadastro()
{
	FILE * arq = fopen("arquivo.bin", "ab+");
	t_cadastro cadastro;
	
	cadastro.num_bilhete1 = maior_numero;
	cadastro.dia_aposta1 = dia_aposta;
	cadastro.mes_aposta1 = mes_aposta;
	cadastro.ano_aposta1 = ano_aposta;
	cadastro.hora_aposta1 = hora_aposta;
	cadastro.min_aposta1 = min_aposta;
	
	printf("\n");
	printf("================\n");
	printf("BILHETE: %d\n", cadastro.num_bilhete1);
	printf("DATA: %d/%d/%d\n", cadastro.dia_aposta1, cadastro.mes_aposta1, cadastro.ano_aposta1);
	printf("EMITIDO: %d:%d\n", cadastro.hora_aposta1, cadastro.min_aposta1);
	printf("(1) = RJ.\n");
	printf("(2) = CE.\n");
	printf("LOCAL: ");
	scanf("%d", &local_apos);
	if(local_apos == 1)
	{
		printf("========\n");
		printf("(1) = 11:00\n");
		printf("(2) = 14:20\n");
		printf("(3) = 16:00\n");
		printf("(4) = 16:20\n");
		printf("(5) = 18:20\n");
		printf("(6) = 21:20\n");
		printf("========\n");
	}
	if(local_apos == 2)
	{
		printf("========\n");
		printf("(1) = 11:00\n");
		printf("(2) = 14:00\n");
		printf("(3) = 19:00\n");
		printf("========\n");
	}
	cadastro.local_aposta = local_apos;
	printf("HORARIO: ");
	scanf("%d", &cadastro.horario_aposta);
	printf("Valor:R$ ");
	scanf("%f", &cadastro.valor_aposta);
	printf("ANIMAL: ");	
	scanf("%d", &cadastro.animal_aposta);
	printf("================\n");

	cadastro.valido = 1;
	cadastro.ganhador_aposta = 1;
	
	fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
	printf("salvo\n");
	fclose(arq);
}

// APOSTA ANTIGA
void aposta_antiga()
{
	int position = 0;
	FILE *arq = fopen("arquivo.bin", "rb+");
	t_cadastro cadastro;

	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			if(cadastro.mes_aposta1 != mes_hoje)
			{
				cadastro.valido = -1;
				fseek(arq, position *sizeof(t_cadastro), SEEK_SET);
				fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
				printf("Apostas Arquivadas.\n");

			}
			if(cadastro.mes_aposta1 == mes_hoje)
				if(cadastro.dia_aposta1 != dia_hoje)
				{
					cadastro.valido = -1;
					fseek(arq, position *sizeof(t_cadastro), SEEK_SET);
					fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
					printf("Apostas Arquivadas.\n");		
				}
		}
		position++;
	}
	fclose(arq);
}

// MAIOR NUMERO
void maior_num()
{
	FILE * arq = fopen("arquivo.bin", "rb");
	t_cadastro cadastro;
	
	maior_numero = cadastro.num_bilhete1;
	
	while(!feof(arq))
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(maior_numero <= cadastro.num_bilhete1)
		{
			maior_numero = cadastro.num_bilhete1;
		}
	}
	
	maior_numero += 1;
	printf("NUM = %d\n",maior_numero);
	
	fclose(arq);

}

// MOSTRAR APOSTAS
void mostrar_aposta()
{
	FILE * arq = fopen("arquivo.bin", "rb");
	t_cadastro cadastro;
	
	while(!feof(arq))
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == 1)
		{
			printf("================\n");
			printf("BILHETE: %d\n", cadastro.num_bilhete1);
			printf("DATA: %d/%d/%d\n", cadastro.dia_aposta1, cadastro.mes_aposta1, cadastro.ano_aposta1);
			printf("EMITIDO: %d:%d\n", cadastro.hora_aposta1, cadastro.min_aposta1);
			if(cadastro.local_aposta == 1)
			{
				printf("LOCAL: RJ\n");
				if(cadastro.horario_aposta == 1)
					printf("HORARIO: 11:00\n");
				if(cadastro.horario_aposta == 2)
					printf("HORARIO: 14:20\n");
				if(cadastro.horario_aposta == 3)	
					printf("HORARIO: 16:00\n");
				if(cadastro.horario_aposta == 4)
					printf("HORARIO: 16:20\n");
				if(cadastro.horario_aposta == 5)
					printf("HORARIO: 18:20\n");
				if(cadastro.horario_aposta == 6)
					printf("HORARIO: 21:20\n");
			}
			if(cadastro.local_aposta == 2)
			{
				printf("LOCAL: CE\n");
				if(cadastro.horario_aposta == 1)
					printf("HORARIO: 11:00\n");
				if(cadastro.horario_aposta == 2)
					printf("HORARIO: 14:00\n");
				if(cadastro.horario_aposta == 3)	
					printf("HORARIO: 19:00\n");
			}
				
			printf("Valor: R$ %.2f\n", cadastro.valor_aposta);
			printf("ANIMAL: %d\n", cadastro.animal_aposta);
			printf("================\n\n");
		}
	}
	
	fclose(arq);
}
// MOSTRAR APOSTA ANTIGA
void mostra_aposta_antiga()
{
	FILE * arq = fopen("arquivo.bin", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.valido == -1)
		{
			printf("================\n");
			printf("BILHETE: %d\n", cadastro.num_bilhete1);
			printf("DATA: %d/%d/%d\n", cadastro.dia_aposta1, cadastro.mes_aposta1, cadastro.ano_aposta1);
			printf("EMITIDO: %d:%d\n", cadastro.hora_aposta1, cadastro.min_aposta1);
			if(cadastro.local_aposta == 1)
				printf("LOCAL: RJ\n");
			if(cadastro.local_aposta == 2)
				printf("LOCAL: CE\n");
			printf("Valor: R$ %.2f\n", cadastro.valor_aposta);
			printf("ANIMAL: %d\n", cadastro.animal_aposta);
			printf("================\n\n");
		}
	}
	fclose(arq);
}

// MOSTRAR APOSTA GANHADORA
void mostra_aposta_ganhadora()
{
	FILE * arq = fopen("arquivo.bin", "rb");
	t_cadastro cadastro;
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(cadastro.ganhador_aposta == 0)
		{
			printf("================\n");
			printf("BILHETE: %d\n", cadastro.num_bilhete1);
			printf("DATA: %d/%d/%d\n", cadastro.dia_aposta1, cadastro.mes_aposta1, cadastro.ano_aposta1);
			printf("EMITIDO: %d:%d\n", cadastro.hora_aposta1, cadastro.min_aposta1);
			if(cadastro.local_aposta == 1)
				printf("LOCAL: RJ\n");
			if(cadastro.local_aposta == 2)
				printf("LOCAL: CE\n");
			printf("Valor: R$ %.2f\n", cadastro.valor_aposta);
			printf("ANIMAL: %d\n", cadastro.animal_aposta);
			printf("================\n\n");
		}
	}
	fclose(arq);
}


// EXCLUIR APOSTA
void excluir_aposta()
{
	int num, position = 0;
	FILE * arq = fopen("arquivo.bin", "rb+");
	t_cadastro cadastro;
	
	printf("BILHETE: ");
	scanf("%d", &num);
	
	while(1)
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(feof(arq))
			break;
		if(num == cadastro.num_bilhete1)
			if(cadastro.valido == 1)
			{
				cadastro.valido = 0;
				fseek(arq, position* sizeof(t_cadastro), SEEK_SET);
				fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
				printf("APOSTA EXCLUIDA!!!\n");
					break;
			}
		position++;
	}
	fclose(arq);
}

// GANHADOR
void ganhador_aposta()
{
	int local, horario, animal, position = 0 ;
	FILE *arq = fopen("arquivo.bin", "rb+");
	t_cadastro cadastro;
	
	printf("\n");
	printf("(1) = RJ.\n");
	printf("(2) = CE.\n");
	printf("LOCAL: ");
	scanf("%d", &local);
	
	if(local == 1)
	{
		printf("\n");			
		printf("========\n");
		printf("(1) = 11:00\n");
		printf("(2) = 14:20\n");
		printf("(3) = 16:00\n");
		printf("(4) = 16:20\n");
		printf("(5) = 18:20\n");
		printf("(6) = 21:20\n");
		printf("========\n");
		printf("HORARIO: ");
		scanf("%d", &horario);
	}
	if(local == 2)
	{
		printf("\n");
		printf("========\n");
		printf("(1) = 11:00\n");
		printf("(2) = 14:00\n");
		printf("(3) = 19:00\n");
		printf("========\n");
		printf("HORARIO: ");
		scanf("%d", &horario);
	}
	
	printf("ANIMAL: ");
	scanf("%d", &animal);
	
	while(!feof(arq))
	{
		fread(&cadastro, sizeof(t_cadastro), 1, arq);
		if(cadastro.local_aposta == local)
			if(cadastro.horario_aposta == horario)
				if(cadastro.animal_aposta == animal)
				{
					cadastro.ganhador_aposta = 0;
					fseek(arq, position *sizeof(t_cadastro), SEEK_SET);
					fwrite(&cadastro, sizeof(t_cadastro), 1, arq);
					printf("(%d) APOSTA GANHADORA!!!\n", cadastro.ganhador_aposta);
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
		data_atual();
		maior_num();
		printf("===== MENU =====\n");
		printf("(1) = Fazer Aposta.\n");
		printf("(2) = Mostrar Aposta.\n");
		printf("(3) = Informa Ganhador.\n");
		printf("(4) = Mostrar Aposta Ganadoras.\n");
		printf("(5) = Excluir Aposta.\n");
		printf("(6) = Mostrar Apostas Antigas.\n");
		printf("(0) = Sair.\n");
		printf("Selecione: ");
		scanf("%d", &num);
		scanf("%*c");
		
		if(num == 1)
		{
			data();
			cadastro();
		}
		
		if(num == 2)
			mostrar_aposta();
		
		if(num == 3)
			ganhador_aposta();
		
		if(num == 4)
			mostra_aposta_ganhadora();
		
		if(num == 5)
			excluir_aposta();
		
		if(num == 6)
			mostra_aposta_antiga();	
	
		if(num == 0)
			break;
	
		aposta_antiga();
	
	}

	return 0;
}
