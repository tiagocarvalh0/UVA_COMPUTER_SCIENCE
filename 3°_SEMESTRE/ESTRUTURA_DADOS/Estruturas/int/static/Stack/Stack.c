#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

struct Stack {
    int size;
    int top;
    int elements[MAX_ELEMENTS];
};

Stack *Stack_alloc(){ 
    Stack *s = malloc(sizeof(Stack));
    
    if (s) {
        s->size = 0;
        s->top = -1;
    }
    
    return s;
}

void Stack_free(Stack *s){
    free(s);
}

int Stack_isEmpty(Stack *s){
    if (s) 
        return s->size == 0;
    
    return 1;
}

int Stack_isFull(Stack *s){ 
    if (s)
        return s->size == MAX_ELEMENTS;
    
    return 0;
}

void Stack_push(Stack *s, int el){
    if (s) {
        if (!Stack_isFull(s)) {
            s->size++;
            s->top++;
            s->elements[s->top] = el;
        }
    }
}

int Stack_pop(Stack *s){
    int el = 0;
    
    if (s) {
        if (!Stack_isEmpty(s)) {
            s->size--;
            el = s->elements[s->top];
            s->top--;
        }
    }
    
    return el;
}

int Stack_top(Stack *s){
    if (s) {
        if (!Stack_isEmpty(s))
            return s->elements[s->top];
    }
    return 0;
}

void Stack_print(Stack *s) {
    int i;
    if (s) {
        printf("Stack(%d):\n", s->size);
        
        for (i=s->top; i>=0; i--)
            printf(" %d\n", s->elements[i]);
    }
}
