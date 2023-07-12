#include <stdlib.h>
#include <stdio.h>
#include "Tree.h"

int main() {
  
  Tree *t = Tree_alloc('a', 
                      Tree_alloc('b',
                                  NULL,
                                  Tree_alloc('d',NULL,NULL)), 
                      Tree_alloc('c',
                                  Tree_alloc('e',NULL,NULL),
                                  Tree_alloc('f',NULL,NULL)));
  
  Tree_print(t);
  printf("\n");
  
  Tree_free(t);
  
  return 0;
}
