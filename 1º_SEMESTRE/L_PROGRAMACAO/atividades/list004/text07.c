#include <stdio.h>

int main ()
{
	
	int num_parti, sexo, cont = 1 ;
	float altura ;
	
	printf("Numero de participantes:\n");
	scanf("%d", &num_parti);

	while(cont <= num_parti)
	{
		printf("Sexo:\n(1) = Masculino\n(2) = Feminino\n");
		scanf("%d", &sexo);
		printf("Altura:\n");
		scanf("%f", &altura);
		printf("%d\n", sexo);
		printf("%.2f\n", altura);
		cont++;
	}
	
}
