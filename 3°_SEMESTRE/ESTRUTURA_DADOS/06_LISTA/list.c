#include "list.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    void *value;
    Node *next;
}Node;

typedef struct List {
    int length;
    Node *first;
    Node *last;
}List;

List *List_alloc() {
    List *l = (List*) malloc(sizeof(List)); 
    if(l) {
        l->length = 0;
        l->first = NULL;
        l->last = NULL;
    }
    return l;
}

List *List_clone(List *l) { 
    if(l) {
        Node *current = l->first;
        Node *aux = NULL;
        List *cpy = List_alloc();
        if(l->first == NULL)
            return cpy;
        else {
            while(current) {
                Node *new = (Node*) malloc(sizeof(Node));
                new->next = NULL;
                new->value = current->value;
                
                if(aux == NULL) {
                    cpy->first = new;
                    aux = new;
                }
                else {
                    aux->next = new;
                    aux = aux->next;
                }
                current = current->next;
            }
            cpy->last = aux;
            cpy->length = l->length;
        }

        return cpy;
    }
    return NULL;
}

void List_free(List *l) {
  Node *current = NULL;
  Node *next = NULL;
  
  if (l) {
    current = l->first;
    
    while (current) {
      next = current->next;
      free(current);
      current = next;
    }
    
    free(l);
  }
}

void List_insertFirst(List *l, void *value) {
    if(l) {
        Node *new = (Node*) malloc(sizeof(Node)); 
        new->value = value;
        new->next = NULL;

        if(l->length > 0)       
            new->next = l->first;
        l->first = new;
        if(l->length == 0)
            l->last = new;
        l->length++; 
    }
}

void List_insertLast(List *l, void *value) {
    if(l) {
        Node *new = (Node*) malloc(sizeof(Node));
        new->value = value;
        new->next = NULL;
        if(l->first == NULL)
            l->first = l->last = new;
        else {
            l->last->next = new;
            l->last = l->last->next;
        }
        l->length++;
    }
}

void List_insertSorted(List *l, void *value, int (*cmp) (void*,void*)) {
    if(l) {
        Node *prev = NULL;
        Node *current = l->first;
        Node *new = (Node*)malloc(sizeof(Node));
        new->value = value;
        new->next = NULL;

        if(l->length == 0) {
            l->first = l->last = new;
        }
        else {
            while(current) {
                if(cmp(current->value, value) < 0)
                    break;
                prev = current;
                current = current->next;
            }
            if(prev)
                prev->next = new;
            else
                l->first = new;
            
            new->next = current;

            if(current == NULL)
                l->last  =new;
        }
        l->length++;
    }
}

void List_insertPosition(List *l, void *value, int position) {
    if(l && (position <= l->length)) {
        Node *new = (Node*) malloc(sizeof(Node));
        new->value = value;
        new->next = NULL;
        Node *prev = NULL;
        Node *current = l->first;
        if(l->first == NULL) 
            l->first = l->last = new;
        else {
            for(int i = 0; i < position; i++) {
                prev = current;
                current = current->next;
            }
            if(prev) {
                prev->next = new;
                new->next = current;
            }
            else {
                l->first = new;
                new->next = current;
            }
        }   
        l->length++;
    }
}

void *List_removeFirst(List *l) {
    if(l && l->first) {
        Node *aux = l->first;
        void *value = aux->value;
        l->first = aux->next;
        if(l->first == NULL)
            l->last = NULL;
        free(aux);
        l->length--;
        return value;
    }
    return NULL;
}

void *List_removeLast(List *l) {
    if(l && l->last) {
        Node *aux = l->last;
        void *value = aux->value;
        if(l->length <= 1) {
            l->first = NULL;
            l->last = NULL;
        }
        else {
            Node *currentNode = l->first;
            Node *previousNode = NULL;
            while (currentNode->next) {
                previousNode = currentNode;
                currentNode = currentNode->next;
            }
            previousNode->next = NULL;
            l->last = previousNode;
        }
        l->length--;
        free(aux);
        return value;
    }
    return NULL;
}

void *List_removeSearch(List *l, void *value, int (*cmp) (void*,void*)) {
    if(l && l->first) {
        Node *prev = NULL;
        Node *pos = l->first;
        void *aux = NULL;
        while(pos) {
            if(cmp(pos->value, value) == 0) {
                if(prev == NULL)
                    l->first = pos->next;
                else
                    prev->next = pos->next;
                aux = pos->value;
                free(pos);
                l->length--;
                break;
            }
            prev = pos;
            pos = pos->next;
        }
        return aux;
    }
    return NULL;
}

void  List_removeSearchAll(List *l, void *value, int (*cmp) (void*,void*)) {
    if(l) {
        Node *prev = NULL;
        Node *current = l->first;
        while(current) {
            if(cmp(current->value, value) == 0) {
                if(prev == NULL) { 
                    l->first = current->next;
                    Node *temp = current;
                    current = current->next;
                    free(temp);
                }
                else {
                    prev->next = current->next;
                    Node *temp = current;
                    current = current->next;
                    free(temp);
                }
                l->length--;
            }
            else {
                prev = current;
                current = current->next;
            }
        }
    }
}

int List_checkFirst(List *l) {
    if(l) {
        int aux = *((int*)l->first->value);
        return aux;
    }
}

int List_checkLast(List *l) {
    if(l) {
        int aux = *((int*)l->last->value);
        return aux;
    }
}

int List_checkSize(List *l) {
    return l->length;
}

void List_invertOrder(List *l) {
    if(l) {
        Node *current = l->first;
        Node *previous = NULL;
        Node *next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        // Após percorrer toda a lista, atualizamos o first e o last da lista invertida.
        l->last = l->first;
        l->first = previous;
    }
}

void List_concatenate(List *l, List *d) {
    int tam = d->length;
    for(int i = 0; i < tam; i++)
        List_insertLast(l, List_removeFirst(d));
}

void List_print(List *l, void (*print) (void *)) {
    Node *n = NULL;
    if(l) {
        n = l->first;
        printf("LSize(%d): ", l->length);
        while(n) {
            print(n->value);
            n = n->next;
        }
        printf("NULL\n");
    }
}