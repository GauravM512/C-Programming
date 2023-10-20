#include<stdio.h>

int main()
{
    printf("I am main");
    return 0;
}
int callmain()
{
    printf("I am calling main");
    main();
    return 1;
}
//https://easyupload.io/m/4ivlw0