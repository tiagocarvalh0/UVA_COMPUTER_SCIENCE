#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct Stack {
    int size;
    int top;
    int *elements;
} Stack;

Stack *Stack_alloc(int size) {
    Stack *s = (Stack*) malloc(sizeof(Stack));
    if(s) {
        s->size = size;
        s->top = -1;
        s->elements = (int*) calloc(size, sizeof(int));
    }
    return s;
}
void Stack_free(Stack *s) {
    if(s)
        free(s);
}
int Stack_isEmpty(Stack *s) {
    if(s) {
        if(s->top == -1)
            return 1;
    }
    return 0;
}
int Stack_isFull(Stack *s) {
    if(s) {
        if(s->top == s->size-1)
            return 1;
    }
    return 0;
}
void Stack_push(int element, Stack *s) {
    if(!Stack_isFull(s)) {
            s->top++;
            s->elements[s->top] = element;
        }
}
int Stack_pop(Stack *s) {
    int element = 0;
    if(!Stack_isEmpty(s)) {
        element = s->elements[s->top];
        s->top--;
    }
    return element;
}

Stack *ordenada(Stack *a, Stack *b) {
    for(int i = 0; i < 10; i++) 
        for(int j = 0; j < 9; j++) {
            if(a->elements[i] < a->elements[j]) {
                Stack_push((a->elements[i]), b);

            }
        }
    return a;
}

void Stack_Printf(Stack *s) {
    if(s) {
        for(int i = s->top; i >= 0; i--)
            printf("%d ", s->elements[i]);
    }
    printf("\n");
}