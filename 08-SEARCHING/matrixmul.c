#include <stdio.h>

#define ROWS 3
#define COLS 3

void multiplyMatrices(int firstMatrix[ROWS][COLS], int secondMatrix[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int secondMatrix[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[ROWS][COLS];

    multiplyMatrices(firstMatrix, secondMatrix, result);

    printf("First Matrix:\n");
    printMatrix(firstMatrix);

    printf("Second Matrix:\n");
    printMatrix(secondMatrix);

    printf("Resultant Matrix after Multiplication:\n");
    printMatrix(result);

    return 0;
}
