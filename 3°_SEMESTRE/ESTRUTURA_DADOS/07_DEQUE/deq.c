#include "deq.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    void *value;
    Node *next;
    Node *prev;
}Node;

typedef struct DEQ {
    int lenght;
    Node *first;
    Node *last;
}DEQ;

DEQ *Deq_alloc() {
    DEQ *d = (DEQ*) malloc(sizeof(DEQ));
    if(d) {
        d->lenght = 0;
        d->first = NULL;
        d->last = NULL;
        return d;
    }
    return NULL;
}

void  DEQ_free(DEQ *d) {
    if(d) {
        Node *aux = NULL;
        Node *current = d->first;
        while(current) {
            aux = current;
            current = current->next;
            free(aux);
        }
        free(d);
    }
}

int   DEQ_isEmpty(DEQ *d) {
    if(d->first == NULL && d->lenght == 0)
        return TRUE;
    return FALSE;
}

void  DEQ_pushFront(DEQ *d, void *value) {
    if(d) {
        Node *new = (Node*) malloc(sizeof(Node));
        new->next = NULL;
        new->prev = NULL;
        new->value = value;
        if(DEQ_isEmpty(d)) {
            d->first = d->last = new;
        }
        else {
            new->next = d->first;
            d->first->prev = new;
            d->first = new;
        }
        d->lenght++;
    }
}

void  DEQ_pushBack(DEQ *d, void *value) {
    if(d) {
        Node *new = (Node*) malloc(sizeof(Node));
        new->next = NULL;
        new->prev = NULL;
        new->value = value;
        if(DEQ_isEmpty(d)) {
            d->first = d->last = new;
        }
        else {
            new->prev = d->last;
            d->last->next = new;
            d->last = new;
        }
    }
}

void *DEQ_popFront(DEQ *d) {
    if(d && d->lenght != 0) {
        void *value = d->first->value;
        Node *temp = d->first;
        d->first = d->first->next;
        if(d->first)
            d->first->prev = NULL;
        else
            d->last = NULL;
        free(temp);
        d->lenght--;
        return value;
    }
    return NULL;
}

void *DEQ_popBack(DEQ *d) {
    if(d && d->lenght != 0) {
        void *value = d->last->value;
        Node *temp = d->last;
        d->last = d->last->prev;
        if(d->last)
            d->last->next = NULL;
        else
            d->first = NULL;
        d->lenght--;
        return value;
    }
    return NULL;
}

void *DEQ_popSearch(DEQ *d, void *value, int (*cmp) (void*, void*)) {
    if(d && d->lenght != 0) {
        Node *current = d->first;
        void *valueAux = NULL;
        while(current) {
            if(cmp(current->value, value ) == 0) {
                valueAux = current->value;
                Node *nodeAux = current->next;
                if(current == d->first) {
                    d->first = d->first->next;
                    if(d->first) 
                        d->first->prev = NULL;
                    else
                        d->last = NULL;
                }
                else if (current == d->last) {
                    d->last = d->last->prev;
                    if(d->last)
                        d->last->next = NULL;
                    else
                        d->first = NULL;
                }
                else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                d->lenght--;
                free(current);
                current = nodeAux;
            }
            else
                current = current->next;
        }
        return valueAux;
    }
    return NULL;
}

void  DEQ_print(DEQ *d, void (*print)(void*)) {
    if(d) {
        Node *aux = NULL;
        aux = d->first;
        printf("DEQ SIZE(%d): ", d->lenght);
        printf("NULL <->");
        while(aux) {
            print(aux->value);
            aux = aux->next;
        }
        printf(" NULL\n");
    }
}