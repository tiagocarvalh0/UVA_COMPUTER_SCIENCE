
#include <stdio.h>
#include <stdlib.h>

typedef struct List List;
typedef struct Node Node;

List *List_alloc();

void List_free(List *l);

void List_insertFirst(List *l, void *value);
void List_insertLast(List *l, void *value);

void *List_removeFirst(List *l);
void *List_removeLast(List *l);
void *List_removeSearch(List *l, void *value, int (*cmp) (void*,void*));

int List_checkLast(List *l);
int List_checkSize(List *l);

void List_print(List *l, void (*print) (void *));


int cmp(void *x, void *y) {
    return (*(int*)x) - (*(int*)y);
}

void print(void *value) {
    int x = *(int*)value;
    printf("%d, ", x);
}

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

void List_free(List *l) {
  Node *n = NULL;
  Node *next = NULL;
  
  if (l) {
    n = l->first;
    
    while (n) {
      next = n->next;
      free(n);
      n = next;
    }
    
    free(l);
  }
}

void List_insertFirst(List *l, void *value) {
    Node *new = (Node*) malloc(sizeof(Node));
    if(l) {
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
    Node *new = (Node*) malloc(sizeof(Node));
    if(l) {
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
    Node *aux = l->first;
    if(l->length) {
        while(aux) {
            if(cmp(aux->value, value) == 0) {

            }
        }
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

void List_print(List *l, void (*print) (void *)) {
    Node *n = NULL;
    if(l) {
        n = l->first;
        //printf("LSize(%d): ", l->length);
        while(n->next) {
            print(n->value);
            n = n->next;
        }
        //printf("NULL\n");
        //printf("\n");
    }
}

int main() {  
    int num = -1;
    while(1) {
        scanf("%d", &num);
        if(num == 0)
            break;
        List *l = List_alloc();
        List *d = List_alloc();
        for(int i = 1; i <= num; i++) {
            int *x = (int*)malloc(sizeof(int));
            *x = i;
            List_insertLast(l, x);
        }
        while(1) {
            int aux = List_checkSize(l);
            if(aux < 2) 
                break;
            List_insertLast(d, List_removeFirst(l));
            List_insertLast(l, List_removeFirst(l));
        }
        printf("Discarded cards: ");
        List_print(d, print);
        printf("%d\n", List_checkLast(d));

        printf("Remaining card: ");
        List_print(l, print);
        printf("%d\n", List_checkLast(l));

        List_free(l);
        List_free(d);
    }

    return 0;
}