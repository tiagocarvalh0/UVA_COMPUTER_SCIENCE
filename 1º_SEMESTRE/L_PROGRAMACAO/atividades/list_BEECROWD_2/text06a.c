/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.*/

#include <stdio.h>

int main(){

	int h1, m1, h2, m2, min_ini, min_fim, tempo, hora, min ;

	scanf("%i %i %i %i", &h1, &m1, &h2, &m2);
	min_ini = (h1 * 60) + m1 ;
	min_fim = (h2 * 60) + m2 ;
	tempo = min_fim - min_ini ;
	hora = tempo / 60 ;
	min = tempo - (hora * 60) ;
	
	if(min_fim > min_ini){
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora, min);	
}
	if(min_fim < min_ini){
	tempo = 1440 - ( - min);
	hora = tempo / 60 ;
	min = tempo - (hora * 60); 
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora, min);	
}
	if(min_ini == min_fim){
	tempo = 1440 ;
	hora = tempo / 60 ;
	min = tempo - (hora * 60); 
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora, min);	
}	
}