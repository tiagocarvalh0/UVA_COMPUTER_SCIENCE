#include <stdio.h>

int main()
{
	char sinal;
	int i = 1;
	int j =1;
	
	printf("Soma (+)\nSubtração(-)\nDivisão(/)\nMultiplicação(*)\nExit(e)\n");
	
	while(sinal != 'e'){
		printf("digite uma operacao\n");
		scanf("%s", &sinal);
		switch(sinal){
	    		case '+':
	    			i = 1;
	      			while(i <= 10){
	      			j = 1;
    					while (j<=10) {
      						printf("%d+%d=%d\n", i, j, (i+j));
      						j++;
  					}
  					printf("\n");
    				i++;
 				}
 				i= 1;
 				j = 1;
	    			break;
	    		case '-':
	 			i = 1;
	      			while(i <= 10){
	      			j =1;
   					while (j<=10) {
   					
      						printf("%d-%d=%d\n", i, j, (i-j));
     						j++;
    					}
    					printf("\n");
    				i++;
  				}
  				i = 1;
 				j = 1;
	    			break;
	    		case '/':
	    			i = 1;
	      			while(i <= 10){
	      				j = 1;
    					while (j<=10) {
      						printf("%d/%d=%d\n", j, i, (j/i));
      						j++;
  					}
  					printf("\n");
    				i++;
 				}
 				i = 1;
 				j = 1;
	    			break;
	    		case '*':
	    			i = 1;
	      			while(i <= 10){
	      				j = 1;
    					while (j<=10) {
      						printf("%dx%d=%d\n", i, j, (i*j));
      						j++;
  					}
  					printf("\n");
    				i++;
 				}
 				i = 1;
 				j = 1;
	    			break;
	    		case 'e':
	    			sinal = 'e';
	    			break;
	    		default:
	    			printf("Ivalido\n");
	  	}
       }
}
