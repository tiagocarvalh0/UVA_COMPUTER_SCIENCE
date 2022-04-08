#include <stdio.h>
/*ENTRADA
Pergunte a distancia a percorrer e a velocidade media esperada para a viagem.

SAIDA:
Tempo de uma viagem de carro*/

int main (){
	int distancia, v_media, tempo ;
	printf("Informe a distancia a percorrer em KM: ");
	scanf("%d", &distancia);
	printf("Informe a velocidade media em KM/H: ");
	scanf("%d", &v_media);
	tempo =  distancia / v_media ;
	printf("%d HORAS ate o destino \n", tempo);
}
	