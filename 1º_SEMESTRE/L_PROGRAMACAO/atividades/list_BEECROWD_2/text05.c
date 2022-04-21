/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
	se A >= B+C, apresente a mensagem: NAO FORMA TRIANGULO
	se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
	se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
	se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
	se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
	se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES*/

#include <stdio.h>

int main(){

	float valor_a, valor_b, valor_c ;
	
	scanf("%f %f %f", &valor_a, &valor_b, &valor_c);
	
	if((valor_a >= valor_b ) && (valor_a >= valor_c)){

	if((valor_b + valor_c) <= valor_a){
	printf("NAO FORMA TRIANGULO\n");	
}
	else{
	if((valor_b * valor_b) + (valor_c * valor_c) == (valor_a * valor_a)){
	printf("TRIANGULO RETANGULO\n");
}
	if((valor_b * valor_b) + (valor_c * valor_c) < (valor_a * valor_a)){
	printf("TRIANGULO OBTUSANGULO\n");
}
	if((valor_b * valor_b) + (valor_c * valor_c) > (valor_a * valor_a)){
	printf("TRIANGULO ACUTANGULO\n");
}
	if((valor_a == valor_b) && (valor_a == valor_c) && (valor_b == valor_c)){
	printf("TRIANGULO EQUILATERO\n");		
}
	else{
	if(valor_a == valor_b){
	printf("TRIANGULO ISOSCELES\n");
}
	if(valor_a == valor_c){
	printf("TRIANGULO ISOSCELES\n");
}
	if(valor_b == valor_c){
	printf("TRIANGULO ISOSCELES\n");
}
}
}
}
	else{
	
	if((valor_b >= valor_a ) && (valor_b >= valor_c)){

	if((valor_a + valor_c) <= valor_b){
	printf("NAO FORMA TRIANGULO\n");	
}
	else{
	if((valor_a * valor_a) + (valor_c * valor_c) == (valor_b * valor_b)){
	printf("TRIANGULO RETANGULO\n");
}
	if((valor_a * valor_a) + (valor_c * valor_c) < (valor_b * valor_b)){
	printf("TRIANGULO OBTUSANGULO\n");
}
	if((valor_a * valor_a) + (valor_c * valor_c) > (valor_b * valor_b)){
	printf("TRIANGULO ACUTANGULO\n");
}
	if((valor_b == valor_a) && (valor_b == valor_c) && (valor_a == valor_c)){
	printf("TRIANGULO EQUILATERO\n");		
}
	else{
	if(valor_b == valor_a){
	printf("TRIANGULO ISOSCELES\n");
}
	if(valor_b == valor_c){
	printf("TRIANGULO ISOSCELES\n");
}
	if(valor_a == valor_c){
	printf("TRIANGULO ISOSCELES\n");
}
}
}
}



	if((valor_c >= valor_b ) && (valor_c >= valor_a)){

	if((valor_a + valor_b) <= valor_c){
	printf("NAO FORMA TRIANGULO\n");	
}
	else{
	if((valor_a * valor_a) + (valor_b * valor_b) == (valor_c * valor_c)){
	printf("TRIANGULO RETANGULO\n");
}
	if((valor_a * valor_a) + (valor_b * valor_b) < (valor_c * valor_c)){
	printf("TRIANGULO OBTUSANGULO\n");
}
	if((valor_a * valor_a) + (valor_b * valor_b) > (valor_c * valor_c)){
	printf("TRIANGULO ACUTANGULO\n");
}
	if((valor_b == valor_a) && (valor_b == valor_c) && (valor_a == valor_c)){
	printf("TRIANGULO EQUILATERO\n");		
}
	else{
	if(valor_b == valor_a){
	printf("TRIANGULO ISOSCELES\n");
}
	if(valor_b == valor_c){
	printf("TRIANGULO ISOSCELES\n");
}
	if(valor_a == valor_c){
	printf("TRIANGULO ISOSCELES\n");
}
}
}
}
}
}











	
