/*#include <stdio.h>

int main(){

	char nome_1[15] ;
	char nome_2[15] ;
	char nome_3[15] ;

	scanf("%s", nome_1);
	scanf("%s", nome_2);
	scanf("%s", nome_3);

	if(nome_1[0] == 'v'){
		if(nome_2[0] == 'a'){
			if(nome_3[0] == 'c'){
			printf("aguia\n");		
}
			
			if(nome_3[0] == 'o'){
			printf("pomba\n");
}
}
		if(nome_2[0] == 'm'){
			if(nome_3[0] == 'o'){
			printf("homem\n");
}
        	if(nome_3[0] == 'h'){
        	printf("vaca\n");
}
}
}
	if(nome_1[0] == 'i'){
		if(nome_2[0] == 'i'){
			if(nome_3[2] == 'm'){
			printf("pulga\n");
}
			if(nome_3[2] == 'r'){
			printf("largata\n");
	
}	
}
		if(nome_2[0] == 'a'){
			if(nome_3[0] == 'h'){
			printf("sanguessuga\n");
}
			if(nome_3[0] == 'o'){
			printf("minhoca\n");
	
}
}
}
}*/

#include <stdio.h>

int main(){

	char a[15];
    	char b[15];
    	char c[15];
    	scanf("%s", a);
    	scanf("%s", b);
    	scanf("%s", c);

    	if (a[0] == 'v'){
	if( b[0] == 'a'){
	if (c[0] == 'c'){
	printf("aguia\n");
}
}
}
    	if (a[0] == 'v'){ 
	if(b[0] == 'a'){  
	if(c[0] == 'o'){
	printf("pomba\n");
}	
}
}
    	if (a[0] == 'v'){ 	
	if(b[0] == 'm'){ 
	if(c[0] == 'o'){
	printf("homem\n");
}	
}
}    
    	if (a[0] == 'v'){ 
	if(b[0] == 'm'){ 
	if(c[0] == 'h'){
	printf("vaca\n");
}
}
}
    	if (a[0] == 'i'){ 
	if(b[0] == 'i'){  
	if(c[2] == 'm'){
	printf("pulga\n");
}
}
}
    	if (a[0] == 'i'){
	if(b[0] == 'i'){ 
	if(c[2] == 'r'){
	printf("lagarta\n");
}
}
}
    	if (a[0] == 'i'){ 
	if(b[0] == 'a'){ 
	if(c[0] == 'h'){
	printf("sanguessuga\n");
}
}
}
    	if (a[0] == 'i'){ 
	if(b[0] == 'a'){
	if(c[0] == 'o'){
	printf("minhoca\n");
}
}
}
}
