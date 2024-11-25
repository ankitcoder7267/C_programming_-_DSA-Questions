#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack 
{
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) 
{
    stack->top = -1;
}

// Function to check if the stack is empty
int is_empty(struct Stack *stack) 
{
    return stack->top == -1;
}

// Function to check if the stack is full
int is_full(struct Stack *stack) 
{
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value)
 {
    if (is_full(stack)) {
        printf("Error: Stack is full. Cannot push %d\n", value);
        return;
    }
    
    stack->items[++stack->top] = value;
    printf("Pushed: %d\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (is_empty(stack)) {
        printf("Error: Stack is empty. Cannot pop\n");
        return -1; // Return a special value indicating an error
    }

    int popped_item = stack->items[stack->top--];
    printf("Popped: %d\n", popped_item);
    return popped_item;
}

// Function to get the top element of the stack without popping
int peek(struct Stack *stack)
 {
    if (is_empty(stack))
     {
        printf("Error: Stack is empty. Cannot peek\n");
        return -1; // Return a special value indicating an error
    }

    return stack->items[stack->top];
}

int main() 
{
    struct Stack stack;
    initialize(&stack);

    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    printf("Peek: %d\n", peek(&stack));

    pop(&stack);
    pop(&stack);
    pop(&stack);

    pop(&stack); // Attempting to pop from an empty stack

    return 0;
}
