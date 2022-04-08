#include <stdio.h>
 int main (){
	float valor_total, desconto, valor_desconto, total;
	printf("Valor da mercadoria: R$ ");
	scanf("%f", &valor_total);
	printf("Porcentagem de desconto: ");
	scanf("%f", &desconto);
	valor_desconto = valor_total * ( desconto / 100);
	total = valor_total - (valor_total * ( desconto / 100));
	printf("Desconto de: R$ %.2f\n", valor_desconto);
	printf("Valor a ser pago: R$ %.2f\n", total);
}