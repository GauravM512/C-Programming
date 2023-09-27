#include<stdio.h>

double power(double x, int y){
    double result = 1;
    for(int i = 1; i <= y; i++){
        result *= x;
    }
    return result;
}

double factorial(int x){
    double result = 1;
    for(int i = 1; i <= x; i++){
        result *= i;
    }
    return result;
}

double series(int x, int n){
    double result = 0;
    for(int i = 1; i <= n; i++){
        if (i == n)
            printf("%d^%d/%d!", x, i, i);
        else
            printf("%d^%d/%d! + ", x, i, i);
        result += power(x, i) / factorial(i);
    }
    return result;
}


int main(){
    int x, n;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nResult: %.2lf", series(x, n));
    return 0;
}