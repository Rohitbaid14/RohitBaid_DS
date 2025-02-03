#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int arr[SIZE];
int indx = 0;

void insertelement();
void deleteelement();
void displayarray();

void main()
{
    int choice,element;
    while(1)
    {
            printf("\n\t\tMenu\t\t\n");
            printf("Select from the given options\n");
            printf("Option 1: Insert an element\nOption 2: Delete an element\nOption 3: Display array.\nOption 4: Exit the program.");
            scanf("%d",choice);

    switch(choice)
    {
        case 1:
           printf("Enter index position to insert");
           scanf("%d",&indx);
           printf("Enter element to insert");
           scanf("%d",&element);
           insertelement(element);
           break;

        case 2:
           printf("Enter index position to delete");
           scanf("%d",&indx);
           deleteelement();
           break;

        case 3:
           displayarray();

        case 4:
           printf("Exiting the program");
           exit(0);


    }
    }
    return 0;
}

void insertelement(int element)
{
    if(indx<0 || indx>SIZE)
        printf("Invalid index:%d",indx);
    else
        arr[indx]=element;
        printf("Element %d is inserted at index %d\n",element,indx);
}

void deleteelement()
{
    if(indx<0 || indx>SIZE)
        {
            printf("Invalid index:%d",indx);
        }
    else
        {
            arr[indx]= 0;
            printf("Element at index %d is deleted\n",indx);
        }
}

void displayarray()
{
    int emptyflag=1;int i;
    printf("Array elements\n");
    for(i=0;i<SIZE;i++)
        {
            if(arr[i]!= 0)
            {
                emptyflag = 0;
            }
            printf("%d\t",arr[i]);
        }

    if(emptyflag == 1)
    {
        printf("The array is empty");
    }
}
