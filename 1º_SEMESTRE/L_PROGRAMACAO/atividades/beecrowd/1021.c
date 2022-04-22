#include <stdio.h>

int main()
{
	int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2 ;
	int moeda_1, moeda_050, moeda_025, moeda_010, moeda_005, moeda_001 ;
	double rs ;
	
	scanf("%lf", &rs);
	nota_100 = rs / 100 ;
	rs = rs - (nota_100 * 100);
	nota_50 = rs / 50 ;
	rs = rs - (nota_50 * 50);
	nota_20 = rs / 20 ;
	rs = rs - (nota_20 * 20);
	nota_10 = rs / 10 ;
	rs = rs - (nota_10 * 10);
	nota_5 = rs / 5 ;
	rs = rs - (nota_5 * 5);
	nota_2 = rs / 2 ;
	rs = rs - (nota_2 * 2);
	moeda_1 = rs ;
	
	rs = (rs - moeda_1) * 100 ;
	moeda_050 = rs / 50 ;
	rs = rs - (moeda_050 * 50);
	moeda_025 = rs / 25 ;
	rs = rs - (moeda_025 * 25);
	moeda_010 = rs / 10 ;
	rs = rs - (moeda_010 * 10);
	moeda_005 = rs / 5 ;
	rs = rs - (moeda_005 * 5);
	moeda_001 = rs ;
	
	
	printf("NOTAS:\n");
	printf("%i nota(s) de R$ 100.00\n", nota_100);
	printf("%i nota(s) de R$ 50.00\n", nota_50);
	printf("%i nota(s) de R$ 20.00\n", nota_20);
	printf("%i nota(s) de R$ 10.00\n", nota_10);
	printf("%i nota(s) de R$ 5.00\n", nota_5);
	printf("%i nota(s) de R$ 2.00\n", nota_2);	
	printf("MOEDAS:\n");
	printf("%i moeda(s) de R$ 1.00\n", moeda_1);
	printf("%i moeda(s) de R$ 0.50\n", moeda_050);
	printf("%i moeda(s) de R$ 0.25\n", moeda_025);
	printf("%i moeda(s) de R$ 0.10\n", moeda_010);
	printf("%i moeda(s) de R$ 0.05\n", moeda_005);
	printf("%i moeda(s) de R$ 0.01\n", moeda_001);
	
}
