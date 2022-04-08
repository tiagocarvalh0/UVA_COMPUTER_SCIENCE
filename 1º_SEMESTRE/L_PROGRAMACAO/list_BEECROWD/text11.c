/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.*/

#include <stdio.h>
 
int main() {
 
	int cod_p1, num_p1, cod_p2, num_p2  ;
	
	double val_p1, val_p2, val_p ;

	scanf("%i", &cod_p1); scanf("%i", &num_p1); scanf("%lf", &val_p1);
	scanf("%i", &cod_p2); scanf("%i", &num_p2); scanf("%lf", &val_p2);
	val_p = num_p1 * val_p1 + num_p2 * val_p2 ;
	printf("VALOR A PAGAR: R$ %.2lf\n", val_p);
	
    return 0;
}