#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

int main() {
    Stack *s = NULL;
    
    s = Stack_alloc();
    
    if (Stack_isEmpty(s))
        printf("Pilha vazia\n");
    else
        printf("Pilha não vazia\n");
    
    if (Stack_isFull(s))
        printf("Pilha cheia\n");
    else
        printf("Pilha não cheia\n");
    
    Stack_push(s, 6);
    Stack_push(s, 9);
    Stack_push(s, 23);
    Stack_push(s, 74);
    Stack_push(s, 2);
    Stack_push(s, 8);
    
    Stack_print(s);
    
    printf("topo era %d\n", Stack_pop(s));
    Stack_print(s);
    
    printf("topo é %d\n", Stack_top(s));
    Stack_print(s);
        
    Stack_free(s);
    
    return 0;
}
