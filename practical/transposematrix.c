#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");

    // Input matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The original matrix is:\n");

    // Display original matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the matrix is:\n");

    // Display transpose of matrix
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
