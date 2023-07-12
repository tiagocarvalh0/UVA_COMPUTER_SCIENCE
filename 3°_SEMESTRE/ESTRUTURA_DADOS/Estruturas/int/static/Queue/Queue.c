#include <stdlib.h>
#include <stdio.h>
#include "Queue.h"

struct Queue {
    int size;
    int begin;
    int end;
    int elements[MAX_ELEMENTS];
};

Queue *Queue_alloc() {
    Queue *q = malloc(sizeof(Queue));
    
    if (q) {
        q->size = 0;
        q->begin = -1;
        q->end = -1;
    }
    
    return q;
}

void Queue_free(Queue *q) {
    if(q)
        free(q);
}

int Queue_isEmpty(Queue *q) {
    if (q) {
        return q->begin == -1 && q->end == -1;
    }
    
    return 1;
}

int Queue_next(Queue *q, int index) {
    if (q && index >= 0)
        return (index + 1) % MAX_ELEMENTS;
    
    return 0;
}

int Queue_isFull(Queue *q) {
   if (q) 
       return Queue_next(q, q->end) == q->begin; 
   
   return 0;
}

void Queue_push(Queue *q, int el) {
    if (q) {
        if (!Queue_isFull(q)) {
            if (Queue_isEmpty(q))
                q->begin = 0;
            
            q->end = Queue_next(q, q->end);
            
            q->elements[q->end] = el;
            q->size++;
        }
    }
}

void Queue_print(Queue *q) {
    int i;
    if (q) {
        printf("Queue(%d): ", q->size);
        if (q->size > 0) {
            for (i=q->begin; i != q->end; i = Queue_next(q, i)) {
                printf("[%d]->", q->elements[i]);
            }
            printf("[%d]", q->elements[q->end]);
        }
        printf("\n");
    }
}

int Queue_pop(Queue *q) {
    int el = 0;
    
    if (q) {
        if (!Queue_isEmpty(q)) {
            el = q->elements[q->begin];
            
            if (q->begin == q->end) {
                q->begin = -1;
                q->end = -1;
            }
            else
                q->begin = Queue_next(q, q->begin);            
            
            q->size--;
        }
    }
    
    return el;
}

int Queue_begin(Queue *q) {
    if (q){
        if (!Queue_isEmpty(q))
            return q->elements[q->begin];
    }
    return 0;
}

int Queue_end(Queue *q) {
    if (q){
        if (!Queue_isEmpty(q))
            return q->elements[q->end];
    }
    return 0;
}









