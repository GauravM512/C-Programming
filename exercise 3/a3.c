#include <stdio.h>

int main() {
    int x, y, choice,q,r,temp;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);


    printf("Options:\n");
    printf("1. Equality\n");
    printf("2. Less Than\n");
    printf("3. Quotient and Remainder\n");
    printf("4. Range Check\n");
    printf("5. Swap\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (x == y) {
                printf("x is equal to y\n");
            } else {
                printf("x is not equal to y\n");
            }
            break;
        case 2:
            if (x < y) {
                printf("x is less than y\n");
            } else {
                printf("x is not less than y\n");
            }
            break;
        case 3:
            if (y != 0) {
                q = x / y;
                r = x % y;
                printf("Quotient: %d, Remainder: %d\n", q, r);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 4:
            int num;
            printf("Enter a number to check if it's in range: ");
            scanf("%d", &num);
            if (num >= x && num <= y) {
                printf("%d is in the range [x, y]\n", num);
            } else {
                printf("%d is not in the range [x, y]\n", num);
            }
            break;
        case 5:
            temp = x;
            x = y;
            y = temp;
            printf("After swapping, x = %d and y = %d\n", x, y);
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
    }

    return 0;
}
