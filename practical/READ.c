#include <stdio.h>

// Function to read 'n' integers into an array, display the elements, and calculate sum and average
void READ(int arr[], int n) {
    int sum = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    double average = (double)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);
}

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    READ(arr, n);

    return 0;
}
