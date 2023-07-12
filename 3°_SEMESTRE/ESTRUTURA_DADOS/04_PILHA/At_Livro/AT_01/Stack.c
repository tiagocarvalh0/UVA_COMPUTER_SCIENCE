#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct Stack {
    int size;
    int top;
    char *frase;
}Stack;

Stack *Stack_Alloc(int size) {
    Stack *s = (Stack*) malloc (sizeof(Stack));
    if(s) {
        s->size = size;
        s->top = -1;
        s->frase = (char*) calloc(size , sizeof(char));
    }
    return s;
}

void Stack_Free(Stack *s) {
    if(s)
        free(s);
}

int Stack_isEmpty(Stack *s) {
    if(s) {
        s->top == -1;
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

void Stack_Push(char letra, Stack *s) {
    if(!Stack_isFull(s)) {
        s->top++;
        s->frase[s->top] = letra;
    }
}

void Stack_Pop(Stack *s) {
    if(!Stack_isEmpty(s)) {
        s->top--;
    }
}

void Stack_Printf(Stack *s) {
    if(s) {
        for(int i = s->top; i >= 0; i--)
            printf("%c", s->frase[i]);
    }
}

