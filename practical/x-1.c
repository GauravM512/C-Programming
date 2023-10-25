#include<stdio.h>

int main()
{
    int x, y,sum=0;
    printf("Enter a value of x: ");
    scanf("%d",&x);
    printf("Enter Number of terms: ");
    scanf("%d",&y);

    for(int i=1;i<=y;i++)
    {
        sum=sum+(x-i);
    }
    


    return 0;
}