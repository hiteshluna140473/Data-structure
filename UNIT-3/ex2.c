// at the end of the linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* START = NULL;

void insert_end(int val)
{
    struct Node* NEW_NODE = (struct Node*)malloc(sizeof(struct Node));
    if (NEW_NODE == NULL)
    {
        printf("OVERFLOW\n");
        return;
    }
    NEW_NODE->data = val;
    NEW_NODE->next = NULL;

    if (START == NULL)
    {
        START = NEW_NODE;
        return;
    }

    struct Node* PTR = START;
    while (PTR->next != NULL)
    {
        PTR = PTR->next;
    }
    PTR->next = NEW_NODE;
}

void display()
{
    struct Node* ptr = START;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    insert_end(10);
    insert_end(20);
    display();
return 0;
}
