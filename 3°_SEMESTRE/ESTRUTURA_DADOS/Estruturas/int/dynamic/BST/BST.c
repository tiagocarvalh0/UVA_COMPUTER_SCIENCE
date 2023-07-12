#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

BST *BST_alloc() {
  BST *bst = malloc(sizeof(BST));
  if (bst) {
    bst->value = 0;
    bst->left = NULL;
    bst->right = NULL;
  }
  return bst;
}

void BST_free(BST *bst) {
  if (bst) {
    BST_free(bst->left);
    BST_free(bst->right);
    free(bst);
  }
}

void BST_insert(BST *bst, int value) {
  
  if (bst && value) {
    if (bst->value == 0) {
      bst->value = value;
    }
    else {
      if (bst->value > value) {
        if (bst->left == NULL) {
          bst->left = BST_alloc();
          bst->left->value = value;
        }
        else {
          BST_insert(bst->left, value);
        }
      }
      else if (bst->value < value) {
        if (bst->right == NULL) {
          bst->right = BST_alloc();
          bst->right->value = value;
        }
        else {
          BST_insert(bst->right, value);
        }
      }
    }
  }
}

void BST_print(BST *bst) {
  if (bst) {
    BST_print(bst->left);
    printf("%d ", bst->value);
    BST_print(bst->right);
  }
}

BST *BST_search(BST *bst, int value) {
  if (bst) {
    if (bst->value == value) {
      return bst;
    }
    else if (bst->value > value){
      return BST_search(bst->left, value);
    }
    else {
      return BST_search(bst->right, value);
    }
  }
  
  return NULL;
}

BST *BST_remove(BST *bst, int value, BST *parent) {
  BST *q = NULL, *p = NULL, *aux = NULL;
  
  if (bst && value) {
    if (bst->value == value) {
      
      if (bst->left == NULL) {
        aux = bst->right;
        free(bst);
        return aux;
      }
      else if (bst->right == NULL) {
        aux = bst->left;
        free(bst);
        return aux;
      }
      else {
        p = bst;
        q = bst->left;
        while (q->right) {
          p = q;
          q = q->right;
        }
        
        // quando p não é a raiz
        if (p != bst) {
          p->right = q->left; //p->right = f
          q->left = bst->left;
        }
        
        q->right = bst->right;
        
        free(bst);
        return q;
      }
    }
    else {
      if (bst->value > value) {
        bst->left = BST_remove(bst->left, value, bst);
      }
      else {
        bst->right = BST_remove(bst->right, value, bst);
      }
      
      return bst;
    }
  }
  
  return NULL;
}

