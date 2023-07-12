#define MAX_ELEMENTS 1000

typedef struct Stack Stack;

Stack *Stack_alloc();
void   Stack_free(Stack *s);
int    Stack_isEmpty(Stack *s);
int    Stack_isFull(Stack *s);
void   Stack_push(Stack *s, int el);
int    Stack_pop(Stack *s);
int    Stack_top(Stack *s);

void   Stack_print(Stack *s);


