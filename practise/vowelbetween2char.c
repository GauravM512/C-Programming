#include<stdio.h>

int func(char x,char y)
{
    int i;
    for(i=x+1;i<y;i++)
    {
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
            printf("%c ",i);
    }
    return 0;
}

int main()
{
    char x,y;
    printf("Enter two characters: ");
    scanf("%c %c",&x,&y);
    func(x,y);
    printf("\n");
    return 0;
}