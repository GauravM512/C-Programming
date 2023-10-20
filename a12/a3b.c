#include<stdio.h>

int printeven(int n)
{
    for(int i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
    }
}

int printodd(int n)
{
    for(int i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int n;
    printf("Enter range= ");
    scanf("%d",&n);
    printf("Even\n");
    printeven(n);
    printf("\nOdd\n");
    printodd(n);
    return 0;
}
