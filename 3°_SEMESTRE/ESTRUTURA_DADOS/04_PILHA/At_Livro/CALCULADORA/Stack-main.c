#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Stack.h"

int tamanhoString(char string[100]);

int main() {
    char string[100];
    int i = tamanhoString(string);
    char posfixa[i];

    Stack *s = Stack_alloc(i);

    int x = -1;

    for(int j = 0; j < i; j++) {
        if(isdigit(string[j])) {
            posfixa[++x] = string[j];
        }
        else if (strchr("+-/*", string[j])) {
            Stack_push(s, string[j]);
        }
        else if(string[j] == ')'){
            posfixa[++x] = Stack_pop(s);
        } 
    }

    printf("%s\n", posfixa);
       

    return 0;
}


int tamanhoString(char string[100]) {

    scanf("%s", string);

    int i = 0;
    while(string[i] != '\0') {
        i++;
    }
    return i;
}
