/*A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:*/

#include <stdio.h>
 
int main () {
	
	double raio, area;
	
	scanf("%lf", &raio);
	area = 3.14159 * (raio * raio);
	printf("A=%.4lf\n", area);
    return 0;
}