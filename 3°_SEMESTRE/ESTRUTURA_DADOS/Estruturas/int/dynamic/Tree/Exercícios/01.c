#include <stdlib.h>
#include <stdio.h>
#include "Tree.h"

int evaluate(Tree *t) {
  if (t) {
    if (t->left == NULL && t->right == NULL){
      return t->value - '0';
    }
    else {
      switch(t->value) {
        case '+': return evaluate(t->left) + evaluate(t->right);
        case '-': return evaluate(t->left) - evaluate(t->right);
        case '*': return evaluate(t->left) * evaluate(t->right);
        case '/': return evaluate(t->left) / evaluate(t->right);
      }
    }
  }
  return 0;
}

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
  
  Tree_print(t);
  printf("\n");
  
  printf("= %d\n", evaluate(t));
  
  Tree_free(t);
  
  return 0;
}
