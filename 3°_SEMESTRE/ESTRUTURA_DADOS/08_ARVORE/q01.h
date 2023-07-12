#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int opera(Tree *t);

int main() {

  Tree *t = Tree_alloc('+', 
                      Tree_alloc('*',
                                  Tree_alloc('+',
                                      Tree_alloc('3',NULL,NULL),
                                      Tree_alloc('6',NULL,NULL)),
                                  Tree_alloc('-',
                                      Tree_alloc('4',NULL,NULL),
                                      Tree_alloc('1',NULL,NULL))), 
                      Tree_alloc('5',NULL,NULL));


    printf("%d\n", opera(t));

    return 0;
}

int opera(Tree *t) {
    if(t->left == NULL && t->right == NULL)
        return t->value - '0';
    else {
        switch(t->value) {
            case '+': return opera(t->left) + opera(t->right);
            case '-': return opera(t->left) - opera(t->right);
            case '*': return opera(t->left) * opera(t->right);
            case '/': return opera(t->left) / opera(t->right);
        }
    } 
    return 0;
}