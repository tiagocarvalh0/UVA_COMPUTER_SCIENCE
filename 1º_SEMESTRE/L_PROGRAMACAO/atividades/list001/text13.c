/*Construa um algoritmo que primeiro le o nome, o peso e a altura de tres
pessoas. Em seguida, ele escreve o nome da pessoa e seu ´Indice de Massa
Corporal (IMC).*/

#include <stdio.h>

int main (void){

	char nome[30];
	float peso, altura, imc;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Informe seu peso em KG: ");
	scanf("%f", &peso);
	printf("Informe sua altura em METROS: ");
	scanf("%f", &altura);
	imc = (peso / (altura * altura ));
	printf("Seu nome e %s \n", nome);
	printf("Seu IMC: %.2f \n", imc);

}

	