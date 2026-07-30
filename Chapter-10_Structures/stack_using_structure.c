#include <stdio.h>

#define MAX 100

struct Stack {
    int data[MAX];
    int top;
};

void initStack(struct Stack *s) {
    s->top = -1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->data[(s->top)--];
}

int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->data[s->top];
}

int main() {
    struct Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element = %d\n", peek(&s));

    printf("Popped element = %d\n", pop(&s));
    printf("Popped element = %d\n", pop(&s));

    printf("Top element now = %d\n", peek(&s));

    return 0;
}
