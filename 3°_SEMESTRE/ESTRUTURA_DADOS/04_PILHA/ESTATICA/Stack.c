#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int size;
    int top;
    int *elements;
};

Stack *Stack_alloc(int size) {
    Stack *s = (Stack*) malloc(sizeof(Stack));

    if(s) {
        s->size = size;
        s->top = -1;
        s->elements = (int*) calloc(size , sizeof(int));
    }

    return s;
}
void Stack_free(Stack *s) {
    free(s);
}
int Stack_isEmpty(Stack *s) {
    if(s)
        return s->size == -1;    
    return 1;
}
int Stack_isFull(Stack *s) {
    if(s)
        return s->top == (s->size-1);
    return 0;
}
void Stack_Push(int element, Stack *s) {
    if(s) {
        if(!Stack_isFull(s)) {
            s->top++;
            s->elements[s->top] = element;
        }
    }
}
int Stack_Pop(Stack *s) {
    int vazio = 0;
    if(s)
        if(!Stack_isEmpty(s)) {
            vazio = s->elements[s->top];
            s->top--;
        }

    return vazio;
}
int Stack_Top(Stack *s) {
    int element = 0;
    if(s)
        if(!Stack_isEmpty(s)) {
            element = s->elements[s->top];            
        }
    return element;
}
void Stack_Printf(Stack *s) {
    printf("Stack(%d):\n", s->top++);
    for(int i = s->top; i > =0 ; i--)
        printf("[%d] ", s->elements[i]);
    printf("\n");
}
