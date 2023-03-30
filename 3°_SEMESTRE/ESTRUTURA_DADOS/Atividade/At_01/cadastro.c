#include <stdlib.h>
#include <stdio.h>
#include "cadastro.h"

struct Cadastro {
    char nome[20];
    int idade;
    char endereco[20];
};

Cadastro *Struct_alloc(int N) {
    Cadastro *c;

    c = (struct Cadastro*) malloc(N * sizeof(struct Cadastro));

    return c;
}