// FIBONACCI SERIES ---

#include <stdio.h>

// Function to generate Fibonacci series
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Generate Fibonacci series
    generateFibonacci(n);

    return 0;
}
