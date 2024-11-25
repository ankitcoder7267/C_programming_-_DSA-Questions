#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1; // Initialize the top of the stack to -1

// Function to push an element onto the stack
void push(int item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow. Cannot push %d onto the stack.\n", item);
    } else {
        stack[++top] = item;
        printf("%d pushed onto the stack.\n", item);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        return -1;
    } else {
        int item = stack[top--];
        return item;
    }
}

// Function to display the elements of the stack
void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    while (true) {
        printf("\nStack Operations\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                item = pop();
                if (item != -1) {
                    printf("%d popped from the stack.\n", item);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
