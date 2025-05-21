/*
    ADT Stack
    Htoo Myat
    5/20/2025
*/

#include <stdio.h>
#define MAX_LENGTH 100
#define EMPTY -1
#define FULL (MAX_LENGTH - 1)

typedef struct stack {
    char stack[MAX_LENGTH];
    int top;
} stack;

void reset(stack *stk) {
    stk->top = EMPTY;
}

void push(char c, stack *stk) {
    stk->top++;
    stk->stack[stk->top] = c;
}

char pop(stack *stk) {
    return stk->stack[stk->top--];
}

char top(stack *stk) {
    return stk->stack[stk->top];
}

int is_empty(stack *stk) {
    return stk->top == EMPTY;
}

int is_full(stack *stk) {
    return stk->top == FULL;
}

int main(void)
{
    stack stack_of_char;
    char *str = "I am otto am I";
    char str_back[20];
    int i = 0;
    reset(&stack_of_char);
    printf("Original is: %s\n", str);
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        push(str[i++], &stack_of_char);
    }
    i = 0;
    while (!is_empty(&stack_of_char)&& i<20)
    {
        str_back[i++] = pop(&stack_of_char);
    }
    printf("Reverse is: %s\n", str_back);
    printf("\n\n");
    
    return 0;
}