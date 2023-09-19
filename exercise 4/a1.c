#include <stdio.h>

int main() {
    int i,n;
    
    printf("Enter an integer n: ");
    scanf("%d", &n);

    printf("Even numbers up to %d are:\n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
