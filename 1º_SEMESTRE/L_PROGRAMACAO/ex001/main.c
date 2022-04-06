#include <stdio.h>
#include <stdlib.h>
float n1, n2, media;
void main(void) {
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	media = (n1 + n2)/2 ;
	printf("Sua media e: %f", media);
	/*printf("Sua media e: %f", (n1 + n2)/2);*/
	getch();	
}
