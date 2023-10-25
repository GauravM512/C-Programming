#include <stdio.h>

// Function to copy elements from one array to another
void copyArray(int source[], int destination[], int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    // Input elements for the source array
    printf("Enter elements for the source array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Call the function to copy elements from the source array to the destination array
    copyArray(sourceArray, destinationArray, size);

    // Display the elements in the destination array
    printf("Elements in the destination array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }

    printf("\n");

    return 0;
}
