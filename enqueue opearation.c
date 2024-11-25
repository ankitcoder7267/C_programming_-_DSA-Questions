#include <stdio.h>
#define MAX_SIZE 50

// Structure to represent a queue
struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

// Function to initialize the queue
void initialize(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(struct Queue *queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to perform enqueue operation
void enqueue(struct Queue *queue, int value) {
    // Check for queue overflow
    if (isFull(queue)) {
        printf("Queue overflow! Cannot enqueue %d.\n", value);
        return;
    }

    // If the queue is empty, set both front and rear to 0
    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        // Increment rear and insert the element
        queue->rear++;
    }

    queue->arr[queue->rear] = value;
    printf("%d enqueued to the queue.\n", value);
}

// Function to print the elements of the queue
void display(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = queue->front; i <= queue->rear; ++i) {
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main() {
    // Create a queue
    struct Queue queue;
    initialize(&queue);

    // Enqueue some elements into the queue
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    enqueue(&queue, 60);

    // Display the elements of the queue
    display(&queue);

    return 0;
}
