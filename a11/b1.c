#include<stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int main()
{
    int a,b,c,d,ans;
    printf("Enter 4 numbers = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    ans = hcf(hcf(a,b),hcf(c,d));
    printf("hcf = %d\n",ans);
    return 0;
}