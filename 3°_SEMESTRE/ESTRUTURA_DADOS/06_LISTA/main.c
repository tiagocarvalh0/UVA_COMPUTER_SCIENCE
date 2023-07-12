#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int cmp(void *x, void *y) { // inOrder
    return (*(int*)y) - (*(int*)x);
}

int comp(void *x, void *y) {
    return (*(int*)x) - (*(int*)y); // inversOrder
}

void print(void *value) {
    int x = *(int*)value;
    printf("%d, ", x);
}

int main() {

    List *l = List_alloc();
    List *d = List_alloc();

    for(int i = 0; i < 10; i++) {
        int *w = (int*)malloc(sizeof(int));
        *w = i;
        List_insertFirst(l, w);
    }

    for(int i = 0; i < 10; i++) {
        int *w = (int*)malloc(sizeof(int));
        *w = i-10;
        List_insertFirst(d, w);
    }
    List_print(l, print);
    List_print(d, print);
    List_concatenate(l, d);
    List_print(l, print);
    return 0;
}

