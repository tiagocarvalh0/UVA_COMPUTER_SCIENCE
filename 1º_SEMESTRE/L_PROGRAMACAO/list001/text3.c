#include <stdio.h>

int main (){
	int dias, horas, minutos, segundos, n1, n2, n3, total ;
	printf("Digite a quantidade de DIAS: ");
	scanf("%d", &dias);
	printf("Digite a quantidade de HORAS: ");
	scanf("%d", &horas);
	printf("Digite a quantidade de MINUTOS: ");
	scanf("%d", &minutos);
	printf("Digite a quantidade de SEGUNDOS: ");
	scanf("%d", &segundos);
	n1 = dias * 86400 ;
	n2 = horas * 3600 ;
	n3 = minutos * 60 ;
	total = n1 + n2 + n3 + segundos ;
	printf("%d SEGUNDOS\n", total);	
}