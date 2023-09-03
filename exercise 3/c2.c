// Write a program having menu that has three options - add, subtract or multiply two fractions.
// The two fractions and the options are taken as input and the result is displayed as output. Each
// fraction is read as two integers, numerator and denominator.

#include <stdio.h>

int main()
{
    int num1, den1, num2, den2, choice, num3, den3;

    printf("Enter two fractions (numerator and denominator): ");
    scanf("%d %d %d %d", &num1, &den1, &num2, &den2);

    printf("Options:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        num3 = num1 * den2 + num2 * den1;
        den3 = den1 * den2;
        printf("Result: %d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, num3, den3);
        break;
        
    case 2:
        num3 = num1 * den2 - num2 * den1;
        den3 = den1 * den2;
        printf("Result: %d/%d - %d/%d = %d/%d\n", num1, den1, num2, den2, num3, den3);
        break;

    case 3:
        num3 = num1 * num2;
        den3 = den1 * den2;
        printf("Result: %d/%d * %d/%d = %d/%d\n", num1, den1, num2, den2, num3, den3);
        break;

    default:
        printf("Invalid choice. Please select a valid option.\n");
        break;
    }
}