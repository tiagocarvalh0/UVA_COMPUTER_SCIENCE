#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main() {

    int element;
    Stack *a = Stack_alloc(10);
    Stack *b = Stack_alloc(10);
    for(int i = 0; i < 10; i++) {
        scanf("%d", &element);
        Stack_push(element, a);

    }

    Stack_Printf(ordenada(a, b));

    return 0;
}