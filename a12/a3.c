#include<stdio.h>

void add(int real1,int img1, int real2,int img2)
{
    int real,img;
    real=real1+real2;
    img=img1+img2;

    printf("sum = %d + %di\n",real,img);
}

int main()
{
    int real1=1,real2=2,img1=3,img2=4;

    printf("complex numbers are %d+%di and %d+%di\n",real1,img1,real2,img2);
    add(real1,img1,real2,img2);
    return 0;

}
