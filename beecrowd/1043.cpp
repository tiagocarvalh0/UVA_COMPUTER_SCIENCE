#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int i ;
	float vetor[3], maiorLado = vetor[0], soma = 0, operacao;
	
	for(i = 0; i < 3; i++)
		scanf("%f", &vetor[i]);
		
	for(i = 0; i < 3; i++)
		if(maiorLado < vetor[i])
			maiorLado = vetor[i];
	
	for(i = 0; i < 3; i++)
		soma += vetor[i];	
	
 	if((soma - maiorLado) > maiorLado)
 		printf("Perimetro = %.1f\n", vetor[0] + vetor[1] + vetor[2]);
 	
 	if((soma - maiorLado) <= maiorLado)
 	{
		operacao = ((vetor[0] + vetor[1]) * vetor[2]) / 2;
		printf("Area = %.1f\n", operacao);
	}
	
    return 0;
}