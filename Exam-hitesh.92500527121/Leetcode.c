// Leet code program no 203) remove link list element.
#include <stdio.h>
#include <stdlib.h>

struct node {

    int data;

    struct node *next;

};
struct node *start = NULL;

void create()
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter data: ");
    scanf("%d", &num);

    while (num != -1) {

        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        if (start == NULL)
            {
                start = new_node;
            }
            else
            {
                ptr = start;

                while (ptr->next != NULL)

                    ptr = ptr->next;
                    ptr->next = new_node;

            }

            printf("Enter data: ");
            scanf("%d", &num);

    }

}
void display() {

    struct node *ptr = start;

    if (ptr == NULL) {

        printf("List is empty\n");

        return;

    }

    printf("List: ");

    while (ptr != NULL) {

        printf("%d -> ", ptr->data);

        ptr = ptr->next;

    }

    printf("NULL\n");

}

void delete_specific()
{

    struct node *ptr, *preptr = NULL;
    int val;
    if (start == NULL)
        {
            printf("List is empty\n");
            return;
        }
    printf("Enter value to delete: ");
    scanf("%d", &val);
    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        preptr = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        printf("Node not found\n");

    } else if (ptr == start) {
        start = start->next;
        free(ptr);

    } else {
        preptr->next = ptr->next;
        free(ptr);
    }

}
int main()
{

    int choice;
    while (1) {
        printf("\n 1.Create \n 2.display \n 3.Delete Specific \n 4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: create(); break;
            case 2: display(); break;
            case 3: delete_specific(); break;
            case 4: exit(0);

            default: printf("Invalid choice\n");

        }

    }

    return 0;

}
