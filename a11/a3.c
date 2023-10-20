#include<stdio.h>

void display()
{
    char name[20];
    printf("Enter your name= ");
    scanf("%s",name);
    for(int i=1;i<=10;i++)
        printf("%s\n",name);
}

int main()
{
    display();
    return 0;
}