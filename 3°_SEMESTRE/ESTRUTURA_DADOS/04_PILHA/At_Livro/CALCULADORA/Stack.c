#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct Stack {
    int size;
    int top;
    char *elements;
}Stack;

Stack *Stack_alloc(int size) {
    Stack *s = (Stack*) malloc(sizeof(Stack));
    if(s) {
        s->size = size;
        s->top = -1;
        s->elements = (char*) calloc(size, sizeof(char));
    }

    return s;
}
void Stack_push(Stack *s, char element) {
    if(s) {
        ++s->top;
        s->elements[s->top] = element;
    }
}
char Stack_pop(Stack *s) {
    char element;
    if(s) {
        element = s->elements[s->top];
        --s->top;
    }
    return element;
}

void Stack_printf(Stack *s) {
    if(s) {
        for(int i = s->top; i >= 0; i--) {
            printf("%c ", s->elements[i]);
        }
    }
}