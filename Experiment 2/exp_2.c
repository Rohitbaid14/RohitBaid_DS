#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

void push(int);
void pop();
void display();

void main()
{
    int choice,value;
    while(1)
    {
            printf("\n\t\tMenu\t\t\n");
            printf("Select from the given options\n");
            printf("Option 1: Insert an element\nOption 2: Delete an element\nOption 3: Display array.\nOption 4: Exit the program.\n");
            scanf("%d",&choice);

    switch(choice)
    {
        case 1:
           printf("Enter value to insert: ");
           scanf("%d",&value);
           push(value);
           break;

        case 2:
           pop();
           break;

        case 3:
           display();
           break;

        case 4:
           printf("\nExiting the program");
           exit(0);

        default:
            printf("\nInvalid option!!!Choose from the given options.\n");
            break;
        }
    }
}
 void push(int value)
 {
     if (top == SIZE-1)
     {
        printf("\nStack is FULL.Insertion is not possible\n");
     }
     else
     {
         top = top+1;
         stack[top]=value;
     }

 }

  void pop()
  {
      if(top == -1)
      {
          printf("\nStack is EMPTY\n");
      }
      else
      {
        printf("\nDeleted :%d",stack[top]);
        top = top-1;
      }
  }

  void display()
  {
      int i;
      if(top == -1)
       {
           printf("\nStack is EMPTY\n");
       }
      else
      {
        printf("\nArray elements\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
      }
    }
