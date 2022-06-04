#include <stdio.h>

int main()
{
	void teste(void);
	
	teste();
	
	return 0;
}
void teste(void)
{
	int tempo, horas, minutos, segundos;
	
	printf("Digite os segundos:\n");
	scanf("%d", &tempo);
	
	horas = tempo / 3600;
	minutos = (tempo - (horas * 3600)) / 60;
	segundos = tempo - ((horas * 3600) + (minutos * 60));
	
	return printf("%d:%d:%d", horas, minutos, segundos);
}
