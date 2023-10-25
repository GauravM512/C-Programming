#include <stdio.h>

int main()
{
    int size1, size2;

    // Input the sizes of the arrays
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int array1[size1], array2[size2];

    // Input the elements of the first array
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }

    // Input the elements of the second array
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
    }

    // Find and print the intersection of the two arrays
    printf("Intersection of the two arrays: ");
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j])
            {
                printf("%d ", array1[i]);
                break; // Break the inner loop once a match is found
            }
        }
    }

    printf("\n");

    return 0;
}
