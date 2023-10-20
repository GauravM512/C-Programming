#include<stdio.h>

double sum(double a,double b)
{
    return a+b;
}

double average(double a,double b)
{
    return (a+b)/2;
}

int main()
{
    double a,b;
    printf("Enter two numbers = ");
    scanf("%lf%lf",&a,&b);
    printf("Sum = %.0lf and average = %.2lf \n",sum(a,b),average(a,b));

    return 0;
}