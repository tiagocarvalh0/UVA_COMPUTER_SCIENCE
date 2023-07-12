#include "deq.h"
#include <stdio.h>
#include <stdlib.h>

void print(void *value) {
    int x = *((int*)value);
    printf(" %d <->", x);
}

int cmp(void *D_value, void *value) {
    return *((int*) D_value) - *((int*) value);
}

int main() {

    DEQ *d = Deq_alloc();
    for(int i = 0; i < 10; i++) {
        int *x = (int*) malloc(sizeof(int));
        *x = i;
        DEQ_pushFront(d, x);
        free(x);
    }

    int num = 1;
    int *aux = &num;
    void *x = aux;

    DEQ_popSearch(d, x, cmp);
    DEQ_print(d, print);
    DEQ_free(d);

    return 0;
}