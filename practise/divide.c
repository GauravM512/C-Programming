#include<stdio.h>

int divide(int a,int b)
{
    if (a==0)
        return 0;
    else
        return 1+divide(a-b,b);
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d / %d = %d\n",a,b,divide(a,b));
    return 0;
}