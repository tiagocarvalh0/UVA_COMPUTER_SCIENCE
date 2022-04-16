/*Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).*/

#include <stdio.h>

int main(){

	float x, y ;
	
	scanf("%f", &x);
	scanf("%f", &y);

	if((x == 0) && (y == 0)){
	printf("Origem\n");
}
	else{
	if(x == 0){
	printf("Eixo Y\n");
	
}
	if(y == 0){
	printf("Eixo X\n");
	
}
}
	if((x > 0) && (y > 0)){
	printf("Q1\n");

}
	if((x < 0) && (y > 0)){
	printf("Q2\n");
}
	if((x < 0) && (y < 0)){
	printf("Q3\n");

}
	if((x > 0) && (y < 0)){
	printf("Q4\n");
}	
	return 0;
}