/*Num determinado Estado, para transferencias de ve ˆ ´iculos, o DETRAN cobra uma taxa de 1% para carros fabricados antes de 1990 e uma taxa de
1.5% para os fabricados de 1990 em diante, taxa esta incidindo sobre o valor de tabela do carro. O algoritmo abaixo le o ano e o prec¸o do carro e a ˆ
seguir calcula e imprime imposto a ser pago.*/

#include <stdio.h>

int main ()
{

	int ano ;
	double preco ;
	
	printf("Ano: \n");
	scanf("%d", &ano);
	printf("Preço: \n");
	scanf("%lf", &preco);
		
	if (ano <= 0)
	{
		printf("Data invalida\n");
	}
	
	else
	{	
	
	if (ano < 1990)
	{
		preco = preco * 0.01 ;
	}
	
	if (ano >= 1990)
	{
		preco = preco * 0.015 ;
	}
	
	printf("R$: %.2lf\n", preco);
	
	}
}
