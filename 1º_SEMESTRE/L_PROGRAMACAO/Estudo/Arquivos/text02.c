#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	char nomeProduto[20];
	int quantProduto;
	float precoProduto;
} t_produto;

// CADASTRAR PRODUTO
void cadastrarProduto()
{
	int position = 0;
	char produtonomeProduto[20];
	FILE * arq = fopen("bodega.bin", "ab+");
	t_produto produto;
	
	printf("Nome: ");
	scanf(" %s", produtonomeProduto);
	while(1)
	{
		fseek(arq, position * sizeof(t_produto), SEEK_SET);
		fread(&produto, sizeof(t_produto), 1, arq);
		if(feof(arq))
			break;
		if(strcmp(produtonomeProduto, produto.nomeProduto) == 0)
		{
			printf("ERRO: NOME INVALIDO!!!\n");
			printf("Nome: ");
			scanf(" %s", produtonomeProduto);
		}
		position++;
	}
	strcpy(produto.nomeProduto, produtonomeProduto);
	printf("Quantidade: ");
	scanf("%d", &produto.quantProduto);
	printf("Valor: R$ ");
	scanf("%f", &produto.precoProduto);
	
	fread(&produto, sizeof(t_produto), 1, arq);
	fwrite(&produto, sizeof(t_produto), 1, arq);
	fclose(arq);
}

// LER ARQUIVO
void lerArquivo()
{
	printf("===\n");
	FILE *arq = fopen("bodega.bin", "rb");
	t_produto produto;
	
	while(1)
	{
		fread(&produto, sizeof(t_produto), 1, arq);
		if(feof(arq))
			break;
		printf("\n");
		printf("Nome: %s\n", produto.nomeProduto);
		printf("Quantidade: %d\n", produto.quantProduto);
		printf("Valor: R$ %.1f\n", produto.precoProduto);
	}
	fclose(arq);
}

// VENDA PRODUTO
void vendaProduto()
{
	int quantidade = 0;
	int position = 0;
	char produtonomeProduto[20];
	FILE * arq = fopen("bodega.bin", "rb+");
	t_produto produto;
	
	printf("Nome: ");
	scanf(" %[^\n]", produtonomeProduto);
	while(1)
	{
		fseek(arq, position * sizeof(t_produto), SEEK_SET);
		fread(&produto, sizeof(t_produto), 1, arq);
		if(feof(arq))
			break;
		if(strcmp(produtonomeProduto, produto.nomeProduto) == 0)
		{
			printf("Quantidade: ");
			scanf("%d", &quantidade);
			
			if(produto.quantProduto - quantidade >= 0)
			{
				printf("Valor R$ %.1f\n", quantidade * produto.precoProduto);
				produto.quantProduto = produto.quantProduto - quantidade;
				fseek(arq, position * sizeof(t_produto), SEEK_SET);
				fwrite(&produto, sizeof(t_produto), 1, arq);
					break;
			}
		}			
		position++;	
	}
	fclose(arq);
}

// ABASTECER ESTOQUE
void abastecerEstoque()
/*{
	int soma = 0;
	int position = 0;
	char ppr[20];
	FILE * arq = fopen("badega.bin", "rb+");
	t_produto produto;
	
	printf("Nome: ");
	scanf(" %s", ppr);
	printf("!!!!\n");
	while(1)
	{
		fseek(arq, position * sizeof(t_produto), SEEK_SET);
		fread(&produto, sizeof(t_produto), 1, arq);
		if(feof(arq))
			break;
		if(strcmp(ppr, produto.nomeProduto) == 0)
		{
			printf("Quantidade: ");
			scanf("%d", &soma);
			produto.quantProduto += soma;
			fseek(arq, position * sizeof(t_produto), SEEK_SET);
			fwrite(&produto, sizeof(t_produto), 1, arq);
			break;
		}
		position++;
		printf("%d", position);
	}
	fclose(arq);
}
*/
{
	int quantidade = 0;
	int position = 0;
	char produtonomeProduto[20];
	FILE * arq = fopen("bodega.bin", "rb+");
	t_produto produto;
	
	printf("Nome: ");
	scanf(" %[^\n]", produtonomeProduto);
	while(1)
	{
		fseek(arq, position * sizeof(t_produto), SEEK_SET);
		fread(&produto, sizeof(t_produto), 1, arq);
		if(feof(arq))
			break;
		if(strcmp(produtonomeProduto, produto.nomeProduto) == 0)
		{
			printf("Quantidade: ");
			scanf("%d", &quantidade);
			produto.quantProduto = produto.quantProduto + quantidade;
			fseek(arq, position * sizeof(t_produto), SEEK_SET);
			fwrite(&produto, sizeof(t_produto), 1, arq);
				break;
		}			
		position++;	
	}
	fclose(arq);
}

// ATUALIZAR PRECO
void atualizarPreco()
{
	int position = 0;
	char produtonomeProduto[20];
	FILE *arq = fopen("bodega.bin", "rb+");
	t_produto produto;
	
	printf("Nome: ");
	scanf(" %s", produtonomeProduto);
	while(1)
	{
		fseek(arq, position * sizeof(t_produto), SEEK_SET);
		fread(&produto, sizeof(t_produto), 1, arq);
		if(feof(arq))
			break;
		if(strcmp(produtonomeProduto, produto.nomeProduto) == 0)
		{
			printf("Valor: R$ ");
			scanf("%f", &produto.precoProduto);
			fseek(arq, position * sizeof(t_produto), SEEK_SET);
			fwrite(&produto, sizeof(t_produto), 1, arq);
			break;
		}
		position++;
	}
	fclose(arq);
}

// LISTAR PRODUTOS
void listarProdutos()
{
	FILE * arq = fopen("bodega.bin", "rb");
	t_produto produto;
	while(1)
	{
		fread(&produto, sizeof(t_produto), 1, arq);
		if(feof(arq))
			break;
		if(produto.quantProduto < 10)
		{
			printf("Nome: %s\n", produto.nomeProduto);
			printf("Quantidade: %d\n", produto.quantProduto);
			printf("Compra: %d", 10 - produto.quantProduto);
		}
	}
	fclose(arq);
}
int main()
{
	int num = -1;
	while(num != 0)
	{
		printf("\n");
		printf("===== MENU =====\n");
		printf("(1) = Cadastrar Produto.\n");
		printf("(2) = Vender Produto.\n");
		printf("(3) = Abastecer Estoque.\n");
		printf("(4) = Mudar Preco.\n");
		printf("(5) = Listar Produtos.\n");
		printf("(6) = Ler Arquivo.\n");
		printf("(0) = Sair.\n");
		printf("Selecionar: ");
		scanf("%d", &num);
		scanf("%*c");
		
		if(num == 1)
			cadastrarProduto();
		if(num == 2)
			vendaProduto();
		if(num == 3)
			abastecerEstoque();
		if(num == 4)
			atualizarPreco();
		if(num == 5)
			listarProdutos();
		if(num == 6)
			lerArquivo();
			
	}

	return 0;
}
