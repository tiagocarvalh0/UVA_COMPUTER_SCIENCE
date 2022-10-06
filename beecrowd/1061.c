#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	int diaIni;
	int horaIni;
	int minIni;
	int segIni;
	
	int diaFim;
	int horaFim;
	int minFim;
	int segFim;
	
	int diaTotal;
	int horaTotal;
	int minTotal;
	int segTotal;
	
	printf("Dia ");
	scanf("%d", &diaIni);
	scanf("%d %d %d", &horaIni, &minIni, &segIni);
	
	printf("Dia ");
	scanf("%d", &diaFim);
	scanf("%d %d %d", &horaFim, &minFim, &segFim);
	
	diaTotal = diaFim - diaIni - 1;
	horaTotal = horaFim - horaIni;
	minTotal = minFim - minIni;
	segTotal = segFim - segIni;
	
	if(horaTotal < 0)
		horaTotal = 24 + horaTotal;
	if(minTotal < 0)
		minTotal = 60 + minTotal;
	if(segTotal < 0)
		segTotal = 60 + segTotal;
		
	if(horaTotal >= 24)
	{
		diaTotal++;
		printf("%d", horaTotal);
		horaTotal = horaTotal - 24;
	}
	if(minTotal >= 60)
	{
		horaTotal++;
		minTotal = minTotal - 60;
	}
	if(segTotal >= 60)
	{
		minTotal++;
		minTotal = minTotal - 60;
	}
					
	printf("%d dia(s)\n", diaTotal);
	printf("%d hora(s)\n", horaTotal);
	printf("%d minuto(s)\n", minTotal);
	printf("%d segundo(s)\n", segTotal);
	
	return 0;
}
