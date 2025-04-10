#include <stdio.h>
#define SIZE 5
int queue[SIZE],front = -1,rear = -1;

void enQueue(int value)
{
    if (rear == SIZE - 1)
        {
            printf("Queue is FULL. Insertion is not possible.\n");
        }
    else
        {
            if (front == -1) front = 0; queue[++rear] = value;
             printf("Inserted %d into queue.\n", value);
        }
}

void deQueue()
{
if (front == -1 || front > rear)
    {
        printf("Queue is EMPTY! Deletion is not possible.\n");
    }
else
    {
        printf("Deleted element: %d\n", queue[front++]); if (front > rear) front = rear = -1;
    }
}

void display()
{
if (front == -1 || front > rear)
    {
        printf("Queue is EMPTY.\n");
    }
else
    {
       printf("Queue elements: ");
       for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
       printf("\n");
    }
}

int main()
{
int choice, value;
while (1)
 {
  printf("\nQueue Operations:\n");
  printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n"); printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice)
   {
    case 1:
        printf("Enter value to insert: "); scanf("%d", &value); enQueue(value);
        break;
    case 2:
        deQueue();
        break;
    case 3:
        display();
        break;
    case 4:
        return 0;
    default:
        printf("Invalid choice! Please try again.\n");
  }
 }
}
