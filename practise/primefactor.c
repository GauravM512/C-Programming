#include<stdio.h>

int primefactor(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            return i;
    }
}


int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime factors of %d are: ",n);
    while(n!=1)
    {
        printf("%d ",primefactor(n));
        n=n/primefactor(n);
    }
    printf("\n");
    return 0;
}