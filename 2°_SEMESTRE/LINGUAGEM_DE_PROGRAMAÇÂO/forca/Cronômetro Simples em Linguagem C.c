/*

  * Programa: Cronômetro
  * Data de criação: 21/09/2015
  * Autor: Eric Cancellgliere (http://programacaoemfoco.com.br)
  * Versão: 1.0
  * Última modificação em [21/09/2015] feita por [Eric Cancellgliere]

*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>//para usar o Sleep()

int main(void){
	//comando de regionalização
	setlocale(LC_ALL, "Portuguese");
	//título do programa
	SetConsoleTitle("Cronometro");
	
	//variáveis
    int sec=0;//segundos
	int min=0;//minutos
	int hr=0;//horas
	
	int i=0;//controle do loop
		
	do {
		system("cls");//limpa a tela
		
		printf("Cronômetro\n\n");
		
		printf("\n\t\t\t\t%dh:%dm:%ds\n\n", hr,min,sec);
		
		if(sec==60){
		    sec=0;
		    min++;
		}
		
		if(min==60){
		    min=0;
		    hr++;
		}
		
		if(hr==24){
		    hr=0;
		}
		
		Sleep(1000);//tem a função de pausar a execução por um determinado tempo
		sec++;
		
	}while (i==0);//condição para o loop infinito

    system("pause");
    return 0;
}