typedef struct Stack Stack;

Stack *Stack_alloc(int size);
void Stack_free(Stack *s);
int Stack_isEmpty(Stack *s);
int Stack_isFull(Stack *s);
void Stack_push(int element, Stack *s);
int Stack_pop(Stack *s);
void Stack_Printf(Stack *s);
Stack *ordenada(Stack *a, Stack *b);