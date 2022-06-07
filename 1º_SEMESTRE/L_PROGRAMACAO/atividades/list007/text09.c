#include <stdio.h>

int main()
{
	void teste(void);
	
	teste();

}
void teste(void)
{
	int Num, cont = 0, Divisor = 0 ;
	
	scanf("%d", &Num);
	
	cont = 0;
	Divisor = 1;
	while(cont != 3)
	{
		if(Num % Divisor == 0)
		{
			printf("%d e DIVISOR\n", Divisor);
			cont++;
		}
		Divisor++;
		if(Divisor > Num + 1)
		{
			printf("Numero PRIMO\n");
			break;
		}
	}
}
