#include <stdio.h>

// Function to calculate the HCF (GCD) of two numbers
int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

// Function to calculate the LCM of two numbers
int lcm(int a, int b) {
    int gcd = hcf(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result_lcm = lcm(num1, num2);
    int result_hcf = hcf(num1,num2);
    printf("LCM of %d and %d is %d\n", num1, num2, result_lcm);
    printf("HCF of %d and %d is %d\n", num1, num2, result_hcf);

    return 0;
}
