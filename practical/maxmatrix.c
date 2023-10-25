#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int max = matrix[0][0];
    int min = matrix[0][0];

    // Find maximum and minimum elements in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("Maximum element in the matrix: %d\n", max);
    printf("Minimum element in the matrix: %d\n", min);

    return 0;
}
