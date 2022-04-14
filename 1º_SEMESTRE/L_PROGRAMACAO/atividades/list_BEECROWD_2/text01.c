/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.*/

#include <stdio.h>
 
int main() {
 
   	int codigo, quantidade ;
	float valor, cq, xs, xb, tr, re ;
	
	scanf("%i %i", &codigo, &quantidade);
	cq = 4.0 ;
	xs = 4.5 ;
	xb = 5.0 ;
	tr = 2.0 ;
	re = 1.5 ;
	
	if(codigo == 1){
	valor = quantidade * cq ;
	printf("Total: R$ %.2f\n", valor);	
}
	if(codigo == 2){
	valor = quantidade * xs ;
	printf("Total: R$ %.2f\n", valor);	
}
	if(codigo == 3){
	valor = quantidade * xb ;
	printf("Total: R$ %.2f\n", valor);
}
	if(codigo == 4){
	valor = quantidade * tr ;
	printf("Total: R$ %.2f\n", valor);
}
	if(codigo == 5){
	valor = quantidade * re ;
	printf("Total: R$ %.2f\n", valor);
}

	
    return 0;
}