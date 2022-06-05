#include <stdio.h>

//int tam_Char = 7;
//int tam_Idade = 5 ;


int main()
{
	/*char vet_1[tam_Char];
	int vet_Idade[tam_Idade],i , j = 0;
	
	for(i = 1; i < tam_Char; i++)
	{
		scanf("%s", &vet_1[i]);
		printf("Letra %c\n", vet_1[i]);
		if(i % 3 == 0)
		{
			printf("Informe sua Idade:\n");
			scanf("%d", &vet_Idade[j]);
			printf("Idade %d\n", vet_Idade[j]);
			j++;
		}	
	}*/
	char vet_Mat[5][3];
	int media_Idade = 0, cont = 0, soma;
	int maior_Idade ;
	int vet_Idade[6],linha, coluna, j = 0;
	
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
		printf("Informe a sua Idade:\n");
		scanf("%d", &vet_Idade[linha]);
	}
	
	for(linha = 1; linha < 6; linha++)
		printf("%d ,", vet_Idade[linha]);
		printf("\n");
	
	for(linha = 1; linha < 6; linha++)
	{
		for(coluna = 1; coluna < 4; coluna++)
		{
			printf("%c ", vet_Mat[linha][coluna]);
		}
		printf("\n");
	}
	
	for(linha = 0; linha < 6; linha++)
	{
		if((vet_Mat[linha][2] == 'c') && (vet_Mat[linha][3] == 'p'))
		{
			printf("Numero da Variavel = %d\n", vet_Idade[linha]);
			printf("Valor de Cont %d\n", cont);
			soma = soma + vet_Idade[linha];
			printf("Soma = %d\n", soma);
			cont++;
		}
		linha++;
	}

	for(linha = 1; linha < 6; linha++)
		printf("%d ,", vet_Idade[linha]);
		printf("\n");
	maior_Idade = vet_Idade[1];
	for(linha = 1; linha < 6; linha++)
		if(vet_Idade[linha] > maior_Idade)
			maior_Idade = vet_Idade[linha];
	printf("Maior Idade = %d\n", maior_Idade);
	
	media_Idade = soma / cont;
	printf("Media Idade (C)(P) = %d\n", media_Idade);
	
	
	
		

		
}
