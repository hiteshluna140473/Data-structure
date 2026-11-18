//write a program with following oprations in queue insert, delete, display and exit.
#include <stdio.h>
#include <conio.h>
#define SIZE 5

int queue[SIZE];

int front = -1;

int rear = -1;


void insert(int value)
{

    if (rear == SIZE - 1)

    {

        printf("\nQueue Overflow! Cannot insert %d.\n", value);

    } else {

        if (front == -1)

        {

            front = 0;

        }

        rear++;

        queue[rear] = value;

        printf("\n%d inserted successfully.\n", value);

    }

}

void delete()
{
    if (front == -1 || front > rear)

    {

        printf("\nQueue Underflow! Nothing to delete.\n");

    } else {

        printf("\nDeleted element: %d\n", queue[front]);

        front++;

        if (front > rear)

        {

            front = rear = -1;

        }

    }

}

void display()

{
    if (front == -1)
    {

        printf("\n Queue is empty.\n");

    } else {

        printf("\n Queue elements is: ");

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

        printf("\n1. Insert ");
        printf("\n2. Delete ");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)

        {

            case 1:

                printf("Enter the value to insert: ");

                scanf("%d", &value);

                insert(value);

                break;

            case 2:

                delete();

                break;

            case 3:

                display();

                break;

            case 4:

                printf("\nExiting program.\n");

                exit(0);

            default:

                printf("\n Invalid choice! \n");

        }

    }

    return 0;

}
