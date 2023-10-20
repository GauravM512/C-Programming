#include<stdio.h>

int fact(int a)
{
    if(a==0)
        return 1;
    return a*fact(a-1);
}

int main()
{
    int a,f;
    printf("Enter a Number= ");
    scanf("%d",&a);
    f=fact(a);
    printf("%d! = %d\n",a,f);
    return 0;
}