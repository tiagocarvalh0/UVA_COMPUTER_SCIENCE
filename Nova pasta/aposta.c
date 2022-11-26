#include <stdio.h>

int main() {
	int i = 3;
	while(i != 0) {
	printf("===== MENU =====\n");
	printf("(1) = TXT\n");
	printf("(2) = EXECL\n");
	scanf("%d", &i);
	if(i == 1)
		system("texto.txt");
	if(i == 2) 
		system("historico.xlsx");
	}
	return 0;
}
