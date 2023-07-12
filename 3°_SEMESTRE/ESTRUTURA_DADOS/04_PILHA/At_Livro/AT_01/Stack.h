typedef struct Stack Stack;

Stack *Stack_Alloc(int size);
void Stack_Free(Stack *s);
int Stack_isEmpty(Stack *s);
int Stack_isFull(Stack *s);
void Stack_Push(char letra, Stack *s);
void Stack_Pop(Stack *s);
void Stack_Printf(Stack *s);