/*. Construa um algoritmo que calcule a media aritm ´ etica entre tr ´ es idades ˆ
quaisquer fornecidas pelo usuario.*/

#include <stdio.h>

int main (){
	float idade1, idade2, idade3, media_a ;
	printf("Primeira idade: ");
	scanf("%f", &idade1);
	printf("Segunda idade: ");
	scanf("%f", &idade2);
	printf("Terceira idade: ");
	scanf("%f", &idade3);
	media_a = (idade1 + idade2 + idade3) / 3 ;
	printf("Media de idade: %.2f \n", media_a);

}