typedef struct Stack Stack;

Stack *Stack_alloc(int size);
void Stack_push(Stack *s, char element);
char Stack_pop(Stack *s);
void Stack_printf(Stack *s);