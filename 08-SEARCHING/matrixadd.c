#include <stdio.h>

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 3;
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int mat2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[3][3];

    addMatrices(rows, cols, mat1, mat2, result);

    printf("Matrix 1:\n");
    printMatrix(rows, cols, mat1);
    
    printf("Matrix 2:\n");
    printMatrix(rows, cols, mat2);

    printf("Resultant Matrix after Addition:\n");
    printMatrix(rows, cols, result);

    return 0;
}
