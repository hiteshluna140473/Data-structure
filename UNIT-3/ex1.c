//at the beginning of the linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* START = NULL;

void insert_beginning()
{
    int val;
    struct Node* NEW_NODE = (struct Node*)malloc(sizeof(struct Node));

    if (NEW_NODE == NULL)
    {
        printf("OVERFLOW\n");
        return;
    }
    NEW_NODE->data = val;
    NEW_NODE->next = START;
    START = NEW_NODE;
}

void display()
{
    struct Node* ptr = START;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void main()
{
        int num;
        printf("enter number:");
        scanf("%d",&num);

        insert_beginning(10);
        insert_beginning(20);
        display();
    getch();
}
