// create arrys A,B of size 6, merge A and B into c.

#include<stdio.h>
#include <stdio.h>

void main()

{

    int A[6] = {1, 2, 3, 4, 5, 6};
    int B[6] = {7, 8, 9, 10, 11, 12};


    int C[12];
    int i;


    for (i = 0; i < 6; i++)
    {
        C[i] = A[i];
    }


    for (i = 0; i < 6; i++)
    {
        C[i + 6] = B[i];
    }


    printf("Merged Array C: ");

    for (i = 0; i < 12; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

getch();
}

