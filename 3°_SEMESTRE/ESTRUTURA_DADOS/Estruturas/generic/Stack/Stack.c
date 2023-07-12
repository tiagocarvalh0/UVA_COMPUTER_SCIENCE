#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

struct Stack {
    int size;
    int top;
    void **elements;
};

Stack *Stack_alloc(int size){ 
    Stack *s = malloc(sizeof(Stack));
    
    if (s) {
        s->size = size;
        s->top = -1;
        s->elements = calloc(size, sizeof(void*));
    }
    
    return s;
}

void Stack_free(Stack *s){
    free(s->elements);
    free(s);
}

int Stack_isEmpty(Stack *s){
    if (s) 
        return s->top == -1;
    
    return 1;
}

int Stack_isFull(Stack *s){ 
    if (s)
        return s->top == (s->size-1);
    
    return 0;
}

void Stack_push(Stack *s, void *el){
    if (s) {
        if (!Stack_isFull(s)) {
            s->top++;
            s->elements[s->top] = el;
        }
    }
}

void *Stack_pop(Stack *s){
    void *el = NULL;
    
    if (s) {
        if (!Stack_isEmpty(s)) {
            el = s->elements[s->top];
            s->top--;
        }
    }
    
    return el;
}

void *Stack_top(Stack *s){
    if (s) {
        if (!Stack_isEmpty(s))
            return s->elements[s->top];
    }
    return NULL;
}

void Stack_print(Stack *s, void (*print)(void*)) {
    int i;
    if (s) {
        printf("Stack(%d):\n", s->top+1);
        
        for (i=s->top; i>=0; i--)
            print(s->elements[i]);
    }
}



