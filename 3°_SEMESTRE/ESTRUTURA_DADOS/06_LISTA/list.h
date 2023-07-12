typedef struct List List;
typedef struct Node Node;

List *List_alloc(); //OK
List *List_clone(List *l); // OK

void List_free(List *l); //OK

void List_insertFirst(List *l, void *value); //OK
void List_insertLast(List *l, void *value); //OK
void List_insertSorted(List *l, void *value, int (*cmp) (void*,void*)); //OK
void List_insertPosition(List *l, void *value, int position);


void *List_removeFirst(List *l); //OK
void *List_removeLast(List *l); //OK
void *List_removeSearch(List *l, void *value, int (*cmp) (void*,void*)); //OK
void  List_removeSearchAll(List *l, void *value, int (*cmp) (void*,void*)); //OK

int List_checkFirst(List *l); //OK
int List_checkLast(List *l); //OK
int List_checkSize(List *l); //OK

void List_invertOrder(List *l); // OK
void List_concatenate(List *l, List *d);


void List_print(List *l, void (*print) (void *)); //Ok

