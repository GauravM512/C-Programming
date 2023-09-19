#include <stdio.h>

int main() {
    int i,x, n, result=1;

    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        result *= x;
    }

    // Display the result
    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}
