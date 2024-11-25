#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent a stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to perform push operation
void push(struct Stack *stack, int value) {
    // Check for stack overflow
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push %d.\n", value);
        return;
    }

    // Increment top and insert the element
    stack->arr[++stack->top] = value;
    printf("%d pushed to the stack.\n", value);
}

// Function to print the elements of the stack
void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; ++i) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    // Create a stack
    struct Stack stack;
    initialize(&stack);

    // Push some elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Display the elements of the stack
    display(&stack);

    return 0;
}
