/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).*/

#include <stdio.h>
 
int main() {
 
	int a, b, c, d, DIFERENCA ;
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	scanf("%i", &d);
	DIFERENCA = ((a * b) - (c * d));
	printf("DIFERENCA = %i\n", DIFERENCA);
    return 0;
}