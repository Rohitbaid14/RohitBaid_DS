#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertAtEnd(int);
void display();
void removeBeginning();

struct Node
{
   int data;
   struct Node *next;
}
*front = NULL,
*rear = NULL;

void main()
{
   int choice,value;
   while(1)
    {
        mainMenu: printf("\n\n1. EnQueue\n2. DeQueue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d",&value);
                insertAtEnd(value);
                break;

            case 2:
                removeBeginning();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nWrong input Try again \n\n");
         }
    }
}


void insertAtEnd(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(front == NULL)
   front = rear = newNode;

   else
   {
      rear->next = newNode;
      rear = newNode;
   }
   printf("\nOne node inserted!!!\n");
}

void removeBeginning()
{
   if(front == NULL)
   printf("\n\nQueue is Empty!!!");
   else
   {
      struct Node *temp = front;
      if(front->next == NULL)
      {
    front = NULL;
    free(temp);
      }
      else
      {
   front = temp->next;
   free(temp);
   printf("\nOne node deleted\n\n");
      }
   }
}

void display()
{
   if(front == NULL)
   {
      printf("\nQueue is Empty\n");
   }
   else
   {
      struct Node *temp = front;
      printf("\n\nQueue elements are - \n");
      while(temp->next != NULL)
      {
    printf("%d --->",temp->data);
    temp = temp->next;
      }
      printf("%d --->NULL",temp->data);
   }
}
