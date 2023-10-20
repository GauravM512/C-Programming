#include<stdio.h>

int cube(int a)
{
    int c=1;
    for(int i=1;i<=3;i++)
    {
        c=c*a;
    }
    return c;
}

int main()
{
    int a,c;
    printf("Enter a number= ");
    scanf("%d",&a);

    c=cube(a);

    printf("Cube of %d = %d\n",a,c);
    return 0;
}