/*#include <stdio.h>

int main(){

	int a, b, c ;
	
	scanf("%i %i %i", &a, &b, &c);
	
	if((a > b) && (a > c)){
		printf("%i eh o maior\n", a);
	}
	if ((b > a) && (b > c)){
		printf("%i eh o maior\n", b);
	}
	if((c > a) && (c > b)){
		printf("%i eh o maior\n", c);
	}
		
}*/
#include <stdio.h>

int main(){

	int a, b, c, maior ;
	
	scanf("%i %i %i", &a, &b, &c);
	maior = (a + b + abs(a - b)) / 2 ;
	maior=(c + maior +abs(maior - c))/2;
	printf("%i eh o maior\n", maior);
	
}
	
	

