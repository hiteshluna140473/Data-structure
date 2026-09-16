// Before given Node

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* START = NULL;

void insert_before(int val, int num) {
    struct Node* NEW_NODE = (struct Node*)malloc(sizeof(struct Node));
    if (NEW_NODE == NULL) {
        printf("OVERFLOW\n");
        return;
    }
    NEW_NODE->data = val;

    if (START != NULL && START->data == num) {
        NEW_NODE->next = START;
        START = NEW_NODE;
        return;
    }

    struct Node* PTR = START;
    struct Node* PREPTR = PTR;



    while (PREPTR != NULL && PREPTR->data != num) {
        PREPTR = PTR;
        if (PTR != NULL) {
            PTR = PTR->next;
        }
    }

    if (PREPTR != NULL) {
        PREPTR->next = NEW_NODE;
        NEW_NODE->next = PTR;
    } else {
        printf("Node %d not found.\n", num);
        free(NEW_NODE);
    }
}


void setup_list()
{
    START = (struct Node*)malloc(sizeof(struct Node));
    START->data = 10;
    START->next = (struct Node*)malloc(sizeof(struct Node));
    START->next->data = 30;
    START->next->next = NULL;
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

void main()
{
    setup_list();
    printf("Original: "); display();

    insert_before(20, 30);
    printf("Updated:  "); display();
    getch();
}
