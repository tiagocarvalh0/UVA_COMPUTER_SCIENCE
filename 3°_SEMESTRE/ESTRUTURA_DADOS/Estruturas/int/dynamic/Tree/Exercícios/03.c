#include <stdlib.h>
#include <stdio.h>
#include "Tree.h"

int heigh(Tree *t) {
  int heighLeft = 0, heighRight = 0;
  if (t) {
    heighLeft = heigh(t->left);
    heighRight = heigh(t->right);
    
    if (heighLeft > heighRight)
      return heighLeft + 1;
    
    return heighRight + 1;
  }
  return 0;
}

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
  
  printf("Altura = %d\n", heigh(t));
  
  Tree_free(t);
  
  return 0;
}
