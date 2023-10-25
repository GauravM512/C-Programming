#include<stdio.h>

void word(int n)
{
    switch (n)
    {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    case 0:
        printf("Zero ");
        break;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    }

    while (rev != 0)
    {
        rem = rev % 10;
        word(rem);
        rev = rev/10;
    }
    

    return 0;
}

