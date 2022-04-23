#include <stdio.h>

int main ()
{
	int a, b, c, num_1, num_2, num_3 ;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if((a < b) && (a < c));
	{
		num_1 = a ;
	}
	if((b < a) && (b < c))	
	{
		num_1 = b ; 
	}
	if((c < a) && (c < b))
	{
		num_1 = c ;
	}
	
	if((a > b) && (a < c))
	{
		num_2 = a ;
	}
	if((b > a) && (b < c))
	{
		num_2 = b ;
	}
	if((c < a) && (c > b))
	{
		num_2 = c ;
	}
	
	if((a > b) && (a > c));
	{
		num_3 = a ;
	}
	if((b > a) && (b > c))	
	{
		num_3 = b ; 
	}
	if((c > a) && (c > b))
	{
		num_3 = c ;
	}
	
	printf("%i\n%i\n%i\n\n", num_1, num_2, num_3);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
