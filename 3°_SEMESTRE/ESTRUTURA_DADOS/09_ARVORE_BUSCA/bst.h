#include <stdio.h>
#include <stdlib.h>

typedef struct Bst Bst;

Bst  *Bst_alloc(int (*compar) (void*, void*));
void  Bst_free(Bst *bst);
void  Bst_insert(Bst *bst, void *value);
void *Bst_search(Bst *bst, void *value);
Bst  *Bst_remove(Bst *bst, void *value);
void  Bst_print(Bst *bst, void (*print) (void*));
Bst  *Bst_min_value(Bst *bst);