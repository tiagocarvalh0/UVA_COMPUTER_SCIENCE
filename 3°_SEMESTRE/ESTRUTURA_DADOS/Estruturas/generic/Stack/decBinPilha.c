#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

int main() {
    Stack *s = Stack_alloc(100);
    int n = 0, *restoDaDivisao;
    
    printf("N = ");
    scanf("%d", &n);
    
    while (n > 0) {
        restoDaDivisao = malloc(sizeof(int));
        *restoDaDivisao = n % 2;
        Stack_push(s, restoDaDivisao);
        n = n / 2;
    }
    
    printf("BIN = ");
    while (!Stack_isEmpty(s)){
        restoDaDivisao = Stack_pop(s);
        printf("%d", *restoDaDivisao);
        free(restoDaDivisao);
    }
    printf("\n");
    
    Stack_free(s);
    
    return 0;
}
