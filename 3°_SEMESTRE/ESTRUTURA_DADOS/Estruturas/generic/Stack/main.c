#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

typedef struct Vilao {
    char nome[20];
    int  numDeDerrotas;
    int  nivelDePerigo;
} Vilao;

void print(void *a) {
    Vilao *v = (Vilao*) a;
    
    printf("%s %d %d\n", v->nome, 
                        v->numDeDerrotas, 
                        v->nivelDePerigo);
}

int main() {
    Stack *s = Stack_alloc(4);
    int i;
    /*
    Vilao *v;
    
    for (i=0; i<4; i++) {
        v = malloc(sizeof(Vilao));
        
        scanf("%s%d%d", v->nome, 
                        &v->numDeDerrotas, 
                        &v->nivelDePerigo);
        
        Stack_push(s, v);
    }
    */
    
    Vilao v[4];
        
    for (i=0; i<4; i++) {
        scanf("%s%d%d", v[i].nome, 
                        &v[i].numDeDerrotas, 
                        &v[i].nivelDePerigo);
        
        Stack_push(s, &v[i]);
    }
    
    Stack_print(s, print);
        
    Stack_free(s);
    
    return 0;
}
