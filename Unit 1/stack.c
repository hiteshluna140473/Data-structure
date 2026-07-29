#include<stdio.h>
#include<conio.h>
#define MAX 10

int stack[10];
int top = -1;

void push()
{
    int val;

    if (top == MAX - 1)
    {
        printf("\n stack overflow!cannot insert element: \n");

    }
    else

    {
        printf("enter element into push:");
        scanf("%d",&val);
        top++;
        stack[top] = val;
        printf("inserted successfully");

    }

}

void pop()
{
    if (top == -1)
        {
            printf ("\n stack is empty:\n");
        }
        else
        {
            printf("\N stack is successfully work: ");
            top--;
        }
}

void peek()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("TOP most Element is %d", stack[top]);
    }
}

void update()
{
    int i,x;
        printf("enter the element you want to update:");
        scanf("%d",&i);

        if(top -i+1 == -1)
        {
            printf("stack is empty");
        }
        else
        {
            printf("enter the new value:");
            scanf("%d",&x);
            stack[top-i+1]=x;
        }
}
void display()
{
    if (top == -1)
    {
        printf("stack is empty!\n");

    }
    else
    {
        printf("current Stack Elements:\n");
        for(int i = top; i >= 0; i--)
        {
            printf("|%d | \n",stack[i]);
        }
        printf("--------\n");

    }

}

void main()
{
    int choice;
    while(1)

    {
        printf("\n---stack menu-----\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. update\n");
        printf("5. display\n");
        printf("6. exit\n");

        printf("enter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                update();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("program terminated.\n");
                exit(0);

            default:
                printf("invalid choice!please enter valid choice.\n");

        }

    }
getch();
}
