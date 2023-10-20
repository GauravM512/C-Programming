#include<stdio.h>

int fact(int a)
{
    if(a==0)
        return 1;
    return a*fact(a-1);
}

int ncr(int n, int r)
{
    if(r>n)
    {
        printf("R cannot be greater than N");
        return 0;
    }
    return fact(n)/(fact(n-r)*fact(r));
}

int main()
{
    int n,r,ans;
    printf("Enter N and R =");
    scanf("%d%d",&n,&r);
    ans=ncr(n,r);
    printf("%dc%d = %d\n",n,r,ans);
    return 0;
}