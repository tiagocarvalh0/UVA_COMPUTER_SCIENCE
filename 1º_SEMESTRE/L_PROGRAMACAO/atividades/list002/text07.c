/*Escreva um programa para aprovar o emprestimo banc ´ ario para compra de ´
uma casa. O programa deve perguntar o valor da casa a comprar, o salario ´
do comprador e a quantidade de anos a pagar. O valor da prestac¸ao mensal ˜
nao pode ser superior a 30% do sal ˜ ario. Calcule o valor da prestac¸ ´ ao como ˜
sendo o valor da casa a comprar dividido pelo numero de meses a pagar*/

#include <stdio.h>

int main(){

	int anos, excedente, excedente_1, mes ;
	float valor_casa, salario, valor_prestacao ;
	
	printf("Informe o valor da casa : R$ ");
	scanf("%f", &valor_casa);
	printf("Informe seu salario: R$ ");
	scanf("%f", &salario);
	printf("Quantidade de anos a pagar: ");
	scanf("%d", &anos);
	printf("Meses excedentes:\n(1) = SIM\n(0) = NÃO\n");
	scanf("%d", &excedente);
	
	if(excedente == 1){
	printf("Quantos meses: ");
	scanf("%d", &excedente_1);
	
	}if(excedente == 0);{
	excedente_1 = 0 ;
	
}
	
	valor_prestacao = valor_casa / ((anos * 12) + excedente_1 ) ;
	salario = salario * 0.30 ;
	
	if(salario >= valor_prestacao){
	printf("EMPRESTIMO APROVADO\n");
}
	if(salario < valor_prestacao){
	printf("EMPRESTIMO RECUSADO\n");
}

	
}