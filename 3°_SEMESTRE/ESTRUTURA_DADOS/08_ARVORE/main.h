#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main() {

  Tree *t = Tree_alloc('a', 
                      Tree_alloc('b',
                                  NULL,
                                  Tree_alloc('d',NULL,NULL)), 
                      Tree_alloc('c',
                                  Tree_alloc('e',NULL,NULL),
                                  Tree_alloc('f',NULL,NULL)));
    t->left->left = Tree_alloc('g', NULL, NULL);
    t->left->left->right = Tree_alloc('g', NULL, NULL);
    Tree_print(t);

    return 0;
}