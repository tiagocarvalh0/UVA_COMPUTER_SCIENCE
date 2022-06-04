#include <stdio.h>

float sub_rot (int n){
	float s = 1.0;
	int i, j, fat = 1;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++)
			fat *= j;
		s += (float) 1 / fat;
		fat = 1;
	}
	return s;
}

int main() {
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	printf("%f\n", sub_rot(numero));
}
