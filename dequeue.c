#include <stdio.h>
#define MAX_SIZE 100

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

void initialize(struct Queue *queue) {
    queue->front = queue->rear = -1;
}

int isEmpty(struct Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

int isFull(struct Queue *queue) {
    return (queue->rear == MAX_SIZE - 1);
}

void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue overflow! Cannot enqueue %d.\n", value);
        return;
    }

    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear++;
    }

    queue->arr[queue->rear] = value;
    printf("%d enqueued to the queue.\n", value);
}

int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow! Cannot dequeue from an empty queue.\n");
        return -1;
    }

    int value = queue->arr[queue->front];

    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front++;
    }

    return value;
}

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
    struct Queue queue;
    initialize(&queue);

    enqueue(&queue, 30);
    enqueue(&queue, 20);
    enqueue(&queue, 10);

    printf("Before dequeue:\n");
    display(&queue);

    int dequeuedValue = dequeue(&queue);
    if (dequeuedValue != -1) {
        printf("Dequeued value: %d\n", dequeuedValue);
    }

    printf("After dequeue:\n");
    display(&queue);

    return 0;
}
