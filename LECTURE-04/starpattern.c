#include <stdio.h>

int main() {
    int i, j, n, space;

    printf("Enter the number of levels in the pyramid: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // Loop through each level
        for (space = 1; space <= n - i; space++) { // Print spaces
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) { // Print stars
            printf("*");
        }
        printf("\n"); // Move to the next line after each level
    }

    return 0;
}
