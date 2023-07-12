#include <stdio.h>
#include "Queue.h"

int main() {
    Queue *q = Queue_alloc(5);
    Queue_push(q, 4);
    Queue_push(q, 2);
    Queue_push(q, 9);
    Queue_push(q, 1);
    Queue_push(q, 8);
    Queue_push(q, 3);
    Queue_push(q, 7);
    
    printf("begin %d\n", Queue_begin(q));
    printf("end %d\n", Queue_end(q));
    
    Queue_print(q);
    
    printf("%d\n", Queue_pop(q));
    printf("%d\n", Queue_pop(q));
    printf("%d\n", Queue_pop(q));
    
    Queue_print(q);
    
    printf("%d\n", Queue_pop(q));
    printf("%d\n", Queue_pop(q));
    printf("%d\n", Queue_pop(q));
    
    Queue_print(q);
    
    Queue_free(q);
    return 0;
}
