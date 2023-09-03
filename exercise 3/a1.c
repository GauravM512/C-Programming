//Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.

#include <stdio.h>

int main() {
    int a;

    printf("Enter a single digit (0-9): ");
    scanf("%d", &a);

    if (a >= 0 && a <= 9) {
        switch (a) {
            case 0:
                printf("Zero\n");
                break;
            case 1:
                printf("One\n");
                break;
            case 2:
                printf("Two\n");
                break;
            case 3:
                printf("Three\n");
                break;
            case 4:
                printf("Four\n");
                break;
            case 5:
                printf("Five\n");
                break;
            case 6:
                printf("Six\n");
                break;
            case 7:
                printf("Seven\n");
                break;
            case 8:
                printf("Eight\n");
                break;
            case 9:
                printf("Nine\n");
                break;
        }
    } else {
        printf("Invalid input! Please enter a single digit (0-9).\n");
    }

    return 0;
}
