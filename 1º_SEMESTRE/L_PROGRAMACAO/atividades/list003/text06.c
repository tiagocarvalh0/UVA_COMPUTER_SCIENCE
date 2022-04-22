/*Fac¸a um programa que receba a hora do in´icio de um jogo e a hora do
termino (cada hora ´ e composta por duas vari ´ aveis inteiras: hora e minuto). ´
Calcule e mostre a durac¸ao do jogo (horas e minutos), sabendo que o tempo ˜
maximo de durac¸ ´ ao do jogo ˜ e de 24 horas e que ele pode comec¸ar em um ´
dia e terminar no dia seguinte.*/

#include <stdio.h>

int main(){

	int a, b, c, d, tempo;

   	scanf("%d %d %d %d", &a, &c, &b, &d);
    	tempo = ((b*60)+d) - ((a*60)+c);

    	if(tempo <= 0)
   	tempo += 24*60;
    	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo/60, tempo%60);
    
}
