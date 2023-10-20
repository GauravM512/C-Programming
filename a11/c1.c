#include<stdio.h>


int binary(int n)
{
    int binary = 0, i = 1, remainder;
    while (n != 0)
    {
        remainder = n % 2;
        n = n/2;
        binary = binary + remainder * i;
        i = i*10;
    }
    return binary;
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    n=binary(n);
    printf("Binary number: %d\n", n);

    return 0;
}