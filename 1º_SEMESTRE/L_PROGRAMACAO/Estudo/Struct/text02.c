#include <stdio.h>
#include <stdalign.h>
#include <string.h>

typedef struct 
{
    int idade;
    char sexo;
    char nome[20];
}t_agenda;

int main()
{
    t_agenda pessoa;

    pessoa.idade = 19;
    pessoa.sexo = 'M';
    strcpy(pessoa.nome, "Tiago Carvalho");

    printf("Idade = %d\n", pessoa.idade);
    printf("Sexo = %c\n", pessoa.sexo);
    printf("Nome = %s\n", pessoa.nome);

    return 0;
}