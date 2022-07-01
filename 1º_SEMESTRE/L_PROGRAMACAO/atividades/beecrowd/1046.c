#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int horaInicial, horaFinal, tempo;
	
	scanf("%d", &horaInicial);
	scanf("%d", &horaFinal);
	
	tempo = horaFinal - horaInicial;
	
	if(tempo > 0)
		printf("O JOGO DUROU %d HORA(S)\n", tempo);
	if(tempo == 0)
	{
		tempo = 24;
		printf("O JOGO DUROU %d HORA(S)\n", tempo);	
	}
	if(tempo < 0)
	{
		tempo = 24 + tempo;
		printf("O JOGO DUROU %d HORA(S)\n", tempo);	
	}
	
	return 0;
}
