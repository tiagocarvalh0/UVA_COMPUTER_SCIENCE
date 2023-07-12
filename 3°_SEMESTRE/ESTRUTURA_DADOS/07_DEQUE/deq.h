#define TRUE 1
#define FALSE 0

typedef struct Node Node;
typedef struct DEQ DEQ;

DEQ  *Deq_alloc();
void  DEQ_free(DEQ *d);
int   DEQ_isEmpty(DEQ *d);

void  DEQ_pushFront(DEQ *d, void *value);
void  DEQ_pushBack(DEQ *d, void *value);
void *DEQ_popFront(DEQ *d);
void *DEQ_popBack(DEQ *d);
void *DEQ_popSearch(DEQ *d, void *value, int (*cmp) (void*, void*));
void  DEQ_print(DEQ *d, void (*print)(void*));
