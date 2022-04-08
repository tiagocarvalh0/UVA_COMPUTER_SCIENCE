/*Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.*/

#include <stdio.h>
 
int main() {
 
	double a, b, c, MEDIA ;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	MEDIA = (((a * 2) + (b * 3) + (c * 5)) / 10) ;
	printf("MEDIA = %.1lf\n", MEDIA);
	
    return 0;
}