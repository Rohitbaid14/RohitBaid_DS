#include<stdio.h> #include<stdlib.h>

#define SIZE 5


void enQueue(int); void deQueue(); void display();

int cQueue[SIZE], front = -1, rear = -1;


void main() {
int choice, value; while (1) {
printf("\nSelect One:");

printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit"); printf("\nEnter your choice: ");
scanf("%d", &choice);


switch (choice) { case 1:
printf("\nEnter a value to be inserted: "); scanf("%d", &value);
enQueue(value); break;
case 2:
deQueue(); break;
case 3:
display(); break;
case 4:
exit(0); default:
printf("Invalid Choice!! Try Again.");
}
}
}


void enQueue(int value) {
if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) { printf("\nQueue is Full! Insertion is not possible.\n");
} else {
if (rear == SIZE - 1 && front != 0) { rear = 0;
} else {
rear = (rear + 1) % SIZE;
}
cQueue[rear] = value;

printf("\nValue Inserted\n"); if (front == -1) {
front = 0;
}
}
}


void deQueue() {
if (front == -1) {
printf("\nQUEUE IS EMPTY, Deletion is not possible.\n");
} else {
printf("\nDeleted element: %d\n", cQueue[front]); if (front == rear) {
front = rear = -1;
} else {
front = (front + 1) % SIZE;
}
}
}


void display() {
if (front == -1) {
printf("\nCIRCULAR QUEUE IS EMPTY\n");
} else {
int i = front;
printf("\nCircular Queue Elements are:\n"); if (front <= rear) {
while (i <= rear) { printf("%d\t", cQueue[i++]);
}
} else {
while (i < SIZE) { printf("%d\t", cQueue[i++]);
}

i = 0;
while (i <= rear) { printf("%d\t", cQueue[i++]);
}
}
printf("\n");
}
}

