/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.*/

/*#include <stdio.h>

int main(){

	int h1, m1, h2, m2, min_ini, min_fim, tempo, hora, min ;

	scanf("%i %i %i %i", &h1, &m1, &h2, &m2);
	min_ini = (h1 * 60) + m1 ;
	min_fim = (h2 * 60) + m2 ;
	
	
	if(min_fim > min_ini){
	tempo = min_fim - min_ini ;
	hora = tempo / 60 ;
	min = tempo - (hora * 60) ;
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora, min);	
}
	if(min_fim < min_ini){
	min = min_fim - min_ini ;
	tempo = 1440 + min;
	hora = tempo / 60 ;
	min = tempo - (hora * 60); 
	printf("%i\n%i\n%i\n", tempo, hora, min);
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora, min);	
}
	if(min_ini == min_fim){
	tempo = 1440 ;
	hora = tempo / 60 ;
	min = tempo - (hora * 60); 
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora, min);	
}	
}*/

#include <stdio.h>

int main(){

	int a, b, c, d, tempo;

   	scanf("%d %d %d %d", &a, &c, &b, &d);
    	tempo = ((b*60)+d) - ((a*60)+c);

    	if(tempo <= 0)
   	tempo += 24*60;
    	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo/60, tempo%60);
    
}