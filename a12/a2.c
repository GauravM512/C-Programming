#include<stdio.h>

int swap(int b)
{
    return b;
}

int main()
{
    int a=1,b=2,c=a;
    a=swap(b);
    b=swap(c);
    printf("%d %d",a,b);
    return 0;
}