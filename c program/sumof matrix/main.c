#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &col1);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &col2);

    if(row1 != row2 || col1 != col2) {
        printf("Matrices cannot be added. They must have the same dimensions.\n");
        return 0;
    }

    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[row1][col1];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Result matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}