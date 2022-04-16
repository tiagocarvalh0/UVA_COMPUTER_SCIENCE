#include <stdio.h>

int main(){

	float salario, aumento ;
	

	scanf("%f", &salario);
	
	if((salario <= 400) && (salario >= 0)){
	aumento = salario * 0.15 ;
	salario = salario + aumento ;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salario,aumento);
}
	else{
	if((salario >= 400.01 ) && (salario <= 800)){
	aumento = salario * 0.12 ;
	salario = salario + aumento ;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salario,aumento);	
}
	else{
	if((salario >= 800.01) && (salario <= 1200)){
	aumento = salario * 0.10 ;
	salario = salario + aumento ;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salario,aumento);
	
}
	else{
	if((salario >= 1200.01) && (salario <= 2000)){
	aumento = salario * 0.07 ;
	salario = salario + aumento ;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salario,aumento);
}
	else{	
	if(salario > 2000){
	aumento = salario * 0.04 ;
	salario = salario + aumento ;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salario,aumento);
}
}
}
}
}	
}