#include <stdio.h>

int findGCD(int a, int b)
{
    while (b != 0)
        {
            int remainder = a % b;
            a = b;
            b = remainder;
        }
        return a;
}

int main()
{
    int num1, num2, gcd;

    printf("Enter two integers: ");
    scanf("%d",&num1);

    printf("Enter two integers: ");
    scanf("%d",&num2);

    gcd = findGCD(num1, num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
