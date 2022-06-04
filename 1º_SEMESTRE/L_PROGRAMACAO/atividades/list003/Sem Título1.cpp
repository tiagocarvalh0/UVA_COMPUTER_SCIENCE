#include <stdio.h>


int valor(int a, int b, int c, int d, int e){
	
	int resultado, resultado2, resultado3, resultado4, resultado5;
	
	if(a > b && a > c && a > d && a >e){
		
		resultado = a;
		printf("O MAIOR : %d", resultado);
	}
	
	if(b > a && b > c && b > d && b > e){
		
		resultado2 = b;
		printf("O MAIOR : %d", resultado2);
	}
	
	if(c > a && c > b && c > d && c > e){
		
		resultado3 = c;
		printf("O MAIOR : %d", resultado3);
	}
	
	if(d > a && d > b && d > c && d > e){
		
	resultado4 = d;
		printf("O MAIOR : %d", resultado4);
	}
	
	if(e > a && e > b && e > c && e > d){
		
	resultado5 = e;
		printf("O MAIOR : %d", resultado5);
	}
	
}
	
	int main(){
		
		int valor1, valor2, valor3, valor4, valor5;
		
		printf("INSIRA O PRIMEIRO VALOR:");
		scanf("%d", &valor1);
		
		printf("INSIRA O PRIMEIRO VALOR:");
		scanf("%d", &valor2);
		
		printf("INSIRA O PRIMEIRO VALOR:");
		scanf("%d", &valor3);
		
		printf("INSIRA O PRIMEIRO VALOR:");
		scanf("%d", &valor4);
		
		printf("INSIRA O PRIMEIRO VALOR:");
		scanf("%d", &valor5);
		
		
		valor(valor1, valor2, valor3, valor4, valor5);
		
	}
