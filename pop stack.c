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

// Function to perform pop operation
int pop(struct Stack *stack) {
    // Check for stack underflow
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack.\n");
        return -1; // Assuming -1 as an error value
    }

    // Retrieve and return the top element
    int value = stack->arr[stack->top--];
    return value;
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
    stack.arr[++stack.top] = 10;
    stack.arr[++stack.top] = 20;
    stack.arr[++stack.top] = 30;

    // Display the elements of the stack
    printf("Before pop:\n");
    display(&stack);

    // Pop an element from the stack
    int poppedValue = pop(&stack);
    if (poppedValue != -1) {
        printf("Popped value: %d\n", poppedValue);
    }

    // Display the elements of the stack after popping
    printf("After pop:\n");
    display(&stack);

    return 0;
}
