#include <stdio.h>

int main (){
	int n1, n2, n3;
	printf("Digite um numero: ");
	scanf("%i", &n1);
	printf("Digite outro numero: ");
	scanf("%i", &n2);
	n3 = n1 + n2 ;
	printf("A soma entre %d e %d e igual a %d\n", n1, n2, n3);
}