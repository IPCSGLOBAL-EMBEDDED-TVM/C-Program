#include <stdio.h>

#define MAX 100

struct Queue {
    int data[MAX];
    int front;
    int rear;
};

void initQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue *q) {
    return q->front == -1;
}

int isFull(struct Queue *q) {
    return q->rear == MAX - 1;
}

void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue overflow\n");
        return;
    }
    if (isEmpty(q))
        q->front = 0;
    q->data[++(q->rear)] = value;
}

int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        return -1;
    }
    int value = q->data[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front++;
    return value;
}

int main() {
    struct Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Dequeued element = %d\n", dequeue(&q));
    printf("Dequeued element = %d\n", dequeue(&q));

    enqueue(&q, 40);
    printf("Dequeued element = %d\n", dequeue(&q));
    printf("Dequeued element = %d\n", dequeue(&q));

    return 0;
}
