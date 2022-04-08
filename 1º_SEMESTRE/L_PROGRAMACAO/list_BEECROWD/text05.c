/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.*/

#include <stdio.h>
 
int main() {
 
	int a, b, PROD ;
	scanf("%d", &a);
	scanf("%d", &b);
	PROD = a * b ;
	printf("PROD = %d\n", PROD);
    return 0;
}