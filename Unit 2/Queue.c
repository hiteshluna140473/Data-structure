#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void insert()
{
    int val;
    if (rear == MAX - 1)
	{
		printf("\nQueue Overflow! Cannot add more elements.\n");
   	}
	else
	{
        printf("Enter the value to insert: ");
        scanf("%d", &val);

            if (front == -1)
            {
           		 	front = 0;
            }
        		rear = rear + 1;
        		queue[rear] = val;
        		printf("%d inserted successfully.\n", val);
    }
}

void delete()
{
	if (front == -1 || front > rear)
	{
        		printf("\nQueue Underflow! No elements to delete.\n");
   	} else
        {
        		int val = queue[front];
        		printf("\nDeleted element: %d\n", val);
        		front = front + 1;
        }
}

void display()
{
    	if (front == -1 || front > rear)
        {
        		printf("\nQueue is empty.\n");
    	} else
    	{
        		printf("\nQueue elements are: ");
        		for (int i = front; i <= rear; i++)
                {
            			printf("%d ", queue[i]);
        		}
        	printf("\n");
    	}
}

int main()
{
    int choice;

    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display\n");
        printf("4. Exit\n");

        switch (choice)
        {
                case 1:
                insert();
                break;

                case 2:
                delete();
                break;

                case 3:
                display();
                break;

                case 4:
                printf("Exiting program.\n");
                exit(0);
                default:
                    printf("Invalid choice!select between 1 and 4.\n");
        }
    }
    return 0;
}
