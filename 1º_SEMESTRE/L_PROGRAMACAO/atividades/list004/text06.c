#include <stdio.h>

int main() 
{
	int num_1 , aux, reverso = 0;

 	printf("Digite um numero:\n");
 	scanf("%d", &num_1);

	aux = num_1;

  	while (aux != 0)
	{
    	reverso = (reverso * 10) + (aux % 10); 
    	aux = aux / 10;                     
  	}

  	if (reverso == num_1)
    	printf("%d Palindrome\n", num_1);
  	else
    	printf("%d N Palindrome\n", num_1);

}
