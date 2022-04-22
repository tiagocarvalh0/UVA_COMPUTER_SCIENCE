#include <stdio.h>

int main()
{
	int segundos, min, horas ;
	
	scanf("%i", &segundos);
	horas = segundos / 3600 ;
	segundos = segundos - (horas * 3600);
	min = segundos / 60 ;
	segundos = segundos - (min * 60);
	printf("%i:%i:%i\n",horas, min, segundos);
	
}
