/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".*/

#include <stdio.h>
 
int main() {
 
	double N1, N2,  N3,  N4, Media, nt ;

	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
	Media =((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10 ;
	printf("Media: %.1lf\n", Media);
	
	if(Media >= 7.0){
	printf("Aluno reprovado.\n");
}
	if(Media < 5.0){
	printf("Aluno reprovado.\n");	
}
	if((Media >= 5.0) && (Media <= 6.9)){
	printf("Aluno em exame.\n");
	scanf("%lf", &nt);
	printf("Nota do exame: %.1lf\n", nt);
	Media = (nt + Media) / 2;
		
	if(Media >= 5.0){
	printf("Aluno aprovado.\n");
	printf("Media final: %.1lf\n", Media);
}
	if(Media <= 4.9){
	printf("Aluno reprovado.\n");
	printf("Media final: %.1lf\n", Media);
}	
}
    return 0;
}
