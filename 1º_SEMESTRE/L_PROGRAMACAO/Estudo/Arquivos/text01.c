/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int valido;
	int conjunto;
	float numero1;
	float numero2;
	float numero3;
} t_numero;

// INFORMAR NUMERO
void informarNumero()
{
	FILE *arq = fopen("arquivo.bin", "ab+");
	t_numero numero;
	
	numero.valido = 1;
	printf("=================\n");
	printf("Conjunto: ");
	scanf("%d", &numero.conjunto);
	printf("Numero (1): ");
	scanf("%f", &numero.numero1);
	printf("Numero (2): ");
	scanf("%f", &numero.numero2);
	printf("Numero (3): ");
	scanf("%f", &numero.numero3);
	
	fwrite(&numero, sizeof(t_numero), 1, arq);
	
	fclose(arq);
}

// LER NUMEROS
void lerNumeros()
{
	FILE* arq= fopen("arquivo.bin", "rb");
	t_numero numero;
	
	while(1)
	{
		fread(&numero, sizeof(t_numero), 1, arq);
			if(feof(arq))
				break;
		if(numero.valido == 1)
		{
			printf("\n");
			printf("Numero (1): %.1f\n", numero.numero1 );
			printf("Numero (2): %.1f\n", numero.numero2);
			printf("Numero (3): %.1f\n", numero.numero3);
		}
	}

}

int main()
{
	int num = -1;
	while(num != 0)
	{
		printf("\n");
		printf("===== MENU =====\n");
		printf("(1) = Informar Numeros.\n");
		printf("(2) = Ler Numeros.\n");
		printf("(0) = Sair.\n");
		printf("Selecionar: ");
		scanf("%d", &num);
		
		if(num == 1)
			informarNumero();
		if(num == 2)
			lerNumeros();
	}
	return 0;
}*/
#include <stdio.h>

int main()
{
    int n;
    int maiorNum, menorNum, meioNum;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    maiorNum = n1;
    menorNum = n1;
    
    if(maiorNum < n2)
        maiorNum = n2;
    if(maiorNum < n3)
        maiorNum = n3;
        
    if(menorNum > n2)
        menorNum = n2;
    if(menorNum > n3)
        menorNum = n3;
    
    meioNum = n2;
    if(maiorNum == n1)
    {
		if(meioNum > n2)
			meioNum = n3;
		else
			meioNum = n2;
	}
	
    
    printf("Menor Numero %d\n", menorNum);
    printf("Meio Numero %d\n", meioNum);
    printf("Maior Numero %d\n", maiorNum);
    
    return 0;
}
