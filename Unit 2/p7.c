#include <stdio.h>

void  main() {
    int num;

    printf("Enter a positive integer greater than 1: ");
    if (scanf("%d", &num) != 1 || num <= 1) {
        printf("Invalid input.enter a number greater than 1.\n");
        return 1;
    }

    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            printf("The smallest divisor of %d is: %d\n", num, i);
            break;
        }
    }

    getch();
}
