#include<stdio.h>

void accept(int a[20][20],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[20][20],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("\t%d",a[i][j]);
        
        printf("\n");
    }
}

void add(int a[20][20],int b[20][20],int ad[20][20],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            ad[i][j]=a[i][j]+b[i][j];
    }
}


int main()
{
    int a[20][20],b[20][20],ad[20][20];
    int r=2,c=2;
    accept(a,r,c);
    display(a,r,c);
    add(a,b,ad,r,c);

    return 0;
}