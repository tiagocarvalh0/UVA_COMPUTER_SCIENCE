#include <stdio.h>

int main()
{
	int anos, mes, dias ;
	
	scanf("%i", &dias);
	anos = dias / 365 ;
	dias = dias - (anos * 365);
	mes = dias / 30 ;
	dias = dias - (mes * 30);
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n",anos, mes, dias);
	
}
