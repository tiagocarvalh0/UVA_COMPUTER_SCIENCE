#include <stdio.h>

int TAM = 5;

int main()
{
	void sun_Fun(void);
	
	sun_Fun();

	return 0;	
}
void sun_Fun(void)
{
	float vet[TAM], Maior, Menor;
	int i;
	
	Maior = vet[0];
	Menor = vet[0];
	
	for(i = 0; i < TAM; i++)
	{
		scanf("%f", &vet[i]);
		if(vet[i] > Maior)
			Maior = vet[i];
		if(vet[i] < Menor)
			Menor = vet[i];
	}
	
	printf("Maior = %.1f\n", Maior);
	printf("Menor = %.1f\n", Menor);

}
