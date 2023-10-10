#include<stdio.h>

int armstrong(int n)
{
    int sum=0,rem,temp=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (sum==temp)
        return 1;
    else
        return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(armstrong(n))
        printf("%d is an armstrong number\n",n);
    else
        printf("%d is not an armstrong number\n",n);
    return 0;

}