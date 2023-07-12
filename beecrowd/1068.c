#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
	int size;
	int top;
	int elements[1000];
}Stack;

Stack *Stack_alloc();
int    Stack_isEmpty(Stack *s);
void   Stack_push(Stack *s, int el);
void   Stack_pop(Stack *s);
void   Stack_print(Stack *s);

int main() {

	char string[1000];
	Stack *s = Stack_alloc();
	scanf("%s", string);
	
	int i = 0;
	while(string[i] != '\0') {
		if(string[i] == '(')
			Stack_push(s, string[i]);
		if(string[i] == ')') {
			if(Stack_isEmpty(s) == 0) 
				Stack_pop(s);	
		}	
		//Stack_print(s);
		i++;
	}
	if(Stack_isEmpty(s) == 0)
		printf("correct\n");
	else
		printf("incorrect\n");

	return 0;
}

Stack *Stack_alloc() {
	Stack *s = (Stack*) malloc(sizeof(Stack));
	if(s) {
		s->size = 0;
		s->top = -1;
	}
	return s;
}
int Stack_isEmpty(Stack *s) {
	if(s->size <= 0)
		return 0;
	return 1;
}
void Stack_push(Stack *s, int el) {
	if(s) {
		s->size++;
		s->top++;
		s->elements[s->top] = el;
	}
}
void Stack_pop(Stack *s) {
	if(s) {
		s->size--;
		s->top--;
	}
}

void Stack_print(Stack *s) {
    int i;
    if (s) {
        for (i=s->top; i>=0; i--)
            printf(" %c\n", s->elements[i]);
    }
}
