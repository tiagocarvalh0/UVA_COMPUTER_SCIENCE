#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int pai(Tree *t, int cmp, Tree *filho);

int main() {

    Tree *t = Tree_alloc(13, 
                        Tree_alloc(78,
                                    Tree_alloc(22,
                                        Tree_alloc(10,NULL,NULL),
                                        Tree_alloc(7,NULL,NULL)),
                                    Tree_alloc(98,
                                        Tree_alloc(29,NULL,NULL),
                                        Tree_alloc(8,NULL,NULL))), 
                        Tree_alloc(54,NULL,NULL));
printf("%d\n", pai(t, 10, NULL));
    return 0;
}

int pai(Tree *t, int cmp, Tree *filho) {
    if(t) {
        if(t->value == cmp){
            if(filho)
                return filho->value;
            else {
                return 0;
            }
        }
        else {
            return pai(t->left, cmp, t) + pai(t->right, cmp, t);
        }
    }
}