/*Escreva um programa que calcule o prec¸o a pagar pelo fornecimento de
energia eletrica. Pergunte a quantidade de kWh consumida e o tipo de ´
instalac¸ao: R para resid ˜ encia, I para ind ˆ ustrias e C para com ´ ercio. Calcule ´
o prec¸o a pagar de acordo com a tabela a seguir:

Preço por tipo e faixa de consumo

Tipo                      Faixa (kWh)                        Preço
===================================================================
Residencial                Ate 500                          R$ 0,40
                           Acima de 500                     R$ 0,65
===================================================================
Comercial                  Ate 1000                         R$ 0,55
                           Acima de 1000                    R$ 0,60
===================================================================
Industrial                 Ate 5000                         R$ 0,55
                           Acima de 5000                    R$ 0,60
===================================================================
*/

#include <stdio.h>

int main(){

	char letra ;
	float kwh, valor ;

	printf("Preço por tipo e faixa de consumo\n");

printf("Tipo                      Faixa (kWh)                        Preço\n");
printf("===================================================================\n");
printf("Residencial                Ate 500                          R$ 0,40\n");
printf("                           Acima de 500                     R$ 0,65\n");
printf("===================================================================\n");
printf("Comercial                  Ate 1000                         R$ 0,55\n");
printf("                           Acima de 1000                    R$ 0,60\n");
printf("===================================================================\n");
printf("Industrial                 Ate 5000                         R$ 0,55\n");
printf("                           Acima de 5000                    R$ 0,60\n");
printf("===================================================================\n");
	printf("Quantidade de kWh consumida: ");
	scanf("%f", &kwh);
	printf("Tipo de instalação: \n");
	printf("(R) = Residencia\n(C) = Comercio\n(I) = Industrias \n");
	scanf("%s", &letra);

	if(letra == 'r'){

	if(kwh <= 500){
	valor = kwh * 0.40;
	printf("Valor a ser pago: R$ %.2f\n", valor);
}	
	if(kwh > 500){
	valor = kwh * 0.65;
	printf("Valor a ser pago: R$ %.2f\n", valor);	
}	
}
	if(letra == 'c'){
	
	if(kwh <= 1000){
	valor = kwh * 0.55;
	printf("Valor a ser pago: R$ %.2f\n", valor);
}
	if(kwh > 1000){
	valor = kwh * 0.60;
	printf("Valor a ser pago: R$ %.2f\n", valor);
}
}
	if(letra == 'i'){
	
	if(kwh <= 5000 ){
	valor = kwh * 0.55;
	printf("Valor a ser pago: R$ %.2f\n", valor);
	
}
	if(kwh > 5000){
	valor = kwh * 0.60;
	printf("Valor a ser pago: R$ %.2f\n", valor);
}
}
	
		


	

	
}
