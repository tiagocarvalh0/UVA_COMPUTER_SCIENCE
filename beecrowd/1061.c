#include <stdio.h>

int converterTempo();

int main()
{
	int vetor1[4], tempo, resto;
	int vetor2[4];

	printf("Dia ");
	scanf("%d", &vetor1[0]);
	scanf("%d : %d : %d", &vetor1[1], &vetor1[2], &vetor1[3]);
	printf("Dia ");
	scanf("%d", &vetor2[0]);
	scanf("%d : %d : %d", &vetor2[1], &vetor2[2], &vetor2[3]);

	resto = converterTempo(vetor1, vetor2, tempo);

	vetor1[0] = resto / 86400;
	resto = resto - (vetor1[0] * 86400);
	vetor1[1] = resto / 3600;
	resto = resto - (vetor1[1] * 3600);
	vetor1[2] = resto / 60;
	resto = resto - (vetor1[2] * 60);
	vetor1[3] = resto;

	printf("%d dia(s)\n", vetor1[0]);
	printf("%d hora(s)\n", vetor1[1]);
	printf("%d minuto(s)\n", vetor1[2]);
	printf("%d segundo(s)\n", vetor1[3]);

	return 0;
}

int converterTempo(int vetor1[], int vetor2[], int tempo)
{	
	vetor1[0] *= 86400;
	vetor1[1] *= 3600;
	vetor1[2] *= 60;
	
	vetor2[0] *= 86400;
	vetor2[1] *= 3600;
	vetor2[2] *= 60;

	int tempo1 = vetor1[0] + vetor1[1] + vetor1[2] + vetor1[3] ;
	int tempo2 = vetor2[0] + vetor2[1] + vetor2[2] + vetor2[3] ;

	tempo = tempo2 - tempo1;

	return tempo;
}
