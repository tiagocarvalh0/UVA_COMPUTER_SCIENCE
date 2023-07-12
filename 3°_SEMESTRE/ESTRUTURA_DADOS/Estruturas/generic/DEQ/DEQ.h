typedef struct DEQ DEQ;
typedef struct DEQNode DEQNode;

struct DEQNode {
	void *value;
	DEQNode *prev, *next;
};

struct DEQ {
	int length;
	DEQNode *front,*back;
};

DEQ  *DEQ_alloc();
void  DEQ_free(DEQ *d);
void  DEQ_pushFront(DEQ *d, void *value);
void  DEQ_pushBack(DEQ *d, void *value);
void *DEQ_popFront(DEQ *d);
void *DEQ_popBack(DEQ *d);
void  DEQ_print(DEQ *d, void (*print)(void*));
