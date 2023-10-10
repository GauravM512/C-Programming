#include<stdio.h>

int multiply(int a,int b)
{
    if (b==0)
        return 0;
    else
        return a+multiply(a,b-1);
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d * %d = %d\n",a,b,multiply(a,b));
    return 0;
}