#include <stdio.h>
#include "List.h"

int cmpInt(void *a, void *b) {
  int *n1 = (int*) a;
  int *n2 = (int*) b;
  return *n1 - *n2;
}

void printInt(void *a) {
  int *n1 = (int*) a;
  printf("%d ", *n1);
}

int main() {
  List *l = List_alloc();
  int n[] = {4,8,2,6};
  int *r;
  
  List_insertSorted(l, &n[0], cmpInt);
  List_print(l, printInt);
  List_insertSorted(l, &n[1], cmpInt);
  List_print(l, printInt);
  List_insertSorted(l, &n[2], cmpInt);
  List_print(l, printInt);
  List_insertSorted(l, &n[3], cmpInt);
  List_print(l, printInt);
  
  r = (int*) List_remove(l , &n[1], cmpInt);
  printf("%d\n", *r);
  
  List_print(l, printInt);
  
  r = (int*) List_remove(l , &n[0], cmpInt);
  printf("%d\n", *r);
  
  List_print(l, printInt);
  
  List_free(l);
  
  return 0;
}
