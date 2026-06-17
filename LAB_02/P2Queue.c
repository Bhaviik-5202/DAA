#include <stdio.h>

#define MAX 10

int QUEUE[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    int value;
    printf("Enter Element : ");
    scanf("%d", &value);

    if (front == -1) {
        front = 0;
    }

    rear++;
    QUEUE[rear] = value;

    printf("EnQueued Element : %d\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }

    int value = QUEUE[front];

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }

    printf("DeQueued Element : %d\n", value);
}

void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue Elements : ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", QUEUE[i]);
    }

    printf("\n");
}

int main() {
    int OP;

    while (1) {
        printf("\n");
        printf("1. EnQueue\n");
        printf("2. DeQueue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &OP);

        switch (OP) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Enter Valid Choice!\n");
        }
    }

    return 0;
}