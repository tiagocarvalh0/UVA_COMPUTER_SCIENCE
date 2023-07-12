#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Bst.h"

int compar(void *a, void *b) {
    char* valueA = (char *)a;
    char* valueB = (char *)b;
    return strcmp(valueA, valueB);
}

void print(void *value) {
    char *valueA = (char *)value;
    printf("%s\n", valueA);
}


int main() {
    Bst *bst = Bst_alloc(compar);
    FILE *arq = fopen("texto.txt", "r");
    while(1){
        if(feof(arq))
            break;
        char* value = (char*) calloc(100, sizeof(char));
        fscanf(arq, "%s", value);
        Bst_insert(bst, value);
    }
    Bst_print(bst, print);
    fclose(arq);
    Bst_free(bst);
    return 0;
}