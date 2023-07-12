#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main() {

    int i = 3, j;    

    Stack *s = Stack_alloc(i);

    Stack_Push(1, s);
    Stack_Push(2, s);
    Stack_Push(3, s);

    Stack_Printf(s);
    
    return 0;
}