#include<stdio.h>


//print fibo till n
void fibo_till_n(int n)
{
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibo_till_n(n);
    return 0;
}