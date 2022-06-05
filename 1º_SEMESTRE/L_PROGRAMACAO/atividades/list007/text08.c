#include <stdio.h>

int main()
{
	void sub_Fun(void);
	
	sub_Fun();
			
}
void sub_Fun(void)
{
	char vet_Mat[5][3];
	int media_Idade = 0, media_Idade_1 = 0, cont = 0, cont_1 = 0, soma = 0, soma_1 = 0;
	int maior_Idade ;
	int vet_Idade[6],linha, coluna, j = 0;
	
	//Matriz CHAR para CARACTERISTICAS
	for(linha = 1; linha < 6; linha++)
	{
		printf("========== Cadastro %d ==========\n", linha);
		for(coluna = 1; coluna < 4; coluna++)
		{
			if(coluna == 1)
			printf("Informe o Sexo:\n(M) =  Musculino\n(F) = Feminino\n");
			if(coluna == 2)
			printf("Informe a Cor dos Olho:\n(A) = Azul\n(C) = Castanho\n");
			if(coluna == 3)
			printf("Informe a Cor dos Cabelos:\n(L) = Louros\n(P) = Pretos\n(C) = Castanhos\n");
			scanf("%s", &vet_Mat[linha][coluna]);
			
		}
		//Variavel de IDADE
		printf("Informe a sua Idade:\n");
		scanf("%d", &vet_Idade[linha]);
		printf("\n");
	}
	
	//Imprimindo Matriz
	printf("============ MATRIZ ============\n");
	for(linha = 1; linha < 6; linha++)
	{
		for(coluna = 1; coluna < 4; coluna++)
		{
			printf("%c ", vet_Mat[linha][coluna]);
		}
		printf("%d", vet_Idade[linha]);
		printf("\n");
	}
	printf("=================================\n");
	printf("\n");
	
	// Media de IDADE com pessoas (C)(P)
	for(linha = 1; linha < 6; linha++)
	{
		if((vet_Mat[linha][2] == 'c' || vet_Mat[linha][2] == 'C') && (vet_Mat[linha][3] == 'p' || vet_Mat[linha][3] == 'P'))
		{
			printf("Numero da Variavel = %d\n", vet_Idade[linha]);
			soma = soma + vet_Idade[linha];
			cont++;
		}
	}
	media_Idade = soma / cont;
	
	//Maior Idade
	maior_Idade = vet_Idade[1];
	for(linha = 1; linha < 6; linha++)
		if(vet_Idade[linha] > maior_Idade)
			maior_Idade = vet_Idade[linha];
			
	/*// Media de IDADE com pessoas (A)(L)
	for(linha = 1; linha < 6; linha++)
	{
		if((vet_Mat[linha][1] == 'f' || vet_Mat[linha][1] == 'F') && (vet_Mat[linha][2] == 'a' || vet_Mat[linha][2] == 'A') && (vet_Mat[linha][3] == 'l' || vet_Mat[linha][3] == 'L'))
		{
			if((vet_Idade[linha] >= 18) && (vet_Idade[linha] <= 35))
			{
			printf("Numero da Variavel = %d\n", vet_Idade[linha]);
			soma_1 = soma_1 + vet_Idade[linha];
			cont_1++;
			}
		}
	}
	media_Idade_1 = soma_1 / cont_1;*/				
	
	//Imprimindo SOMA e DIVISOR
	printf("Soma = %d\n", soma);
	printf("Valor do DIVISOR = %d\n", cont);
	printf("\n");
	
	//Imprimindo media IDADE (C)(P)
	printf("Media Idade (C)(P) = %d\n", media_Idade);

	//Imprimindo MAIOR IDADE
	printf("Maior Idade = %d\n", maior_Idade);
	printf("\n");
	
	//Imprimindo SOMA e DIVISOR
	printf("Soma = %d\n", soma_1);
	printf("Valor do DIVISOR = %d\n", cont_1);
	printf("\n");
	
	//Imprimindo media IDADE (A)(L)
	//printf("Media Idade (A)(L) = %d\n", media_Idade_1);

}
