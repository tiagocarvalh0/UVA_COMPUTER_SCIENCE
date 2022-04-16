/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.*/

#include <stdio.h>
 
int main() {
 
	int a, b, c ;
	
	scanf("%i", &a);
	scanf("%i", &b);
	

	if(a > b){
	if(a % b == 0){
	printf("Sao Multiplos\n");
}
	else{
	if(a % b != 0){
	printf("Nao sao Multiplos\n");
}
}
}
	if(a < b){
	if(b % a == 0){
	printf("Sao Multiplos\n");
}
	else{
	if(b % a != 0){
	printf("Nao sao Multiplos\n");
}
}
}
}