#include <stdio.h>

float nota_Media ;

int main()
{
	void media(void);
	
	media();

	printf("Media = %.1f\n", nota_Media);
}
void media(void)
{
	float Nota_1, Nota_2, Nota_3, Media;
	char tipo_Media[1];
	
	printf("Primeira Nota: ");
	scanf("%f", &Nota_1);
	printf("Segunda Nota: ");
	scanf("%f", &Nota_2);
	printf("Terceira Nota: ");
	scanf("%f", &Nota_3);
	printf("(A) = Media Aritmetica\n(P) = Media Ponderada\n");
	scanf("%s", tipo_Media);
	
	if ((tipo_Media[0] == 'A') || (tipo_Media[0] == 'a'))
	{
		nota_Media = (Nota_1 + Nota_2 + Nota_3) / 3;
	}
	else
	{
		nota_Media = ((Nota_1 * 5) + (Nota_2 * 3) + (Nota_3 * 2)) / 10 ;
	}
}
