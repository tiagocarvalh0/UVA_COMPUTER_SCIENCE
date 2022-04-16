/*#include <stdio.h>

int main(){

	float renda ;
	
	scanf("%f", &renda);
	
	if(renda <= 2000){
	printf("Isento\n");	
}
	else{
	if((renda >= 2000.01) && (renda <= 3000)){
	renda = renda * 0.08 ;
	printf("R$ %.2f\n", renda);

}
	else{
	if((renda >= 3000.01) && (renda <= 4500)){
	renda = (0.18 * (renda - 3000)) + (1000 * 0.08);
	printf("R$ %.2f\n", renda);
}
}
}
	if(renda > 4500){
	renda = (0.28 * (renda - 4500)) + (1500 * 0.18) + (1000 * 0.08) ;
	printf("R$ %.2f\n", renda);
	
}
}*/
#include <stdio.h>

int main(){

    	float renda;
    	scanf("%f", &renda);
    
    	if(renda <= 2000.00){
        printf("Isento\n");
}
	else 
	if(renda >= 2000.01 && renda <= 3000.00){
    	renda = (renda - 2000) * 0.08 ;
        printf("R$ %.2f\n", renda);
}
	else
	if(renda >= 3000.01 && renda <= 4500.00){
    	renda =  ((renda - 3000) * 0.18 + 1000 * 0.08);
        printf("R$ %.2f\n", renda);
}
	else
	if (renda >= 4500.01){
    	renda = ((renda - 4500)*0.28 + 1500 * 0.18 + 1000 * 0.08);
        printf("R$ %.2f\n", renda);

}
}