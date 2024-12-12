/*
Enter number of rows: 5
...........

*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
............
*/

#include <stdio.h>

int main() {
    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);

    // Upper part of the butterfly
    for (int i = 1; i <= row; i++) {
        // Left side stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (row - i); j++) {
            printf(" ");
        }
        // Right side stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the butterfly
    for (int i = row; i >= 1; i--) {
        // Left side stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (row - i); j++) {
            printf(" ");
        }
        // Right side stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

