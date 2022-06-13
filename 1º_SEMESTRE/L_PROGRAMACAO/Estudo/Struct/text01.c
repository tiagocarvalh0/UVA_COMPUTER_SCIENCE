#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[30];
    int telefone;
    int idade;

} t_agenda;
int main(){
 t_agenda cadastro[2];
 int i;
 for(i=0; i<2; i++)
 {
 printf("Nome: ");
 fgets(cadastro[i].nome, 30, stdin);
 
 printf("Idade: ");
 scanf("%d",&cadastro[i].idade);
 
 printf("Telefone: ");
 scanf("%d",&cadastro[i].telefone);
 scanf("%c");
 }
 for(i = 0; i < 2; i++)
 {
    printf("Nome = %s\n", cadastro[i].nome);
    printf("Idade = %d\n", cadastro[i].idade);
    printf("Telefone = %d\n", cadastro[i].telefone);
 }
 
 return 0;
}