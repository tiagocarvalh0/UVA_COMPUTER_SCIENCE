#include <stdio.h>

int main(){

	int x ;
	double y ;
	
	scanf("%i", &x);
	scanf("%lf", &y);
	printf("%.3lf km/l\n", (x / y));

}
