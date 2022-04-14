/*. Escreva um programa para calcular a reduc¸ao do tempo de vida de um fu- ˜
mante. Pergunte a quantidade de cigarros fumados por dia e quantos anos
ele ja fumou. Considere que um fumante perde 10 minutos de vida a cada ´
cigarro e calcule quantos dias de vida um fumante perdera. Exiba o total em ´
dias.*/

#include <stdio.h>

int main (){

	float c_dias, c_anos, x ;

	printf("Quantidade de cigarros por dia: ");
	scanf("%f", &c_dias);
	printf("Quantidades de anos fumando: ");
	scanf("%f", &c_anos);
	x = ((365 * c_anos) * 10) / 1440 ;
	printf("%.2f DIAS\n", x);	
}