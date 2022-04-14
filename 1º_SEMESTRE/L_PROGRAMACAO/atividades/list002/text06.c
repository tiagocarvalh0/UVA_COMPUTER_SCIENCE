/*Fac¸a um programa que recebe o codigo correspondente ao cargo de um ´
funcionario e seu sal ´ ario atual e mostre o cargo, o valor do aumento e seu ´
novo salario. Os cargos est ´ ao na tabela a seguir.
CODIGO =========== CARGO ========= PERCENTUAL
  1      /       Escriturario          50%
  2      /       Secretario            35%
  3      /       Caixa                 20%
  4      /       Gerente               10%
  5      /       Diretor         Nao tem aumento */

#include <stdio.h>

int main(){

	int cargo ;
	float  salario, aumento;

	printf("CODIGO =========== CARGO ========= PERCENTUAL\n");
  	printf("   1             Escriturario      50\n");
  	printf("   2             Secretario        35\n");
  	printf("   3             Caixa             20\n");
 	printf("   4             Gerente           10\n");
  	printf("   5             Diretor           Nao tem aumento\n");
	printf("Informe o CODIGO do seu CARGO: ");
	scanf("%d", &cargo);
	printf("Informe seu SALARIO: R$ ");
	scanf("%f", &salario);
	
	if(cargo == 1){
	aumento = salario * 0.50 ;
	salario = aumento + salario ;
	printf("Seu CARGO e Escriturario\n");
	printf("Aumento de: R$ %.2f\n", aumento);
	printf("Novo salario de: R$ %.2f\n", salario);
}
	if(cargo == 2){
	aumento = salario * 0.35 ;
	salario = aumento + salario ;
	printf("Seu CARGO e Secretario\n");
	printf("Aumento de: R$ %.2f\n", aumento);
	printf("Novo salario de: R$ %.2f\n", salario);
}
	if(cargo == 3){
	aumento = salario * 0.20 ;
	salario = aumento + salario ;
	printf("Seu CARGO e Caixa\n");
	printf("Aumento de: R$ %.2f\n", aumento);
	printf("Novo salario de: R$ %.2f\n", salario);
	
}
	if(cargo == 4){
	aumento = salario * 0.10 ;
	salario = aumento + salario ;
	printf("Seu CARGO e Gerente\n");
	printf("Aumento de: R$ %.2f\n", aumento);
	printf("Novo salario de: R$ %.2f\n", salario);
}
	if(cargo == 5){
	aumento = salario * 0 ;
	salario = aumento + salario ;
	printf("Seu CARGO e Diretor \n");
	printf("Aumento de: R$ %.2f\n", aumento);
	printf("Novo salario de: R$ %.2f\n", salario);
	printf("SEM AUMENTO PARA TI!!!\nVACILÃO\n");
	
}
}