typedef struct Stack Stack;

Stack *Stack_alloc(int size);
void   Stack_free(Stack *s);
int    Stack_isEmpty(Stack *s);
int    Stack_isFull(Stack *s);

void   Stack_push(Stack *s, void *el);
void  *Stack_pop(Stack *s);
void  *Stack_top(Stack *s);

void   Stack_print(Stack *s, void (*print)(void*));


