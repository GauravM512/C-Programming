#include<stdio.h>

int digit(int n)
{
    if (n>=0 && n<=9)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(digit(n))
        printf("%d is a digit\n",n);
    else
        printf("%d is not a digit\n",n);
    return 0;
}