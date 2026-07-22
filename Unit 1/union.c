#include<stdio.h> #include<conio.h>

union student
{
int rollno;
};

void main()
{
    union student s1;

    printf("\n Enter Roll Number : ");
    scanf("%d",&s1.rollno);

    printf("\n Student Data is as follows ");
    printf("\n ");

    printf("\n Roll Number is : %d",s1.rollno);

    getch();
}
