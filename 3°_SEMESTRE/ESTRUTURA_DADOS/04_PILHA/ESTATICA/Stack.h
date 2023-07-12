typedef struct Stack Stack;

Stack *Stack_alloc(int size);
void Stack_free(Stack *s);
int Stack_isEmpty(Stack *s);
int Stack_isFull(Stack *s);
void Stack_Push(int element, Stack *s);
int Stack_Pop(Stack *s);
int Stack_Top(Stack *s);
void Stack_Printf(Stack *s);