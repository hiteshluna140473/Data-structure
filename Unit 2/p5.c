#include <stdio.h>
#include <stdio.h>

int stack[10];
int top=-1;

void push(int base)
{
    top++;
    stack[top]=base;
}
int pop()
{
    int v;
    v=stack[top];
    top--;
    return v;
}

void main()
{
    int base,power,i,val,mul;

    printf("enter number:");
    scanf("%d",&base);

    printf("enter power:");
    scanf("%d",&power);

    for(i=1; i <= power;i++)
    {
        push(base);
    }
    mul=1;

    for(i=1;i<=power;i++)
    {
        val=pop();
        mul=mul*val;
    }
    printf(" Result = %d",mul);

getch();
}
