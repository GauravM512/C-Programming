#include<stdio.h>

void table(int a)
{
    for(int i=1;i<=10;i++)
        printf("%d X %d = %d\n",a,i,a*i);
}

int main()
{
    int a;
    printf("Enter a number= ");
    scanf("%d",&a);
    table(a);
    return 0;
}