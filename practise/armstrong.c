#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int sum = 0, rem, temp = n;
    int c = 0;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    n = temp;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, c);
        n = n / 10;
    }

    if (sum == temp)
        return 1; // It's an Armstrong number
    else
        return 0; // It's not an Armstrong number
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}
