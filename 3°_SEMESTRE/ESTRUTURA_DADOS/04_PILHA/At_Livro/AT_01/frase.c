#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

int main() {
    char x[100];
    int i = 0;
    scanf(" %[^;\n]", x);
    Stack *s = Stack_Alloc(sizeof(x));
    while(!x[i] == '\0') {
        Stack_Push(x[i], s);
        i++;
    }
    Stack_Printf(s);
}