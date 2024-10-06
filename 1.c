#include <stdio.h>

#define MAX 5 

char queue[MAX];
int front = 0;
int rear = -1;
int size = 0;

int isFull() {
    return size == MAX;
}

int isEmpty() {
    return size == 0;
}

void enqueue(char value) {
    if (isFull()) {
        printf("Queue is full!\n");
    } else {
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        size++;
        printf("Enqueued '%c'\n", value);
    }
}

char dequeue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return '\0';
    } else {
        char value = queue[front];
        front = (front + 1) % MAX;
        size--;
        printf("Dequeued '%c'\n", value);
        return value;
    }
}

void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue: ");
        for (int i = 0; i < size; i++) {
            int index = (front + i) % MAX;
            printf("%c ", queue[index]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    char value;

    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Exit\nChoose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a character to enqueue: ");
                scanf(" %c", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);
    return 0;
}
