#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

struct Bst{
    void *value;
    Bst *left;
    Bst *right;
    int (*compar) (void*, void*);
};

Bst *Bst_alloc(int (*compar) (void*, void*)) {
    Bst *bst = NULL;
    
    if (compar) {
        bst = (Bst*) malloc(sizeof(Bst));
        bst->value = NULL;
        bst->left = NULL;
        bst->right = NULL;
        bst->compar = compar;
    }
    return bst;
}

void Bst_free(Bst *bst) {
    if(bst != NULL) {
        Bst_free(bst->left);
        Bst_free(bst->right);
        free(bst);
    }
}

void Bst_insert(Bst *bst, void *value) {
    if (bst && value){
        if (bst->value == NULL)
            bst->value = value;
        
        else if (bst->compar(bst->value, value) < 0) {
                if (bst->right == NULL)
                    bst->right = Bst_alloc(bst->compar);
                
                Bst_insert(bst->right, value);
            }
            else if (bst->compar(bst->value, value) > 0) {
                    if (bst->left == NULL)
                        bst->left = Bst_alloc(bst->compar);

                    Bst_insert(bst->left, value);
                }
    }
}

void *Bst_search(Bst *bst, void *value) {
    if(bst && value) {
        if(bst->value){
            if(bst->compar(bst->value, value) == 0);
                return bst->value;
        }
        else if(bst->compar(bst->value, value) < 0) {
            return Bst_search(bst->right, value);
        }
        else if(bst->compar(bst->value, value) > 0) {
            return Bst_search(bst->left, value);
        }
    }
    return NULL;
}

Bst  *Bst_remove(Bst *bst, void *value) {
    if(bst) {
        if(bst->compar(value, bst->value) < 0)
            bst->left = Bst_remove(bst->left, value);
        else if(bst->compar(value, bst->value) > 0)
            bst->right = Bst_remove(bst->right, value);
        else {
            if(bst->left == NULL) {
                Bst *aux = bst->right;
                free(bst);
                return aux;
            }
            else if(bst->right == NULL) {
                Bst *aux = bst->left;
                free(bst);
                return aux;
            }
            else {
                Bst *aux = Bst_min_value(bst->right);
                bst->value = aux->value;
                bst->right = Bst_remove(bst->right, aux->value);
            }
        }
    }
    return bst;
}

Bst  *Bst_min_value(Bst *bst) {
    Bst *aux = bst;
    while(aux && aux->left != NULL)
        aux = aux->left;
    return aux;
}

void Bst_print(Bst *bst, void (*print)(void*)) {
    if(bst) {
        Bst_print(bst->left, print);
        print(bst->value);
        Bst_print(bst->right, print);
    }
}