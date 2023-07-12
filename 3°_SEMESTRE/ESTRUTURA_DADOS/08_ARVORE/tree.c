#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Tree *Tree_alloc(int value, Tree *left, Tree *right) {
    Tree *t = NULL;
    if(value) {
        t = (Tree*) malloc(sizeof(Tree));
        t->value = value;
        t->left = left;
        t->right = right;
    }

    return t;
}
void  Tree_free(Tree *t) {
    if(t) {
        Tree_free(t->left);
        t->left = NULL;
        Tree_free(t->right);
        t->right = NULL;
        free(t);
    }
}
void  Tree_print(Tree *t) {
    if(t) {
        if(t->value) {
            printf("<");
            printf("%c ", t->value);
            Tree_print(t->left);
            Tree_print(t->right);
            printf(">");
        }
        else {
            printf("<>\n");
        }
    }
}