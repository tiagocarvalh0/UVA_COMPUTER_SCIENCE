#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

int main() {
  BST *b = BST_alloc();
  
  BST_insert(b, 4);
  BST_insert(b, 2);
  BST_insert(b, 3);
  BST_insert(b, 1);
  BST_insert(b, 9);
  BST_insert(b, 7);
  BST_insert(b, 15);
  BST_insert(b, 6);
  BST_insert(b, 8);
  BST_insert(b, 12);
  BST_insert(b, 17);
  
  BST_print(b);
  printf("\n");
  
  BST *node = BST_search(b, 5);
  BST_print(node);
  printf("\n");
  
  b = BST_remove(b, 9, NULL);
  BST_print(b);
  printf("\n");
  
  BST_free(b);
  return 0;
}
