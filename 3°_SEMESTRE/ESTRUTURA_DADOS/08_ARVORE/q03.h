#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int tamArvore(Tree *t);

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
printf("%d\n", tamArvore(t));
    return 0;
}
int tamArvore(Tree *t) {
    int tamLeft = 0, tamRight = 0;
    if(t) {
        tamLeft = tamArvore(t->left);
        tamRight = tamArvore(t->right);
        if(tamLeft > tamRight)
            return ++tamLeft;
        return ++tamRight;
    }
}