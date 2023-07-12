#include <stdlib.h>
#include <stdio.h>
#include "Tree.h"

int findParent(Tree *t, int value, Tree *parent) {
  int aux = 0;
  
  if (t) {
    if (t->value == value){
      
      if (parent)
        return parent->value;
      else
        return 0;
        
    }
    else 
      return findParent(t->left, value, t) + findParent(t->right, value, t);

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
  
  printf("Parent = %d\n", findParent(t, 7, NULL));
  
  Tree_free(t);
  
  return 0;
}
