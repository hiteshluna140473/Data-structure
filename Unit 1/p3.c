//create arrys a b and c of size 3 perform c = a + b.

#include<stdio.h>
#include<conio.h>


int main()
{

    int a[3] = {5, 12, 8};
    int b[3] = {3, 4, 2};

    int c[3];

    for (int i = 0; i < 3; i++)

    {
        c[i] = a[i] + b[i];
    }

    printf("Array c (a + b) results:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }

    return 0;
}
