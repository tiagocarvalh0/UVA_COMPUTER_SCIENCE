/*Construa um algoritmo que dado a altura de uma pessoa dizer se esta pessoa
e baixa, normal ou alta. Veja a tabela a seguir.

FAIXA            Condicao
=========================================
BAIXA            menor que 1,50 metros
=========================================
NORMAL           entre 1,50 e 1,80 metros
=========================================
ALTA             acima de 1,80 metros
=========================================
*/

#include <stdio.h>

int main(){

	float altura ;	

	printf("FAIXA            Condicao \n");
	printf("=========================================\n");
	printf("BAIXA            menor que 1,50 metros\n");
	printf("=========================================\n");
	printf("NORMAL           entre 1,50 e 1,80 metros\n");
	printf("=========================================\n");
	printf("ALTA             acima de 1,80 metros\n");
	printf("=========================================\n");
	printf("Informe sua altura em METRO: ");
	scanf("%f", &altura);

	if(altura < 1.50){
	printf("BAIXA\n");
}

	if((altura >= 1.5) && (altura < 1.80)){
	printf("NORMAL\n");
}

	if(altura > 1.80){
	printf("ALTA\n");
}
}