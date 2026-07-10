//create an arry of size 10, find the largest value from the array.

#include<stdio.h>
#include <stdio.h>

void main()
{
    int a[10];

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("\nThe largest value entered is: %d\n", largest);

getch();

}
